`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Personal
// Engineer: tdell
// 
// Create Date: 10/15/2023 01:33:37 PM
// Design Name: 
// Module Name: simon
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module key_schedule (
  /* verilator lint_off UNUSEDSIGNAL */
  input wire           clk               ,
  input wire           rst               ,

  input  wire  [255:0] init_key          ,
  input  wire          key_compute_start ,
  
  input  wire          key_rd_en         ,
  input  wire  [ 8:0]  key_addr          ,
  output logic [63:0]  key_data          ,
  output logic         key_data_vld
  /* verilator lint_on UNUSEDSIGNAL */
);

  // This key scheduler is exclusively for the 256b key
  // a key block is size 64b
  // we are using a 4-word key expansion here
  // 72 rounds

  // For the most efficient, streamable cipher implementation
  //  the subkeys should be accessible via a memory.
  // On the zub1cg, we'd need this to be a BRAM since no URAMs are available.
  // Each subkey is 64b in size, and we need a depth of 72.
  // A Single 36Kb BRAM  should satisfy this requirement.
  // There are two starting conditions for this key generation:
  //  1. All 8x32b key chunks have been written into the init_key position.
  //  2. One or more of the 32b key chunks have been overwritten and the others should remain
  //To satisfy 1, each chunk sets a bit in the activate word. When all bits are 1, start generation.
  //To satisfy 2, an override bit at address 8 will start the generation.

  function logic [63:0] ror3 ( input [63:0] inp );
    ror3 = {inp[2:0], inp[63:3]};
  endfunction

  function logic [63:0] ror1 ( input [63:0] inp );
    ror1 = {inp[0], inp[63:1]};
  endfunction


  logic [72:0] z4 = 73'h0e2fdc94c3a046d678b; //since the sequence repeats every 62b, the upper 2 bits of the MSB's f are of the next sequence and the e2f is thus the same sequence offset by 2 bits
  logic [63:0] k0;
  logic [63:0] k1;
  logic [63:0] k2;
  logic [63:0] k3;

  //wire  [63:0] P;
  wire  [63:0] const_seq;

  logic        running;
  logic [ 6:0] round;

  always_ff@(posedge clk) begin
    if ( rst ) begin
      round <= '0;
    end else if ( key_compute_start ) begin
      round <= '0;
    end else if ( running ) begin
      round <= round + 1;
    end
  end

  always_ff@(posedge clk) begin
    if ( rst ) begin
      running <= 1'b0; 
    end else if ( key_compute_start ) begin
      running <= 1'b1;
    end else if ( round == 71 ) begin
      running <= 1'b0;
    end
  end

//always_ff@(posedge clk) begin
//  if ( rst ) begin
//    key_mem_full <= 1'b0;
//  end else begin
//    key_mem_full <= (round == 71);
//  end
//end

  assign const_seq    = 64'hfffffffffffffffc ^ { 63'h0000000000000000, z4[round]};

  always_ff@(posedge clk) begin
    if ( rst ) begin
      k0 <= '0;
      k1 <= '0;
      k2 <= '0;
      k3 <= '0;

    end else if ( key_compute_start ) begin
      k0 <= init_key[ 63:  0];
      k1 <= init_key[127: 64];
      k2 <= init_key[191:128];
      k3 <= init_key[255:192];
 
    end else if ( running ) begin
      k0 <= k1;
      k1 <= k2;
      k2 <= k3;
      k3 <= const_seq ^ ror1(ror3(k3) ^ k1) ^ (ror3(k3) ^ k1) ^ k0;
    end
  end

 // P = k3 shifted right by 3, XOR'd with k1
 // Q = P shifted right by 1
 // c = 2**n-4 ( in this case n is 64 because 128b data), 0xfffffffffffffffc
 // k3 becomes ((c XOR z4[round]) XOR ( p XOR k0 ) XOR Q )

  logic key_rd_en_d;
  always_ff@(posedge clk) begin
    key_rd_en_d <= key_rd_en;
  end
  
  simon_key_bram i_simon_key_bram (
    .clka  ( clk            ),
    .ena   ( running        ), //1b
    .wea   ( running        ), //1b
    .addra ( {2'b00, round} ), //9b
    .dina  ( k0             ), //64b
    
    .clkb  ( clk            ), 
    .enb   ( 1'B1           ), //1b
    .addrb ( key_addr       ), //9b 
    .doutb ( key_data       )  //64b
  );
  
  //BRAM has fixed latency of 2
  always_ff@(posedge clk) begin
    if ( rst ) begin
      key_data_vld <= 1'b0;
    end else begin
      key_data_vld <= key_rd_en_d;
    end
  end

endmodule
