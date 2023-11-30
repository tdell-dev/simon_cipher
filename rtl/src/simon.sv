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


module simon #(
    parameter CFG_DATA_WIDTH    =  32,
    parameter CFG_ADDR_WIDTH    =  32,
    parameter CFG_PROT_WIDTH    =   1,
    parameter CFG_RESP_WIDTH    =   2,
    parameter CFG_STRB_WIDTH    =   4,
    
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
    input  wire clk_simon_cfg,
    input  wire rst_simon_cfg,
    
    input  wire  [CFG_ADDR_WIDTH-1:0] simon_cfg_araddr  ,
    input  wire  [CFG_PROT_WIDTH-1:0] simon_cfg_arprot  , 
    output logic [               0:0] simon_cfg_arready ,
    input  wire  [               0:0] simon_cfg_arvalid ,
    input  wire  [CFG_ADDR_WIDTH-1:0] simon_cfg_awaddr  ,
    input  wire  [CFG_PROT_WIDTH-1:0] simon_cfg_awprot  ,
    output reg   [               0:0] simon_cfg_awready ,
    input  wire  [               0:0] simon_cfg_awvalid ,
    input  wire  [               0:0] simon_cfg_bready  ,
    output reg   [CFG_RESP_WIDTH-1:0] simon_cfg_bresp   ,
    output reg   [               0:0] simon_cfg_bvalid  ,
    output reg   [CFG_DATA_WIDTH-1:0] simon_cfg_rdata   ,
    input  wire  [               0:0] simon_cfg_rready  ,
    output reg   [               0:0] simon_cfg_rresp   ,
    output reg   [               0:0] simon_cfg_rvalid  ,
    input  wire  [CFG_DATA_WIDTH-1:0] simon_cfg_wdata   ,
    output reg   [               0:0] simon_cfg_wready  ,
    input  wire  [CFG_STRB_WIDTH-1:0] simon_cfg_wstrb   ,
    input  wire  [               0:0] simon_cfg_wvalid  ,
                 
    input  wire  clk_simon_block_in,
    input  wire  rst_simon_block_in,
      
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
    input  wire  [                  0:0] simon_block_in_wvalid  
  );

  logic [255:0] init_key;
  logic         key_compute_start;
  logic         key_mem_full;
  logic [  8:0] key_addr;
  logic         key_data_vld;
  logic         key_rd_en;
  logic [ 63:0] key_data;
  
  simon_cfg #(
    .KEYLEN_BYTES   (             32 ),
    .CFG_DATA_WIDTH ( CFG_DATA_WIDTH ),
    .CFG_ADDR_WIDTH ( CFG_ADDR_WIDTH ),
    .CFG_PROT_WIDTH ( CFG_PROT_WIDTH ),
    .CFG_RESP_WIDTH ( CFG_RESP_WIDTH ),
    .CFG_STRB_WIDTH ( CFG_STRB_WIDTH )
  ) i_simon_cfg (
    .clk                    ( clk_simon_cfg ),
    .rst                    ( rst_simon_cfg ),

    .simon_cfg_araddr       ( simon_cfg_araddr  ),
    .simon_cfg_arprot       ( simon_cfg_arprot  ), 
    .simon_cfg_arready      ( simon_cfg_arready ),
    .simon_cfg_arvalid      ( simon_cfg_arvalid ),
    .simon_cfg_awaddr       ( simon_cfg_awaddr  ),
    .simon_cfg_awprot       ( simon_cfg_awprot  ),
    .simon_cfg_awready      ( simon_cfg_awready ),
    .simon_cfg_awvalid      ( simon_cfg_awvalid ),
    .simon_cfg_bready       ( simon_cfg_bready  ),
    .simon_cfg_bresp        ( simon_cfg_bresp   ),
    .simon_cfg_bvalid       ( simon_cfg_bvalid  ),
    .simon_cfg_rdata        ( simon_cfg_rdata   ),
    .simon_cfg_rready       ( simon_cfg_rready  ),
    .simon_cfg_rresp        ( simon_cfg_rresp   ),
    .simon_cfg_rvalid       ( simon_cfg_rvalid  ),
    .simon_cfg_wdata        ( simon_cfg_wdata   ),
    .simon_cfg_wready       ( simon_cfg_wready  ),
    .simon_cfg_wstrb        ( simon_cfg_wstrb   ),
    .simon_cfg_wvalid       ( simon_cfg_wvalid  ),

    .init_key               ( init_key          ),
    .key_compute_start      ( key_compute_start )
  );

  key_schedule i_key_schedule (
    .clk                    ( clk_simon_cfg     ),
    .rst                    ( rst_simon_cfg     ),

    .init_key               ( init_key          ),
    .key_compute_start      ( key_compute_start ),
    
    .key_mem_full           ( key_mem_full      ),
    .key_addr               ( key_addr          ),
    .key_rd_en              ( key_rd_en         ),
    .key_data               ( key_data          ),
    .key_data_vld           ( key_data_vld      )
  );

  simon128_256_encrypt i_simon128_256_encrypt (
    .clk                     ( clk_simon_cfg           ),
    .rst                     ( rst_simon_cfg           ),
    
    .key_mem_full            ( key_mem_full            ),
    .key_addr                ( key_addr                ),
    .key_rd_en               ( key_rd_en               ),
    .key_data                ( key_data                ),
    .key_data_vld            ( key_data_vld            ),
    
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
    .simon_block_in_wvalid   ( simon_block_in_wvalid   )
  );


endmodule
