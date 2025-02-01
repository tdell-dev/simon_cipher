`timescale 1ns / 1ps

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
    /* verilator lint_off UNUSEDSIGNAL */
    input  wire                          clk_simon_cfg,
    input  wire                          rst_simon_cfg,

    input  wire  [CFG_ADDR_WIDTH-1:0]    simon_cfg_araddr  ,
    input  wire  [CFG_PROT_WIDTH-1:0]    simon_cfg_arprot  ,
    output logic [               0:0]    simon_cfg_arready ,
    input  wire  [               0:0]    simon_cfg_arvalid ,
    input  wire  [CFG_ADDR_WIDTH-1:0]    simon_cfg_awaddr  ,
    input  wire  [CFG_PROT_WIDTH-1:0]    simon_cfg_awprot  ,
    output reg   [               0:0]    simon_cfg_awready ,
    input  wire  [               0:0]    simon_cfg_awvalid ,
    input  wire  [               0:0]    simon_cfg_bready  ,
    output reg   [CFG_RESP_WIDTH-1:0]    simon_cfg_bresp   ,
    output reg   [               0:0]    simon_cfg_bvalid  ,
    output reg   [CFG_DATA_WIDTH-1:0]    simon_cfg_rdata   ,
    input  wire  [               0:0]    simon_cfg_rready  ,
    output reg   [               0:0]    simon_cfg_rresp   ,
    output reg   [               0:0]    simon_cfg_rvalid  ,
    input  wire  [CFG_DATA_WIDTH-1:0]    simon_cfg_wdata   ,
    output reg   [               0:0]    simon_cfg_wready  ,
    input  wire  [CFG_STRB_WIDTH-1:0]    simon_cfg_wstrb   ,
    input  wire  [               0:0]    simon_cfg_wvalid  ,
                 
    input  wire                          clk_simon_data,
    input  wire                          rst_simon_data,
      
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
    /* verilator lint_on UNUSEDSIGNAL */
  );

  logic [255:0] init_key;
  logic         key_compute_start;
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
    
    .key_addr               ( key_addr          ),
    .key_rd_en              ( key_rd_en         ),
    .key_data               ( key_data          ),
    .key_data_vld           ( key_data_vld      )
  );

  simon128_256_encrypt i_simon128_256_encrypt (
    .clk                     ( clk_simon_cfg           ),
    .rst                     ( rst_simon_cfg           ),
    
    .key_addr                ( key_addr                ),
    .key_rd_en               ( key_rd_en               ),
    .key_data                ( key_data                ),
    .key_data_vld            ( key_data_vld            ),
    
    .simon_data_araddr   ( simon_data_araddr   ),
    .simon_data_arburst  ( simon_data_arburst  ),
    .simon_data_arcache  ( simon_data_arcache  ),
    .simon_data_arlen    ( simon_data_arlen    ),
    .simon_data_arlock   ( simon_data_arlock   ),
    .simon_data_arprot   ( simon_data_arprot   ),
    .simon_data_arqos    ( simon_data_arqos    ),
    .simon_data_arregion ( simon_data_arregion ),   
    .simon_data_arsize   ( simon_data_arsize   ),   
    .simon_data_arready  ( simon_data_arready  ),   
    .simon_data_arvalid  ( simon_data_arvalid  ),   

    .simon_data_rdata    ( simon_data_rdata    ),
    .simon_data_rlast    ( simon_data_rlast    ),
    .simon_data_rready   ( simon_data_rready   ),
    .simon_data_rresp    ( simon_data_rresp    ),
    .simon_data_rvalid   ( simon_data_rvalid   ),

    .simon_data_awaddr   ( simon_data_awaddr   ),
    .simon_data_awburst  ( simon_data_awburst  ),
    .simon_data_awcache  ( simon_data_awcache  ),
    .simon_data_awlen    ( simon_data_awlen    ),
    .simon_data_awlock   ( simon_data_awlock   ),
    .simon_data_awprot   ( simon_data_awprot   ),
    .simon_data_awqos    ( simon_data_awqos    ),
    .simon_data_awregion ( simon_data_awregion ),
    .simon_data_awsize   ( simon_data_awsize   ),
    .simon_data_awready  ( simon_data_awready  ),
    .simon_data_awvalid  ( simon_data_awvalid  ),
                                 
    .simon_data_bready   ( simon_data_bready   ),
    .simon_data_bresp    ( simon_data_bresp    ),
    .simon_data_bvalid   ( simon_data_bvalid   ),
    .simon_data_wdata    ( simon_data_wdata    ),
    .simon_data_wlast    ( simon_data_wlast    ),
    .simon_data_wready   ( simon_data_wready   ),
    .simon_data_wstrb    ( simon_data_wstrb    ),
    .simon_data_wvalid   ( simon_data_wvalid   )
  );


endmodule
