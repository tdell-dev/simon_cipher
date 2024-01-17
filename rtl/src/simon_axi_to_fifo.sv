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


module simon_axi_to_fifo #(
  parameter DATA_WIDTH   = 128,
  parameter ADDR_WIDTH   =  32,
  parameter BURST_WIDTH  =   2,
  parameter CACHE_WIDTH  =   4,
  parameter LEN_WIDTH    =   8,
  parameter LOCK_WIDTH   =   1,
  parameter PROT_WIDTH   =   3,
  parameter QOS_WIDTH    =   4,
  parameter REGION_WIDTH =   4,
  parameter SIZE_WIDTH   =   3,
  parameter RESP_WIDTH   =   2,
  parameter STRB_WIDTH   =  16

) (

  input wire clk,
  input wire rst,

  input  wire  [ADDR_WIDTH-1  :0] araddr  ,
  input  wire  [BURST_WIDTH-1 :0] arburst ,
  input  wire  [CACHE_WIDTH-1 :0] arcache ,
  input  wire  [LEN_WIDTH-1   :0] arlen   ,
  input  wire  [LOCK_WIDTH-1  :0] arlock  ,
  input  wire  [PROT_WIDTH-1  :0] arprot  ,
  input  wire  [QOS_WIDTH-1   :0] arqos   ,
  input  wire  [REGION_WIDTH-1:0] arregion,
  input  wire  [SIZE_WIDTH-1  :0] arsize  ,
  output logic [             0:0] arready ,
  input  wire  [             0:0] arvalid ,

  input  wire  [ADDR_WIDTH-1  :0] awaddr  ,
  input  wire  [BURST_WIDTH-1 :0] awburst ,
  input  wire  [CACHE_WIDTH-1 :0] awcache ,
  input  wire  [LEN_WIDTH-1   :0] awlen   ,
  input  wire  [LOCK_WIDTH-1  :0] awlock  ,
  input  wire  [PROT_WIDTH-1  :0] awprot  ,
  input  wire  [QOS_WIDTH-1   :0] awqos   ,
  input  wire  [REGION_WIDTH-1:0] awregion,
  input  wire  [SIZE_WIDTH-1  :0] awsize  ,
  output logic [             0:0] awready ,
  input  wire  [             0:0] awvalid ,

  input  wire  [             0:0] bready  ,
  output logic [RESP_WIDTH-1  :0] bresp   ,
  output logic [             0:0] bvalid  ,

  output logic [DATA_WIDTH-1  :0] rdata   ,
  output logic [             0:0] rlast   ,
  input  wire  [             0:0] rready  ,
  input  wire  [RESP_WIDTH-1  :0] rresp   ,
  output logic [             0:0] rvalid  ,

  input  wire  [DATA_WIDTH-1  :0] wdata   ,
  input  wire  [             0:0] wlast   ,
  output logic [             0:0] wready  ,
  input  wire  [STRB_WIDTH-1  :0] wstrb   ,
  input  wire  [             0:0] wvalid  ,

  output logic [DATA_WIDTH-1  :0] ingress_fifo_dout      ,
  output logic [             0:0] ingress_fifo_vld       ,
  input  wire  [             0:0] ingress_fifo_rdy       ,

  input  wire  [DATA_WIDTH-1  :0] egress_fifo_din        ,
  input  wire  [             0:0] egress_fifo_vld        ,
  output wire  [             0:0] egress_fifo_rdy
);

//Address capture for write request
//The CPU can write to any legal address in the simon space and we don't care
//We'll add it to the end of the FIFO and only allow a new address write request
//  if the URAM isn't full. This likely should not be possible since we should be
//  clocked at about 200MHz.

//BRAM Handling for Write Request
logic [15:0] ingress_fifo_full;
logic [15:0] ingress_fifo_empty;
logic ingress_fifo_ack;
logic wr_ack;

//BRAM Handling for Read Request
logic [15:0] egress_fifo_full;
logic [15:0] egress_fifo_empty;
logic egress_fifo_ack;
logic rd_ack;
logic [11:0] egress_fifo_wr_addr;
logic [11:0] egress_fifo_rd_addr;
logic [ 7:0] upr_throw_r;
logic [ 7:0] lwr_throw_r;


assign wr_ack = wvalid & wready;
assign rd_ack = rvalid & rready;

assign wready  = ~|(ingress_fifo_full);
assign awready = ~|(ingress_fifo_full);
assign ingress_fifo_vld       = ~|(ingress_fifo_empty);
assign ingress_fifo_ack       = ingress_fifo_vld & ingress_fifo_rdy;

assign egress_fifo_rdy        = ~|(egress_fifo_full);
assign egress_fifo_ack        = egress_fifo_vld & egress_fifo_rdy;

assign rvalid  = ~|(egress_fifo_empty);
assign arready = 1'b1;
assign bresp = '0;

logic [7:0] simon_rdata_cnt;
logic        ar_ack;

assign ar_ack = arvalid & arready;

assign rlast = (simon_rdata_cnt - 1) == 0;

always_ff@(posedge clk) begin
  if ( rst ) begin
    simon_rdata_cnt <= '0;
  end else if ( ar_ack ) begin
    simon_rdata_cnt <= arlen;
  end else if ( rd_ack ) begin
    simon_rdata_cnt <= simon_rdata_cnt - 1;
  end
end



//Any way you slice it, it will take 16 BRAMs, reduce addressing logic by making them 16x wide rather than 8x deep 2x wide
localparam BRAM_WIDTH =  128/8   ;
localparam BRAM_DEPTH = 4096/4096; // We need 4096 addresses of width 128

generate
    for ( genvar fifo_width_idx=0; fifo_width_idx < BRAM_WIDTH; fifo_width_idx += 1 ) begin : generate_fifo
      fifo_wrapper i_ingress_fifo (
        .clk        ( clk                                                         ),
        .rst        ( rst                                                         ),
                    
        .din        ( wdata[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8] ), 
        .wr_en      ( wr_ack                                           ),
                    
        .dout       ( ingress_fifo_dout[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8]),
        .rd_en      ( ingress_fifo_ack                                            ),

        .fifo_empty ( ingress_fifo_empty[fifo_width_idx]                          ),
        .fifo_full  ( ingress_fifo_full[fifo_width_idx]                           )
      );
     
      fifo_wrapper i_egress_fifo (
        .clk        ( clk                                                             ),
        .rst        ( rst                                                             ),
                                                                                      
        .din        ( egress_fifo_din[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8]      ),
        .wr_en      ( egress_fifo_ack                                                 ),
                    
        .dout       ( rdata[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8] ),
        .rd_en      ( rd_ack                                           ),

        .fifo_empty ( egress_fifo_empty[fifo_width_idx]                               ),
        .fifo_full  ( egress_fifo_full[fifo_width_idx]                                )
      );

    end
endgenerate

endmodule
