`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Personal
// Engineer: rptbt
// 
// Create Date: 10/15/2023 01:17:11 PM
// Design Name: 
// Module Name: zub1cg_simon
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


module zub1cg_simon(
  inout  wire        click_i2c_pl_scl_io      ,
  inout  wire        click_i2c_pl_sda_io      ,
  inout  wire        click_spi_pl_io0_io      ,
  inout  wire        click_spi_pl_io1_io      ,
  inout  wire        click_spi_pl_sck_io      ,
  inout  wire  [1:0] click_spi_pl_ss_io       ,
  input  wire        click_uart_pl_rxd        ,
  output logic       click_uart_pl_txd        ,
                     
  inout  wire        hsio_dna_i2c_pl_scl_io   ,
  inout  wire        hsio_dna_i2c_pl_sda_io   ,
 
  input  wire        pl_pb_tri_i              ,
 
  output logic [2:0] rgb_led_0_tri_o          ,
  output logic [2:0] rgb_led_1_tri_o          ,
 
  inout  wire        tempsensor_i2c_pl_scl_io ,
  inout  wire        tempsensor_i2c_pl_sda_io
);

  localparam CFG_DATA_WIDTH    =  32;
  localparam CFG_ADDR_WIDTH    =  32;
  localparam CFG_PROT_WIDTH    =   1;
  localparam CFG_RESP_WIDTH    =   2;
  localparam CFG_STRB_WIDTH    =   4;
  
  localparam DATA_DATA_WIDTH   = 128;
  localparam DATA_ADDR_WIDTH   =  32;
  localparam DATA_BURST_WIDTH  =   2;
  localparam DATA_CACHE_WIDTH  =   4;
  localparam DATA_LEN_WIDTH    =   8;
  localparam DATA_LOCK_WIDTH   =   1;
  localparam DATA_PROT_WIDTH   =   3;
  localparam DATA_QOS_WIDTH    =   4;
  localparam DATA_REGION_WIDTH =   4;
  localparam DATA_SIZE_WIDTH   =   3;
  localparam DATA_RESP_WIDTH   =   2;
  localparam DATA_STRB_WIDTH   =  16;

  logic simon_cfg_clk;
  logic simon_cfg_rstn;
  
  logic [CFG_ADDR_WIDTH-1:0]    simon_cfg_araddr       ;
  logic [CFG_PROT_WIDTH-1:0]    simon_cfg_arprot       ; 
  logic [               0:0]    simon_cfg_arready      ;
  logic [               0:0]    simon_cfg_arvalid      ;
  logic [CFG_ADDR_WIDTH-1:0]    simon_cfg_awaddr       ;
  logic [CFG_PROT_WIDTH-1:0]    simon_cfg_awprot       ;
  logic [               0:0]    simon_cfg_awready      ;
  logic [               0:0]    simon_cfg_awvalid      ;
  logic [               0:0]    simon_cfg_bready       ;
  logic [CFG_RESP_WIDTH-1:0]    simon_cfg_bresp        ;
  logic [               0:0]    simon_cfg_bvalid       ;
  logic [CFG_DATA_WIDTH-1:0]    simon_cfg_rdata        ;
  logic [               0:0]    simon_cfg_rready       ;
  logic [               0:0]    simon_cfg_rresp        ;
  logic [               0:0]    simon_cfg_rvalid       ;
  logic [CFG_DATA_WIDTH-1:0]    simon_cfg_wdata        ;
  logic [               0:0]    simon_cfg_wready       ;
  logic [CFG_STRB_WIDTH-1:0]    simon_cfg_wstrb        ;
  logic [               0:0]    simon_cfg_wvalid       ;
  
  logic [DATA_ADDR_WIDTH-1  :0] simon_data_araddr  ;
  logic [DATA_BURST_WIDTH-1 :0] simon_data_arburst ;
  logic [DATA_CACHE_WIDTH-1 :0] simon_data_arcache ;
  logic [DATA_LEN_WIDTH-1   :0] simon_data_arlen   ;
  logic [DATA_LOCK_WIDTH-1  :0] simon_data_arlock  ;
  logic [DATA_PROT_WIDTH-1  :0] simon_data_arprot  ;
  logic [DATA_QOS_WIDTH-1   :0] simon_data_arqos   ;
  logic [DATA_REGION_WIDTH-1:0] simon_data_arregion;
  logic [DATA_SIZE_WIDTH-1  :0] simon_data_arsize  ;
  logic [                  0:0] simon_data_arready ;
  logic [                  0:0] simon_data_arvalid ;

  logic [DATA_ADDR_WIDTH-1  :0] simon_data_awaddr  ;
  logic [DATA_BURST_WIDTH-1 :0] simon_data_awburst ;
  logic [DATA_CACHE_WIDTH-1 :0] simon_data_awcache ;
  logic [DATA_LEN_WIDTH-1   :0] simon_data_awlen   ;
  logic [DATA_LOCK_WIDTH-1  :0] simon_data_awlock  ;
  logic [DATA_PROT_WIDTH-1  :0] simon_data_awprot  ;
  logic [DATA_QOS_WIDTH-1   :0] simon_data_awqos   ;
  logic [DATA_REGION_WIDTH-1:0] simon_data_awregion;
  logic [DATA_SIZE_WIDTH-1  :0] simon_data_awsize  ;
  logic [                  0:0] simon_data_awready ;
  logic [                  0:0] simon_data_awvalid ;

  logic [                  0:0] simon_data_bready  ;
  logic [DATA_RESP_WIDTH-1  :0] simon_data_bresp   ;
  logic [                  0:0] simon_data_bvalid  ;

  logic [DATA_DATA_WIDTH-1  :0] simon_data_rdata   ;
  logic [                  0:0] simon_data_rlast   ;
  logic [                  0:0] simon_data_rready  ;
  logic [DATA_RESP_WIDTH-1  :0] simon_data_rresp   ;
  logic [                  0:0] simon_data_rvalid  ;

  logic [DATA_DATA_WIDTH-1  :0] simon_data_wdata   ;
  logic [                  0:0] simon_data_wlast   ;
  logic [                  0:0] simon_data_wready  ;
  logic [DATA_STRB_WIDTH-1  :0] simon_data_wstrb   ;
  logic [                  0:0] simon_data_wvalid  ;

  zub1cg_sbc_base_wrapper i_zub1cg_sbc_base_wrapper (
    .click_i2c_pl_scl_io        ( click_i2c_pl_scl_io      ),
    .click_i2c_pl_sda_io        ( click_i2c_pl_sda_io      ),
                                                           
    .click_spi_pl_io0_io        ( click_spi_pl_io0_io      ),
    .click_spi_pl_io1_io        ( click_spi_pl_io1_io      ),
    .click_spi_pl_sck_io        ( click_spi_pl_sck_io      ),
    .click_spi_pl_ss_io         ( click_spi_pl_ss_io       ),
                                                           
    .click_uart_pl_rxd          ( click_uart_pl_rxd        ),
    .click_uart_pl_txd          ( click_uart_pl_txd        ),
                                                               
    .hsio_dna_i2c_pl_scl_io     ( hsio_dna_i2c_pl_scl_io   ),
    .hsio_dna_i2c_pl_sda_io     ( hsio_dna_i2c_pl_sda_io   ),
                                                               
    .pl_pb_tri_i                ( pl_pb_tri_i              ),
                                                           
    .rgb_led_0_tri_o            ( rgb_led_0_tri_o          ),
    .rgb_led_1_tri_o            ( rgb_led_1_tri_o          ),
                                                           
    .simon_cfg_clk              ( simon_cfg_clk            ),
    .simon_cfg_rstn             ( simon_cfg_rstn           ),
                                                               
    .simon_data_clk             ( simon_data_clk           ),
    .simon_data_rstn            ( simon_data_rstn          ),
                                                               
    .simon_cfg_araddr           ( simon_cfg_araddr         ),
    .simon_cfg_arprot           ( simon_cfg_arprot         ), 
    .simon_cfg_arready          ( simon_cfg_arready        ),
    .simon_cfg_arvalid          ( simon_cfg_arvalid        ),
    .simon_cfg_awaddr           ( simon_cfg_awaddr         ),
    .simon_cfg_awprot           ( simon_cfg_awprot         ),
    .simon_cfg_awready          ( simon_cfg_awready        ),
    .simon_cfg_awvalid          ( simon_cfg_awvalid        ),
    .simon_cfg_bready           ( simon_cfg_bready         ),
    .simon_cfg_bresp            ( simon_cfg_bresp          ),
    .simon_cfg_bvalid           ( simon_cfg_bvalid         ),
    .simon_cfg_rdata            ( simon_cfg_rdata          ),
    .simon_cfg_rready           ( simon_cfg_rready         ),
    .simon_cfg_rresp            ( simon_cfg_rresp          ),
    .simon_cfg_rvalid           ( simon_cfg_rvalid         ),
    .simon_cfg_wdata            ( simon_cfg_wdata          ),
    .simon_cfg_wready           ( simon_cfg_wready         ),
    .simon_cfg_wstrb            ( simon_cfg_wstrb          ),
    .simon_cfg_wvalid           ( simon_cfg_wvalid         ),
                                                           
    .simon_data_araddr          ( simon_data_araddr        ),
    .simon_data_arburst         ( simon_data_arburst       ),
    .simon_data_arcache         ( simon_data_arcache       ),
    .simon_data_arlen           ( simon_data_arlen         ),
    .simon_data_arlock          ( simon_data_arlock        ),
    .simon_data_arprot          ( simon_data_arprot        ),
    .simon_data_arqos           ( simon_data_arqos         ),
    .simon_data_arready         ( simon_data_arready       ),
    .simon_data_arregion        ( simon_data_arregion      ),
    .simon_data_arsize          ( simon_data_arsize        ),
    .simon_data_arvalid         ( simon_data_arvalid       ),
    .simon_data_awaddr          ( simon_data_awaddr        ),
    .simon_data_awburst         ( simon_data_awburst       ),
    .simon_data_awcache         ( simon_data_awcache       ),
    .simon_data_awlen           ( simon_data_awlen         ),
    .simon_data_awlock          ( simon_data_awlock        ),
    .simon_data_awprot          ( simon_data_awprot        ),
    .simon_data_awqos           ( simon_data_awqos         ),
    .simon_data_awready         ( simon_data_awready       ),
    .simon_data_awregion        ( simon_data_awregion      ),
    .simon_data_awsize          ( simon_data_awsize        ),
    .simon_data_awvalid         ( simon_data_awvalid       ),
    .simon_data_bready          ( simon_data_bready        ),
    .simon_data_bresp           ( simon_data_bresp         ),
    .simon_data_bvalid          ( simon_data_bvalid        ),
    .simon_data_rdata           ( simon_data_rdata         ),
    .simon_data_rlast           ( simon_data_rlast         ),
    .simon_data_rready          ( simon_data_rready        ),
    .simon_data_rresp           ( simon_data_rresp         ),
    .simon_data_rvalid          ( simon_data_rvalid        ),
    .simon_data_wdata           ( simon_data_wdata         ),
    .simon_data_wlast           ( simon_data_wlast         ),
    .simon_data_wready          ( simon_data_wready        ),
    .simon_data_wstrb           ( simon_data_wstrb         ),
    .simon_data_wvalid          ( simon_data_wvalid        ),
    
    .tempsensor_i2c_pl_scl_io   ( tempsensor_i2c_pl_scl_io ),
    .tempsensor_i2c_pl_sda_io   ( tempsensor_i2c_pl_sda_io )
  );
  
  simon i_simon (
    .clk_simon_cfg          ( simon_cfg_clk       ),
    .rst_simon_cfg          ( ~simon_cfg_rstn     ),
                                                  
    .clk_simon_data         ( simon_data_clk      ),
    .rst_simon_data         ( ~simon_data_rstn    ),
                                                  
    .simon_cfg_araddr       ( simon_cfg_araddr    ),
    .simon_cfg_arprot       ( simon_cfg_arprot    ), 
    .simon_cfg_arready      ( simon_cfg_arready   ),
    .simon_cfg_arvalid      ( simon_cfg_arvalid   ),
    .simon_cfg_awaddr       ( simon_cfg_awaddr    ),
    .simon_cfg_awprot       ( simon_cfg_awprot    ),
    .simon_cfg_awready      ( simon_cfg_awready   ),
    .simon_cfg_awvalid      ( simon_cfg_awvalid   ),
    .simon_cfg_bready       ( simon_cfg_bready    ),
    .simon_cfg_bresp        ( simon_cfg_bresp     ),
    .simon_cfg_bvalid       ( simon_cfg_bvalid    ),
    .simon_cfg_rdata        ( simon_cfg_rdata     ),
    .simon_cfg_rready       ( simon_cfg_rready    ),
    .simon_cfg_rresp        ( simon_cfg_rresp     ),
    .simon_cfg_rvalid       ( simon_cfg_rvalid    ),
    .simon_cfg_wdata        ( simon_cfg_wdata     ),
    .simon_cfg_wready       ( simon_cfg_wready    ),
    .simon_cfg_wstrb        ( simon_cfg_wstrb     ),
    .simon_cfg_wvalid       ( simon_cfg_wvalid    ),
      
    .simon_data_araddr      ( simon_data_araddr   ),
    .simon_data_arburst     ( simon_data_arburst  ),
    .simon_data_arcache     ( simon_data_arcache  ),
    .simon_data_arlen       ( simon_data_arlen    ),
    .simon_data_arlock      ( simon_data_arlock   ),
    .simon_data_arprot      ( simon_data_arprot   ),
    .simon_data_arqos       ( simon_data_arqos    ),
    .simon_data_arready     ( simon_data_arready  ),
    .simon_data_arregion    ( simon_data_arregion ),
    .simon_data_arsize      ( simon_data_arsize   ),
    .simon_data_arvalid     ( simon_data_arvalid  ),
    .simon_data_awaddr      ( simon_data_awaddr   ),
    .simon_data_awburst     ( simon_data_awburst  ),
    .simon_data_awcache     ( simon_data_awcache  ),
    .simon_data_awlen       ( simon_data_awlen    ),
    .simon_data_awlock      ( simon_data_awlock   ),
    .simon_data_awprot      ( simon_data_awprot   ),
    .simon_data_awqos       ( simon_data_awqos    ),
    .simon_data_awready     ( simon_data_awready  ),
    .simon_data_awregion    ( simon_data_awregion ),
    .simon_data_awsize      ( simon_data_awsize   ),
    .simon_data_awvalid     ( simon_data_awvalid  ),
    .simon_data_bready      ( simon_data_bready   ),
    .simon_data_bresp       ( simon_data_bresp    ),
    .simon_data_bvalid      ( simon_data_bvalid   ),
    .simon_data_rdata       ( simon_data_rdata    ),
    .simon_data_rlast       ( simon_data_rlast    ),
    .simon_data_rready      ( simon_data_rready   ),
    .simon_data_rresp       ( simon_data_rresp    ),
    .simon_data_rvalid      ( simon_data_rvalid   ),
    .simon_data_wdata       ( simon_data_wdata    ),
    .simon_data_wlast       ( simon_data_wlast    ),
    .simon_data_wready      ( simon_data_wready   ),
    .simon_data_wstrb       ( simon_data_wstrb    ),
    .simon_data_wvalid      ( simon_data_wvalid   )
  );

endmodule
