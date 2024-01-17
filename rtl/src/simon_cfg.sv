`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Personal
// Engineer: rptbt
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


module simon_cfg #(
  parameter KEYLEN_BYTES   =  32,
  parameter CFG_DATA_WIDTH =  32,
  parameter CFG_ADDR_WIDTH =  32,
  parameter CFG_PROT_WIDTH =   1,
  parameter CFG_RESP_WIDTH =   2,
  parameter CFG_STRB_WIDTH =   4
  ) (
  input  wire                       clk               ,
  input  wire                       rst               ,

  input  wire  [CFG_ADDR_WIDTH-1:0] simon_cfg_araddr  ,
  input  wire  [CFG_PROT_WIDTH-1:0] simon_cfg_arprot  , 
  output logic                      simon_cfg_arready ,
  input  wire                       simon_cfg_arvalid ,

  input  wire  [CFG_ADDR_WIDTH-1:0] simon_cfg_awaddr  ,
  input  wire  [CFG_PROT_WIDTH-1:0] simon_cfg_awprot  ,
  output reg                        simon_cfg_awready ,
  input  wire                       simon_cfg_awvalid ,

  input  wire                       simon_cfg_bready  ,
  output reg   [CFG_RESP_WIDTH-1:0] simon_cfg_bresp   ,
  output reg                        simon_cfg_bvalid  ,

  output reg   [CFG_DATA_WIDTH-1:0] simon_cfg_rdata   ,
  input  wire                       simon_cfg_rready  ,
  output reg                        simon_cfg_rresp   ,
  output reg                        simon_cfg_rvalid  ,

  input  wire  [CFG_DATA_WIDTH-1:0] simon_cfg_wdata   ,
  output reg                        simon_cfg_wready  ,
  input  wire  [CFG_STRB_WIDTH-1:0] simon_cfg_wstrb   ,
  input  wire                       simon_cfg_wvalid  ,

  output logic [KEYLEN_BYTES*8-1:0] init_key          ,
  output logic                      key_compute_start
);

  logic [ 3:0] int_raddr;
  logic [ 3:0] int_waddr;
  logic [31:0] int_wdata;
  logic [ 0:0] int_wvalid;
  logic [ 0:0] int_rvalid;

  localparam  BITS_PER_REG = 32;
  
  assign simon_cfg_awready = 1'b1;
  always_ff@(posedge clk) begin
    if ( rst ) begin
      int_waddr <= '0;
    end else if ( simon_cfg_awvalid ) begin
      int_waddr <= simon_cfg_awaddr[5:2];
    end
  end

  assign simon_cfg_wready = 1'b1;
  always_ff@(posedge clk) begin
    if ( rst ) begin
      int_wvalid <= '0;
    end else begin
       int_wvalid <= simon_cfg_wvalid;
    end
  end 

  always_ff@(posedge clk) begin
    if ( rst ) begin
      int_wdata <= '0;
    end else if ( simon_cfg_wvalid ) begin
      int_wdata <= simon_cfg_wdata;
    end
  end


  assign simon_cfg_arready = 1'b1;
  always_ff@(posedge clk) begin
    if ( rst ) begin
      int_raddr <= '0;
    end else if ( simon_cfg_arvalid ) begin
      int_raddr <= simon_cfg_araddr[5:2];
    end
  end

  always_ff@(posedge clk) begin
    if ( rst ) begin
      int_rvalid <= '0;
    end else begin
      int_rvalid <= simon_cfg_arvalid;
    end
  end
  
  always_ff@(posedge clk) begin
    if ( rst ) begin
      simon_cfg_rvalid <= '0;
    end else if ( simon_cfg_arvalid ) begin
      simon_cfg_rvalid <= 1'b1;
    end else if ( simon_cfg_rready ) begin
      simon_cfg_rvalid <= 1'b0;
    end
  end  

  always_ff@(posedge clk) begin
    if ( rst ) begin
      init_key <= '0;
    end else if ( int_wvalid ) begin
      case( int_waddr[2:0] )
        3'h0: begin
          init_key[31:0]    <=  int_wdata;
        end
       
        3'h1: begin
          init_key[63:32]   <=  int_wdata;
        end
       
        3'h2: begin
          init_key[95:64]   <=  int_wdata;
        end
       
        3'h3: begin
          init_key[127:96]  <=  int_wdata;
        end
       
        3'h4: begin
          init_key[159:128] <=  int_wdata;
        end
       
        3'h5: begin
          init_key[191:160] <=  int_wdata;
        end
       
        3'h6: begin
          init_key[223:192] <=  int_wdata;
        end
       
        3'h7: begin
          init_key[255:224] <=  int_wdata;
        end
     
        default: begin
          init_key[31:0] <= int_wdata;
        end

      endcase 
    end
  end
    
  always_ff@(posedge clk) begin
    if ( rst ) begin
      simon_cfg_rdata <= '0;
    end else if ( int_rvalid ) begin
      case( int_raddr[2:0] )
        3'h0: begin
          simon_cfg_rdata <= init_key[31:0]   ;
        end
       
        3'h1: begin
          simon_cfg_rdata <= init_key[31:0]   ;
        end
       
        3'h2: begin
          simon_cfg_rdata <= init_key[95:64]  ;
        end
       
        3'h3: begin
          simon_cfg_rdata <= init_key[127:96] ;
        end
       
        3'h4: begin
          simon_cfg_rdata <= init_key[159:128];
        end
       
        3'h5: begin
          simon_cfg_rdata <= init_key[191:160];
        end
       
        3'h6: begin
          simon_cfg_rdata <= init_key[223:192];
        end
       
        3'h7: begin
          simon_cfg_rdata <= init_key[255:224];
        end
     
        default: begin
          simon_cfg_rdata <= init_key[31:0]   ;
        end

      endcase 
    end
  end

  logic       key_start_compute_override;
  logic [7:0] word_filled;

  assign key_compute_start = &(word_filled) | key_start_compute_override;

  always_ff@(posedge clk) begin
    if ( simon_cfg_awvalid && simon_cfg_awaddr[5:2] == 8 ) begin
      key_start_compute_override <= 1'b1;
    end else begin
      key_start_compute_override <= 1'b0;
    end
  end
  
  
  generate
    for( genvar wfill_idx=0; wfill_idx<8; wfill_idx +=1 ) begin : set_word_filled
      always_ff@(posedge clk) begin
        if ( rst ) begin
          word_filled[wfill_idx] <= 1'b0;
        end else if ( key_compute_start ) begin
          word_filled[wfill_idx] <= 1'b0;
        end else if ( int_wvalid  && int_waddr == wfill_idx ) begin
          word_filled[wfill_idx] <= 1'b1;
        end
      end
    end
  endgenerate
  
  assign simon_cfg_bresp = '0;
  always_ff@(posedge clk) begin
    if ( simon_cfg_wvalid ) begin
      simon_cfg_bvalid <= 1'b1;
    end else begin
      simon_cfg_bvalid <= 1'b0;
    end
  end
      

endmodule
