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
  parameter DATA_STRB_WIDTH   =  16

) (

  input wire clk,
  input wire rst,

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
  output logic [                  0:0] simon_block_in_wready  ,
  input  wire  [DATA_STRB_WIDTH-1  :0] simon_block_in_wstrb   ,
  input  wire  [                  0:0] simon_block_in_wvalid  ,

  output logic [DATA_DATA_WIDTH-1  :0] ingress_fifo_dout      ,
  output logic [                  0:0] ingress_fifo_vld       ,
  input  wire  [                  0:0] ingress_fifo_rdy       ,

  input  wire  [DATA_DATA_WIDTH-1  :0] egress_fifo_din        ,
  input  wire  [                  0:0] egress_fifo_vld        ,
  output wire  [                  0:0] egress_fifo_rdy
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
logic simon_block_in_wr_ack;

//BRAM Handling for Read Request
logic [15:0] egress_fifo_full;
logic [15:0] egress_fifo_empty;
logic egress_fifo_ack;
logic simon_block_in_rd_ack;


assign simon_block_in_wr_ack = simon_block_in_wvalid & simon_block_in_wready;
assign simon_block_in_rd_ack = simon_block_in_rvalid & simon_block_in_rready;

assign simon_block_in_wready  = ~|(ingress_fifo_full);
assign simon_block_in_awready = ~|(ingress_fifo_full);

assign ingress_fifo_vld       = ~|(ingress_fifo_empty);
assign ingress_fifo_ack       = ingress_fifo_vld & ingress_fifo_rdy;

assign egress_fifo_rdy        = ~|(egress_fifo_full);
assign egress_fifo_ack        = egress_fifo_vld & egress_fifo_rdy;

assign simon_block_in_rvalid  = ~|(egress_fifo_empty);
assign simon_block_in_arready = 1'b1;
assign simon_block_in_bresp = '0;



//Any way you slice it, it will take 16 BRAMs, reduce addressing logic by making them 16x wide rather than 8x deep 2x wide
localparam BRAM_WIDTH =  128/8   ;
localparam BRAM_DEPTH = 4096/4096; // We need 4096 addresses of width 128

generate
    for ( genvar fifo_width_idx=0; fifo_width_idx < BRAM_WIDTH; fifo_width_idx = fifo_width_idx+1 ) begin : generate_fifo
      fifo_wrapper i_ingress_fifo (
        .clk        ( clk                                                             ),
        .rst        ( rst                                                             ),
                    
        .din        ( simon_block_in_wdata[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8] ), 
        .wr_en      ( simon_block_in_wr_ack                                           ),
                    
        .dout       ( ingress_fifo_dout[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8]    ),
        .rd_en      ( ingress_fifo_ack                                                ),

        .fifo_empty ( ingress_fifo_empty[fifo_width_idx]                              ),
        .fifo_full  ( ingress_fifo_full[fifo_width_idx]                               )
      );
     
      fifo_wrapper i_egress_fifo (
        .clk        ( clk                                                             ),
        .rst        ( rst                                                             ),
                                                                                      
        .din        ( egress_fifo_din[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8]      ),
        .wr_en      ( egress_fifo_ack                                                 ),
                    
        .dout       ( simon_block_in_rdata[(fifo_width_idx+1)*8-1:(fifo_width_idx)*8] ),
        .rd_en      ( simon_block_in_rd_ack                                           ),

        .fifo_empty ( egress_fifo_empty[fifo_width_idx]                               ),
        .fifo_full  ( egress_fifo_full[fifo_width_idx]                                )
      );

    end
endgenerate

endmodule
