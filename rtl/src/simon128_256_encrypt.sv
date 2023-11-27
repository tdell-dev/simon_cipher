`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Personal
// Engineer: rptbt
// 
// Create Date: 10/20/2023 12:25:10 PM
// Design Name: 
// Module Name: simon128_256_encrypt
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


module simon128_256_encrypt #(
  parameter DATA_DATA_WIDTH   = 128,
  parameter DATA_ADDR_WIDTH   =  32,
  parameter DATA_BURST_WIDTH  =   2,
  parameter DATA_CACHE_WIDTH  =   4,
  parameter DATA_LEN_WIDTH    =   8,
  parameter DATA_LOCK_WIDTH   =   1,
  parameter DATA_PROT_WIDTH   =   3,
  parameter DATA_QOS_WIDTH    =   4,
  parameter DATA_REGION_WIDTH =   4,
  parameter DATA_SIZE_WIDTH   =   3,
  parameter DATA_RESP_WIDTH   =   2,
  parameter DATA_STRB_WIDTH   =  16,
  parameter KEY_WIDTH         =  64
) (
  input  wire                          clk                    ,
  input  wire                          rst                    , 
  
  input  wire                          key_mem_full           ,
  output logic                         key_rd_en              ,
  input  wire                          key_data_vld           ,
  output logic [8:0]                   key_addr               ,
  input  wire  [63:0]                  key_data               ,

  input  wire  [DATA_ADDR_WIDTH-1  :0] simon_block_in_araddr  ,
  input  wire  [DATA_BURST_WIDTH-1 :0] simon_block_in_arburst ,
  input  wire  [DATA_CACHE_WIDTH-1 :0] simon_block_in_arcache ,
  input  wire  [DATA_LEN_WIDTH-1   :0] simon_block_in_arlen   ,
  input  wire  [DATA_LOCK_WIDTH-1  :0] simon_block_in_arlock  ,
  input  wire  [DATA_PROT_WIDTH-1  :0] simon_block_in_arprot  ,
  input  wire  [DATA_QOS_WIDTH-1   :0] simon_block_in_arqos   ,
  input  wire  [DATA_REGION_WIDTH-1:0] simon_block_in_arregion,
  input  wire  [DATA_SIZE_WIDTH-1  :0] simon_block_in_arsize  ,
  output logic [                  0:0] simon_block_in_arready ,
  input  wire  [                  0:0] simon_block_in_arvalid ,

  input  wire  [DATA_ADDR_WIDTH-1  :0] simon_block_in_awaddr  ,
  input  wire  [DATA_BURST_WIDTH-1 :0] simon_block_in_awburst ,
  input  wire  [DATA_CACHE_WIDTH-1 :0] simon_block_in_awcache ,
  input  wire  [DATA_LEN_WIDTH-1   :0] simon_block_in_awlen   ,
  input  wire  [DATA_LOCK_WIDTH-1  :0] simon_block_in_awlock  ,
  input  wire  [DATA_PROT_WIDTH-1  :0] simon_block_in_awprot  ,
  input  wire  [DATA_QOS_WIDTH-1   :0] simon_block_in_awqos   ,
  input  wire  [DATA_REGION_WIDTH-1:0] simon_block_in_awregion,
  input  wire  [DATA_SIZE_WIDTH-1  :0] simon_block_in_awsize  ,
  output logic [                  0:0] simon_block_in_awready ,
  input  wire  [                  0:0] simon_block_in_awvalid ,

  input  wire  [                  0:0] simon_block_in_bready  ,
  output logic [DATA_RESP_WIDTH-1  :0] simon_block_in_bresp   ,
  output logic [                  0:0] simon_block_in_bvalid  ,

  output logic [DATA_DATA_WIDTH-1  :0] simon_block_in_rdata   ,
  output logic [                  0:0] simon_block_in_rlast   ,
  input  wire  [                  0:0] simon_block_in_rready  ,
  input  wire  [DATA_RESP_WIDTH-1  :0] simon_block_in_rresp   ,
  output logic [                  0:0] simon_block_in_rvalid  ,

  input  wire  [DATA_DATA_WIDTH-1  :0] simon_block_in_wdata   ,
  input  wire  [                  0:0] simon_block_in_wlast   ,
  input  wire  [                  0:0] simon_block_in_wready  ,
  input  wire  [DATA_STRB_WIDTH-1  :0] simon_block_in_wstrb   ,
  input  wire  [                  0:0] simon_block_in_wvalid
);

  function logic [63:0] ls1 ( input [63:0] inp );
    ls1 = {inp[62:0], inp[63]};
  endfunction

  function logic [63:0] ls2 ( input [63:0] inp );
    ls2 = {inp[61:0], inp[63:62]};
  endfunction

  function logic [63:0] ls8 ( input [63:0] inp );
    ls8 = {inp[55:0], inp[63:56]};
  endfunction

  logic [DATA_DATA_WIDTH-1: 0] ingress_fifo_dout;
  logic                        ingress_fifo_vld;
  logic                        ingress_fifo_rdy;
  
  logic [DATA_DATA_WIDTH-1: 0] egress_fifo_din;
  logic                        egress_fifo_vld;
  logic                        egress_fifo_rdy;

  logic [ 6 :0] round;
  logic         round_complete;

  simon_axi_to_fifo #(
    .DATA_DATA_WIDTH   ( DATA_DATA_WIDTH   ),
    .DATA_ADDR_WIDTH   ( DATA_ADDR_WIDTH   ),
    .DATA_BURST_WIDTH  ( DATA_BURST_WIDTH  ),
    .DATA_CACHE_WIDTH  ( DATA_CACHE_WIDTH  ),
    .DATA_LEN_WIDTH    ( DATA_LEN_WIDTH    ),
    .DATA_LOCK_WIDTH   ( DATA_LOCK_WIDTH   ),
    .DATA_PROT_WIDTH   ( DATA_PROT_WIDTH   ),
    .DATA_QOS_WIDTH    ( DATA_QOS_WIDTH    ),
    .DATA_REGION_WIDTH ( DATA_REGION_WIDTH ),
    .DATA_SIZE_WIDTH   ( DATA_SIZE_WIDTH   ),
    .DATA_RESP_WIDTH   ( DATA_RESP_WIDTH   ),
    .DATA_STRB_WIDTH   ( DATA_STRB_WIDTH   )
  ) i_simon_axi_to_fifo (
    .clk                     ( clk                     ),
    .rst                     ( rst                     ),
    .simon_block_in_araddr   ( simon_block_in_araddr   ),
    .simon_block_in_arburst  ( simon_block_in_arburst  ),
    .simon_block_in_arcache  ( simon_block_in_arcache  ),
    .simon_block_in_arlen    ( simon_block_in_arlen    ),
    .simon_block_in_arlock   ( simon_block_in_arlock   ),
    .simon_block_in_arprot   ( simon_block_in_arprot   ),
    .simon_block_in_arqos    ( simon_block_in_arqos    ),
    .simon_block_in_arregion ( simon_block_in_arregion ),   
    .simon_block_in_arsize   ( simon_block_in_arsize   ),   
    .simon_block_in_arready  ( simon_block_in_arready  ),   
    .simon_block_in_arvalid  ( simon_block_in_arvalid  ),   
 
    .simon_block_in_rdata    ( simon_block_in_rdata    ),
    .simon_block_in_rlast    ( simon_block_in_rlast    ),
    .simon_block_in_rready   ( simon_block_in_rready   ),
    .simon_block_in_rresp    ( simon_block_in_rresp    ),
    .simon_block_in_rvalid   ( simon_block_in_rvalid   ),
 
    .simon_block_in_awaddr   ( simon_block_in_awaddr   ),
    .simon_block_in_awburst  ( simon_block_in_awburst  ),
    .simon_block_in_awcache  ( simon_block_in_awcache  ),
    .simon_block_in_awlen    ( simon_block_in_awlen    ),
    .simon_block_in_awlock   ( simon_block_in_awlock   ),
    .simon_block_in_awprot   ( simon_block_in_awprot   ),
    .simon_block_in_awqos    ( simon_block_in_awqos    ),
    .simon_block_in_awregion ( simon_block_in_awregion ),
    .simon_block_in_awsize   ( simon_block_in_awsize   ),
    .simon_block_in_awready  ( simon_block_in_awready  ),
    .simon_block_in_awvalid  ( simon_block_in_awvalid  ),
                                   
    .simon_block_in_bready   ( simon_block_in_bready   ),
    .simon_block_in_bresp    ( simon_block_in_bresp    ),
    .simon_block_in_bvalid   ( simon_block_in_bvalid   ),
    .simon_block_in_wdata    ( simon_block_in_wdata    ),
    .simon_block_in_wlast    ( simon_block_in_wlast    ),
    .simon_block_in_wready   ( simon_block_in_wready   ),
    .simon_block_in_wstrb    ( simon_block_in_wstrb    ),
    .simon_block_in_wvalid   ( simon_block_in_wvalid   ),
 
    .ingress_fifo_dout       ( ingress_fifo_dout       ),
    .ingress_fifo_vld        ( ingress_fifo_vld        ),
    .ingress_fifo_rdy        ( ingress_fifo_rdy        ),
    
    .egress_fifo_din         ( egress_fifo_din         ),
    .egress_fifo_vld         ( egress_fifo_vld         ),
    .egress_fifo_rdy         ( egress_fifo_rdy         )
  );

  logic ingress_fifo_ack;
  logic ingress_fifo_ack_cap;
  logic ingress_fifo_ack_cap_d;
  logic ingress_fifo_ack_cap_dd;
  assign ingress_fifo_ack = ingress_fifo_vld & ingress_fifo_rdy;

  always_ff@(posedge clk) begin
    ingress_fifo_ack_cap_d  <= ingress_fifo_ack_cap;
    ingress_fifo_ack_cap_dd <= ingress_fifo_ack_cap_d;
  end

  always_ff@(posedge clk) begin
    if ( rst ) begin
      ingress_fifo_ack_cap <= 1'b0;
    end else if ( ingress_fifo_ack ) begin
      ingress_fifo_ack_cap <= 1'b1;
    end else if ( round_complete ) begin
      ingress_fifo_ack_cap <= 1'b0;
    end
  end

  always_ff@(posedge clk) begin
    if ( rst ) begin
      ingress_fifo_rdy <= 1'b0;
    end else if ( ingress_fifo_ack || ingress_fifo_ack_cap ) begin
      ingress_fifo_rdy <= 1'b0;
    end else begin
      ingress_fifo_rdy <= egress_fifo_rdy;
    end
  end
  
  assign round_complete = ( round == 75 );

  always_ff@(posedge clk) begin
    if ( rst ) begin
      round <= '0;
    end else if ( round_complete ) begin
      round <= '0;
    end else if ( ingress_fifo_ack | ingress_fifo_ack_cap ) begin
      round <= round + 1;
    end
  end

  logic [63:0] A;
  logic [63:0] B;
  logic [63:0] C;
  logic [63:0] D;
  logic [63:0] E;
  logic [63:0] F;
  logic [63:0] pt1;
  logic [63:0] pt0;

  logic [63:0] key_data_sel;

  assign A = ls1(pt1);
  assign B = ls8(pt1);
  assign C = A & B;
  assign D = pt0 ^ C;
  assign E = ls2(pt1);
  assign F = D ^ E;

  assign key_addr     = round;
  assign key_rd_en    = 1'b1;

  always_ff@(posedge clk) begin
    key_data_sel <= key_data;
  end

  always_ff@(posedge clk) begin
    if (  ingress_fifo_ack_cap_dd ) begin
      pt1 <= key_data_sel ^ F;
      pt0 <= pt1;
    end else begin
      pt1 <= ingress_fifo_dout[127:64];
      pt0 <= ingress_fifo_dout[ 63: 0];
    end
  end
    
  assign egress_fifo_din = { pt1, pt0 };
  assign egress_fifo_vld = round_complete;


endmodule