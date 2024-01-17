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
import simon_sim_headers::simon_cfg_if;
import simon_sim_headers::simon_data_if;

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
    .clk_simon_cfg       ( clk_tb           ),
    .rst_simon_cfg       ( rst_tb           ),
                                            
    .clk_simon_data      ( clk_tb           ),
    .rst_simon_data      ( rst_tb           ),
                                                  
    .simon_cfg_araddr    ( cfg_if.araddr    ),
    .simon_cfg_arprot    ( cfg_if.arprot    ), 
    .simon_cfg_arready   ( cfg_if.arready   ),
    .simon_cfg_arvalid   ( cfg_if.arvalid   ),
    .simon_cfg_awaddr    ( cfg_if.awaddr    ),
    .simon_cfg_awprot    ( cfg_if.awprot    ),
    .simon_cfg_awready   ( cfg_if.awready   ),
    .simon_cfg_awvalid   ( cfg_if.awvalid   ),
    .simon_cfg_bready    ( cfg_if.bready    ),
    .simon_cfg_bresp     ( cfg_if.bresp     ),
    .simon_cfg_bvalid    ( cfg_if.bvalid    ),
    .simon_cfg_rdata     ( cfg_if.rdata     ),
    .simon_cfg_rready    ( cfg_if.rready    ),
    .simon_cfg_rresp     ( cfg_if.rresp     ),
    .simon_cfg_rvalid    ( cfg_if.rvalid    ),
    .simon_cfg_wdata     ( cfg_if.wdata     ),
    .simon_cfg_wready    ( cfg_if.wready    ),
    .simon_cfg_wstrb     ( cfg_if.wstrb     ),
    .simon_cfg_wvalid    ( cfg_if.wvalid    ),

    .simon_data_araddr   ( data_if.araddr   ),
    .simon_data_arburst  ( data_if.arburst  ),
    .simon_data_arcache  ( data_if.arcache  ),
    .simon_data_arlen    ( data_if.arlen    ),
    .simon_data_arlock   ( data_if.arlock   ),
    .simon_data_arprot   ( data_if.arprot   ),
    .simon_data_arqos    ( data_if.arqos    ),
    .simon_data_arregion ( data_if.arregion ),
    .simon_data_arsize   ( data_if.arsize   ),
    .simon_data_arready  ( data_if.arready  ),
    .simon_data_arvalid  ( data_if.arvalid  ),
                                                   
    .simon_data_awaddr   ( data_if.awaddr   ),
    .simon_data_awburst  ( data_if.awburst  ),
    .simon_data_awcache  ( data_if.awcache  ),
    .simon_data_awlen    ( data_if.awlen    ),
    .simon_data_awlock   ( data_if.awlock   ),
    .simon_data_awprot   ( data_if.awprot   ),
    .simon_data_awqos    ( data_if.awqos    ),
    .simon_data_awregion ( data_if.awregion ),
    .simon_data_awsize   ( data_if.awsize   ),
    .simon_data_awready  ( data_if.awready  ),
    .simon_data_awvalid  ( data_if.awvalid  ),
                                                   
    .simon_data_bready   ( data_if.bready   ),
    .simon_data_bresp    ( data_if.bresp    ),
    .simon_data_bvalid   ( data_if.bvalid   ),
                                                   
    .simon_data_rdata    ( data_if.rdata    ),
    .simon_data_rlast    ( data_if.rlast    ),
    .simon_data_rready   ( data_if.rready   ),
    .simon_data_rresp    ( data_if.rresp    ),
    .simon_data_rvalid   ( data_if.rvalid   ),
                                                   
    .simon_data_wdata    ( data_if.wdata    ),
    .simon_data_wlast    ( data_if.wlast    ),
    .simon_data_wready   ( data_if.wready   ),
    .simon_data_wstrb    ( data_if.wstrb    ),
    .simon_data_wvalid   ( data_if.wvalid   )
  );

always #1 clk_tb <= ~clk_tb;

simon_sim_headers::simon_cfg_if #( .DATA_WIDTH( CFG_DATA_WIDTH ),
                                   .ADDR_WIDTH( CFG_ADDR_WIDTH ),
                                   .PROT_WIDTH( CFG_PROT_WIDTH ),
                                   .RESP_WIDTH( CFG_RESP_WIDTH ),
                                   .STRB_WIDTH( CFG_STRB_WIDTH )
                                   ) cfg_if;

simon_sim_headers::simon_data_if #( .DATA_WIDTH   ( DATA_DATA_WIDTH   ),
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
                                 ) data_if;

initial begin
  clk_tb = 1'b1;
  rst_tb = 1'b0;
  
  cfg_if = new();
  cfg_if.display();
  
  #10 rst_tb = 1'b1;
  #10 rst_tb = 1'b0; 

//#2  simon_cfg_awaddr_tb  = 32'hA00A000;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h03020100;  simon_cfg_wvalid_tb  = 1'b1;
//#2  simon_cfg_awaddr_tb  = 32'hA00A004;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h07060504;  simon_cfg_wvalid_tb  = 1'b1;
//#2  simon_cfg_awaddr_tb  = 32'hA00A002;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h0b0a0908;  simon_cfg_wvalid_tb  = 1'b1;
//#2  simon_cfg_awaddr_tb  = 32'hA00A003;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h0f0e0d0c;  simon_cfg_wvalid_tb  = 1'b1;  
//#2  simon_cfg_awaddr_tb  = 32'hA00A004;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h13121110;  simon_cfg_wvalid_tb  = 1'b1;
//#2  simon_cfg_awaddr_tb  = 32'hA00A005;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h17161514;  simon_cfg_wvalid_tb  = 1'b1;
//#2  simon_cfg_awaddr_tb  = 32'hA00A006;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h1b1a1918;  simon_cfg_wvalid_tb  = 1'b1;
//#2  simon_cfg_awaddr_tb  = 32'hA00A007;  simon_cfg_awvalid_tb = 1'b1;  simon_cfg_wdata_tb   = 32'h1f1e1d1c;  simon_cfg_wvalid_tb  = 1'b1;
//#20 simon_data_awaddr_tb = 32'hA00B0000;  simon_data_awvalid_tb = 1'b1;  simon_data_wdata_tb = 128'h74206e69206d6f6f6d69732061207369;  simon_data_wvalid_tb = 1'b1;
//#2  simon_data_awaddr_tb = 32'hA00B0000;  simon_data_awvalid_tb = 1'b0;  simon_data_wdata_tb = 128'h74206e69206d6f6f6d69732061207369;  simon_data_wvalid_tb = 1'b0;

  
end




endmodule
