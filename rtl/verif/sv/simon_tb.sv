`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/24/2023 11:21:22 AM
// Design Name: 
// Module Name: simon_tb
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


module simon_tb(
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

  logic clk_tb;
  logic rst_tb;
  
  logic [CFG_ADDR_WIDTH-1:0] simon_cfg_araddr_tb  ;
  logic [CFG_PROT_WIDTH-1:0] simon_cfg_arprot_tb  ; 
  logic [               0:0] simon_cfg_arready_tb ;
  logic [               0:0] simon_cfg_arvalid_tb ;
  logic [CFG_ADDR_WIDTH-1:0] simon_cfg_awaddr_tb  ;
  logic [CFG_PROT_WIDTH-1:0] simon_cfg_awprot_tb  ;
  logic [               0:0] simon_cfg_awready_tb ;
  logic [               0:0] simon_cfg_awvalid_tb ;
  logic [               0:0] simon_cfg_bready_tb  ;
  logic [CFG_RESP_WIDTH-1:0] simon_cfg_bresp_tb   ;
  logic [               0:0] simon_cfg_bvalid_tb  ;
  logic [CFG_DATA_WIDTH-1:0] simon_cfg_rdata_tb   ;
  logic [               0:0] simon_cfg_rready_tb  ;
  logic [               0:0] simon_cfg_rresp_tb   ;
  logic [               0:0] simon_cfg_rvalid_tb  ;
  logic [CFG_DATA_WIDTH-1:0] simon_cfg_wdata_tb   ;
  logic [               0:0] simon_cfg_wready_tb  ;
  logic [CFG_STRB_WIDTH-1:0] simon_cfg_wstrb_tb   ;
  logic [               0:0] simon_cfg_wvalid_tb  ;
               
    
  logic [DATA_ADDR_WIDTH-1  :0] simon_block_in_araddr_tb  ;
  logic [DATA_BURST_WIDTH-1 :0] simon_block_in_arburst_tb ;
  logic [DATA_CACHE_WIDTH-1 :0] simon_block_in_arcache_tb ;
  logic [DATA_LEN_WIDTH-1   :0] simon_block_in_arlen_tb   ;
  logic [DATA_LOCK_WIDTH-1  :0] simon_block_in_arlock_tb  ;
  logic [DATA_PROT_WIDTH-1  :0] simon_block_in_arprot_tb  ;
  logic [DATA_QOS_WIDTH-1   :0] simon_block_in_arqos_tb   ;
  logic [DATA_REGION_WIDTH-1:0] simon_block_in_arregion_tb;
  logic [DATA_SIZE_WIDTH-1  :0] simon_block_in_arsize_tb  ;
  logic [                  0:0] simon_block_in_arready_tb ;
  logic [                  0:0] simon_block_in_arvalid_tb ;

  logic [DATA_ADDR_WIDTH-1  :0] simon_block_in_awaddr_tb  ;
  logic [DATA_BURST_WIDTH-1 :0] simon_block_in_awburst_tb ;
  logic [DATA_CACHE_WIDTH-1 :0] simon_block_in_awcache_tb ;
  logic [DATA_LEN_WIDTH-1   :0] simon_block_in_awlen_tb   ;
  logic [DATA_LOCK_WIDTH-1  :0] simon_block_in_awlock_tb  ;
  logic [DATA_PROT_WIDTH-1  :0] simon_block_in_awprot_tb  ;
  logic [DATA_QOS_WIDTH-1   :0] simon_block_in_awqos_tb   ;
  logic [DATA_REGION_WIDTH-1:0] simon_block_in_awregion_tb;
  logic [DATA_SIZE_WIDTH-1  :0] simon_block_in_awsize_tb  ;
  logic [                  0:0] simon_block_in_awready_tb ;
  logic [                  0:0] simon_block_in_awvalid_tb ;

  logic [                  0:0] simon_block_in_bready_tb  ;
  logic [DATA_RESP_WIDTH-1  :0] simon_block_in_bresp_tb   ;
  logic [                  0:0] simon_block_in_bvalid_tb  ;

  logic [DATA_DATA_WIDTH-1  :0] simon_block_in_rdata_tb   ;
  logic [                  0:0] simon_block_in_rlast_tb   ;
  logic [                  0:0] simon_block_in_rready_tb  ;
  logic [DATA_RESP_WIDTH-1  :0] simon_block_in_rresp_tb   ;
  logic [                  0:0] simon_block_in_rvalid_tb  ;

  logic [DATA_DATA_WIDTH-1  :0] simon_block_in_wdata_tb   ;
  logic [                  0:0] simon_block_in_wlast_tb   ;
  logic [                  0:0] simon_block_in_wready_tb  ;
  logic [DATA_STRB_WIDTH-1  :0] simon_block_in_wstrb_tb   ;
  logic [                  0:0] simon_block_in_wvalid_tb  ;

  simon #(
    .CFG_DATA_WIDTH    ( CFG_DATA_WIDTH    ),
    .CFG_ADDR_WIDTH    ( CFG_ADDR_WIDTH    ),
    .CFG_PROT_WIDTH    ( CFG_PROT_WIDTH    ),
    .CFG_RESP_WIDTH    ( CFG_RESP_WIDTH    ),
    .CFG_STRB_WIDTH    ( CFG_STRB_WIDTH    ),
                                           
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
  ) i_simon (
    .clk_simon_cfg           ( clk_tb                     ),
    .rst_simon_cfg           ( rst_tb                     ),
                                                          
    .clk_simon_block_in      ( clk_tb                     ),
    .rst_simon_block_in      ( rst_tb                     ),
                                                          
    .simon_cfg_araddr        ( simon_cfg_araddr_tb        ),
    .simon_cfg_arprot        ( simon_cfg_arprot_tb        ), 
    .simon_cfg_arready       ( simon_cfg_arready_tb       ),
    .simon_cfg_arvalid       ( simon_cfg_arvalid_tb       ),
    .simon_cfg_awaddr        ( simon_cfg_awaddr_tb        ),
    .simon_cfg_awprot        ( simon_cfg_awprot_tb        ),
    .simon_cfg_awready       ( simon_cfg_awready_tb       ),
    .simon_cfg_awvalid       ( simon_cfg_awvalid_tb       ),
    .simon_cfg_bready        ( simon_cfg_bready_tb        ),
    .simon_cfg_bresp         ( simon_cfg_bresp_tb         ),
    .simon_cfg_bvalid        ( simon_cfg_bvalid_tb        ),
    .simon_cfg_rdata         ( simon_cfg_rdata_tb         ),
    .simon_cfg_rready        ( simon_cfg_rready_tb        ),
    .simon_cfg_rresp         ( simon_cfg_rresp_tb         ),
    .simon_cfg_rvalid        ( simon_cfg_rvalid_tb        ),
    .simon_cfg_wdata         ( simon_cfg_wdata_tb         ),
    .simon_cfg_wready        ( simon_cfg_wready_tb        ),
    .simon_cfg_wstrb         ( simon_cfg_wstrb_tb         ),
    .simon_cfg_wvalid        ( simon_cfg_wvalid_tb        ),


    .simon_block_in_araddr   ( simon_block_in_araddr_tb   ),
    .simon_block_in_arburst  ( simon_block_in_arburst_tb  ),
    .simon_block_in_arcache  ( simon_block_in_arcache_tb  ),
    .simon_block_in_arlen    ( simon_block_in_arlen_tb    ),
    .simon_block_in_arlock   ( simon_block_in_arlock_tb   ),
    .simon_block_in_arprot   ( simon_block_in_arprot_tb   ),
    .simon_block_in_arqos    ( simon_block_in_arqos_tb    ),
    .simon_block_in_arregion ( simon_block_in_arregion_tb ),
    .simon_block_in_arsize   ( simon_block_in_arsize_tb   ),
    .simon_block_in_arready  ( simon_block_in_arready_tb  ),
    .simon_block_in_arvalid  ( simon_block_in_arvalid_tb  ),
                                                         
    .simon_block_in_awaddr   ( simon_block_in_awaddr_tb   ),
    .simon_block_in_awburst  ( simon_block_in_awburst_tb  ),
    .simon_block_in_awcache  ( simon_block_in_awcache_tb  ),
    .simon_block_in_awlen    ( simon_block_in_awlen_tb    ),
    .simon_block_in_awlock   ( simon_block_in_awlock_tb   ),
    .simon_block_in_awprot   ( simon_block_in_awprot_tb   ),
    .simon_block_in_awqos    ( simon_block_in_awqos_tb    ),
    .simon_block_in_awregion ( simon_block_in_awregion_tb ),
    .simon_block_in_awsize   ( simon_block_in_awsize_tb   ),
    .simon_block_in_awready  ( simon_block_in_awready_tb  ),
    .simon_block_in_awvalid  ( simon_block_in_awvalid_tb  ),
                                                         
    .simon_block_in_bready   ( simon_block_in_bready_tb   ),
    .simon_block_in_bresp    ( simon_block_in_bresp_tb    ),
    .simon_block_in_bvalid   ( simon_block_in_bvalid_tb   ),
                                                         
    .simon_block_in_rdata    ( simon_block_in_rdata_tb    ),
    .simon_block_in_rlast    ( simon_block_in_rlast_tb    ),
    .simon_block_in_rready   ( simon_block_in_rready_tb   ),
    .simon_block_in_rresp    ( simon_block_in_rresp_tb    ),
    .simon_block_in_rvalid   ( simon_block_in_rvalid_tb   ),
                                                         
    .simon_block_in_wdata    ( simon_block_in_wdata_tb    ),
    .simon_block_in_wlast    ( simon_block_in_wlast_tb    ),
    .simon_block_in_wready   ( simon_block_in_wready_tb   ),
    .simon_block_in_wstrb    ( simon_block_in_wstrb_tb    ),
    .simon_block_in_wvalid   ( simon_block_in_wvalid_tb   )
  );

always #1 clk_tb = ~clk_tb;

initial begin
  clk_tb = 1'b1;
  rst_tb = 1'b0;;
  
  simon_cfg_araddr_tb  = '0;
  simon_cfg_arprot_tb  = '0; 
  //simon_cfg_arready_tb = '0;
  simon_cfg_arvalid_tb = '0;
  simon_cfg_awaddr_tb  = '0;
  simon_cfg_awprot_tb  = '0;
  //simon_cfg_awready_tb = '0;
  simon_cfg_awvalid_tb = '0;

  simon_cfg_bready_tb  = '0;

  simon_cfg_rdata_tb   = '0;
  simon_cfg_rresp_tb   = '0;
  simon_cfg_rvalid_tb  = '0;
  
  simon_cfg_wdata_tb   = '0;
  simon_cfg_wstrb_tb   = '0;
  simon_cfg_wvalid_tb  = '0;
               
  simon_block_in_araddr_tb = '0  ;
  simon_block_in_arburst_tb= '0 ;
  simon_block_in_arcache_tb= '0 ;
  simon_block_in_arlen_tb   = '0;
  simon_block_in_arlock_tb  = '0;
  simon_block_in_arprot_tb  = '0;
  simon_block_in_arqos_tb   = '0;
  simon_block_in_arregion_tb= '0;
  simon_block_in_arsize_tb  = '0;
  simon_block_in_arready_tb = '0;
  simon_block_in_arvalid_tb = '0;

  simon_block_in_awaddr_tb  = '0;
  simon_block_in_awburst_tb = '0;
  simon_block_in_awcache_tb = '0;
  simon_block_in_awlen_tb   = '0;
  simon_block_in_awlock_tb  = '0;
  simon_block_in_awprot_tb  = '0;
  simon_block_in_awqos_tb   = '0;
  simon_block_in_awregion_tb= '0;
  simon_block_in_awsize_tb  = '0;
  simon_block_in_awready_tb = '0;
  simon_block_in_awvalid_tb = '0;

  simon_block_in_bready_tb  = '0;
  //simon_block_in_bresp_tb   = '0;
  //simon_block_in_bvalid_tb  = '0;

  simon_block_in_rdata_tb   = '0;
  simon_block_in_rlast_tb   = '0;
  simon_block_in_rready_tb  = '0;
  simon_block_in_rresp_tb   = '0;
  simon_block_in_rvalid_tb  = '0;

  simon_block_in_wdata_tb   = '0;
  simon_block_in_wlast_tb   = '0;
  simon_block_in_wready_tb  = '0;
  simon_block_in_wstrb_tb   = '0;
  simon_block_in_wvalid_tb  = '0;
  
  simon_cfg_bready_tb  = 1'b1;
  
  #10 rst_tb = 1'b1;
  #10 rst_tb = 1'b0; 

#2   
  simon_cfg_awaddr_tb  = 32'hA00A000;
  simon_cfg_awvalid_tb = 1'b1;
  
  simon_cfg_wdata_tb   = 32'h03020100;
  simon_cfg_wvalid_tb  = 1'b1;

#2
  simon_cfg_awaddr_tb  = 32'hA00A001;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h07060504;
  simon_cfg_wvalid_tb  = 1'b1;


#2 
  simon_cfg_awaddr_tb  = 32'hA00A002;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h0b0a0908;
  simon_cfg_wvalid_tb  = 1'b1;
  
#2
  simon_cfg_awaddr_tb  = 32'hA00A003;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h0f0e0d0c;
  simon_cfg_wvalid_tb  = 1'b1;  
  
 #2
  simon_cfg_awaddr_tb  = 32'hA00A004;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h13121110;
  simon_cfg_wvalid_tb  = 1'b1;
  
 #2
  simon_cfg_awaddr_tb  = 32'hA00A005;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h17161514;
  simon_cfg_wvalid_tb  = 1'b1;
   
 #2
  simon_cfg_awaddr_tb  = 32'hA00A006;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h1b1a1918;
  simon_cfg_wvalid_tb  = 1'b1;
  
 #2
  simon_cfg_awaddr_tb  = 32'hA00A007;
  simon_cfg_awvalid_tb = 1'b1;

  simon_cfg_wdata_tb   = 32'h1f1e1d1c;
  simon_cfg_wvalid_tb  = 1'b1;
   
//#2
//  simon_cfg_awaddr_tb  = 32'hA00A008;
//  simon_cfg_awvalid_tb = 1'b1;
//  simon_cfg_wdata_tb   = 32'h00000001;
//  simon_cfg_wvalid_tb  = 1'b1;
  
//#2
//  simon_cfg_awaddr_tb  = 32'h00000000;
//  simon_cfg_awvalid_tb = 1'b0;
//  simon_cfg_wdata_tb   = 32'h00000000;
//  simon_cfg_wvalid_tb  = 1'b0;
  
#200
  simon_block_in_awaddr_tb = 32'hA00B0000;
  simon_block_in_awvalid_tb = 1'b1;
  simon_block_in_wdata_tb = 128'h74206e69206d6f6f6d69732061207369;
  simon_block_in_wvalid_tb = 1'b1;

#2
  simon_block_in_awaddr_tb = 32'hA00B0000;
  simon_block_in_awvalid_tb = 1'b0;
  simon_block_in_wdata_tb = 128'h74206e69206d6f6f6d69732061207369;
  simon_block_in_wvalid_tb = 1'b0;

//#200
//  simon_block_in_awaddr_tb = 32'h0;
//  simon_block_in_awvalid_tb = 1'b0;
//  simon_block_in_wdata_tb = 128'h0;
//  simon_block_in_wvalid_tb = 1'b0;
  
  
  
end




endmodule
