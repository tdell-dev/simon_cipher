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

  input  wire  [DATA_ADDR_WIDTH-1  :0] simon_data_araddr  ,
  input  wire  [DATA_BURST_WIDTH-1 :0] simon_data_arburst ,
  input  wire  [DATA_CACHE_WIDTH-1 :0] simon_data_arcache ,
  input  wire  [DATA_LEN_WIDTH-1   :0] simon_data_arlen   ,
  input  wire  [DATA_LOCK_WIDTH-1  :0] simon_data_arlock  ,
  input  wire  [DATA_PROT_WIDTH-1  :0] simon_data_arprot  ,
  input  wire  [DATA_QOS_WIDTH-1   :0] simon_data_arqos   ,
  input  wire  [DATA_REGION_WIDTH-1:0] simon_data_arregion,
  input  wire  [DATA_SIZE_WIDTH-1  :0] simon_data_arsize  ,
  output logic [                  0:0] simon_data_arready ,
  input  wire  [                  0:0] simon_data_arvalid ,

  input  wire  [DATA_ADDR_WIDTH-1  :0] simon_data_awaddr  ,
  input  wire  [DATA_BURST_WIDTH-1 :0] simon_data_awburst ,
  input  wire  [DATA_CACHE_WIDTH-1 :0] simon_data_awcache ,
  input  wire  [DATA_LEN_WIDTH-1   :0] simon_data_awlen   ,
  input  wire  [DATA_LOCK_WIDTH-1  :0] simon_data_awlock  ,
  input  wire  [DATA_PROT_WIDTH-1  :0] simon_data_awprot  ,
  input  wire  [DATA_QOS_WIDTH-1   :0] simon_data_awqos   ,
  input  wire  [DATA_REGION_WIDTH-1:0] simon_data_awregion,
  input  wire  [DATA_SIZE_WIDTH-1  :0] simon_data_awsize  ,
  output logic [                  0:0] simon_data_awready ,
  input  wire  [                  0:0] simon_data_awvalid ,

  input  wire  [                  0:0] simon_data_bready  ,
  output logic [DATA_RESP_WIDTH-1  :0] simon_data_bresp   ,
  output logic [                  0:0] simon_data_bvalid  ,

  output logic [DATA_DATA_WIDTH-1  :0] simon_data_rdata   ,
  output logic [                  0:0] simon_data_rlast   ,
  input  wire  [                  0:0] simon_data_rready  ,
  input  wire  [DATA_RESP_WIDTH-1  :0] simon_data_rresp   ,
  output logic [                  0:0] simon_data_rvalid  ,

  input  wire  [DATA_DATA_WIDTH-1  :0] simon_data_wdata   ,
  input  wire  [                  0:0] simon_data_wlast   ,
  output logic [                  0:0] simon_data_wready  ,
  input  wire  [DATA_STRB_WIDTH-1  :0] simon_data_wstrb   ,
  input  wire  [                  0:0] simon_data_wvalid
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
    .DATA_WIDTH   ( DATA_DATA_WIDTH   ),
    .ADDR_WIDTH   ( DATA_ADDR_WIDTH   ),
    .BURST_WIDTH  ( DATA_BURST_WIDTH  ),
    .CACHE_WIDTH  ( DATA_CACHE_WIDTH  ),
    .LEN_WIDTH    ( DATA_LEN_WIDTH    ),
    .LOCK_WIDTH   ( DATA_LOCK_WIDTH   ),
    .PROT_WIDTH   ( DATA_PROT_WIDTH   ),
    .QOS_WIDTH    ( DATA_QOS_WIDTH    ),
    .REGION_WIDTH ( DATA_REGION_WIDTH ),
    .SIZE_WIDTH   ( DATA_SIZE_WIDTH   ),
    .RESP_WIDTH   ( DATA_RESP_WIDTH   ),
    .STRB_WIDTH   ( DATA_STRB_WIDTH   )
  ) i_simon_axi_to_fifo (
    .clk                 ( clk                 ),
    .rst                 ( rst                 ),

    .araddr              ( simon_data_araddr   ),
    .arburst             ( simon_data_arburst  ),
    .arcache             ( simon_data_arcache  ),
    .arlen               ( simon_data_arlen    ),
    .arlock              ( simon_data_arlock   ),
    .arprot              ( simon_data_arprot   ),
    .arqos               ( simon_data_arqos    ),
    .arregion            ( simon_data_arregion ),   
    .arsize              ( simon_data_arsize   ),   
    .arready             ( simon_data_arready  ),   
    .arvalid             ( simon_data_arvalid  ),   
                         
    .rdata               ( simon_data_rdata    ),
    .rlast               ( simon_data_rlast    ),
    .rready              ( simon_data_rready   ),
    .rresp               ( simon_data_rresp    ),
    .rvalid              ( simon_data_rvalid   ),
                         
    .awaddr              ( simon_data_awaddr   ),
    .awburst             ( simon_data_awburst  ),
    .awcache             ( simon_data_awcache  ),
    .awlen               ( simon_data_awlen    ),
    .awlock              ( simon_data_awlock   ),
    .awprot              ( simon_data_awprot   ),
    .awqos               ( simon_data_awqos    ),
    .awregion            ( simon_data_awregion ),
    .awsize              ( simon_data_awsize   ),
    .awready             ( simon_data_awready  ),
    .awvalid             ( simon_data_awvalid  ),
                                   
    .bready              ( simon_data_bready   ),
    .bresp               ( simon_data_bresp    ),
    .bvalid              ( simon_data_bvalid   ),
    .wdata               ( simon_data_wdata    ),
    .wlast               ( simon_data_wlast    ),
    .wready              ( simon_data_wready   ),
    .wstrb               ( simon_data_wstrb    ),
    .wvalid              ( simon_data_wvalid   ),
 
    .ingress_fifo_dout   ( ingress_fifo_dout   ),
    .ingress_fifo_vld    ( ingress_fifo_vld    ),
    .ingress_fifo_rdy    ( ingress_fifo_rdy    ),
    
    .egress_fifo_din     ( egress_fifo_din     ),
    .egress_fifo_vld     ( egress_fifo_vld     ),
    .egress_fifo_rdy     ( egress_fifo_rdy     )
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

  assign key_addr     = {2'b00, round};
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
