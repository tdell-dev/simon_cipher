//Simon Sim Top level
//
module simon_wrapper ();

simon i_simon (
    .clk_simon_cfg           ( clk_simon_cfg           ),
    .rst_simon_cfg           ( rst_simon_cfg           ),
    .clk_simon_block_in      ( clk_simon_block_in      ),
    .rst_simon_block_in      ( rst_simon_block_in      ),
                                                       
    .simon_cfg_araddr        ( simon_cfg_araddr        ),
    .simon_cfg_arprot        ( simon_cfg_arprot        ), 
    .simon_cfg_arready       ( simon_cfg_arready       ),
    .simon_cfg_arvalid       ( simon_cfg_arvalid       ),
    .simon_cfg_awaddr        ( simon_cfg_awaddr        ),
    .simon_cfg_awprot        ( simon_cfg_awprot        ),
    .simon_cfg_awready       ( simon_cfg_awready       ),
    .simon_cfg_awvalid       ( simon_cfg_awvalid       ),
    .simon_cfg_bready        ( simon_cfg_bready        ),
    .simon_cfg_bresp         ( simon_cfg_bresp         ),
    .simon_cfg_bvalid        ( simon_cfg_bvalid        ),
    .simon_cfg_rdata         ( simon_cfg_rdata         ),
    .simon_cfg_rready        ( simon_cfg_rready        ),
    .simon_cfg_rresp         ( simon_cfg_rresp         ),
    .simon_cfg_rvalid        ( simon_cfg_rvalid        ),
    .simon_cfg_wdata         ( simon_cfg_wdata         ),
    .simon_cfg_wready        ( simon_cfg_wready        ),
    .simon_cfg_wstrb         ( simon_cfg_wstrb         ),
    .simon_cfg_wvalid        ( simon_cfg_wvalid        ),
                                                       
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
                                                       
    .simon_block_in_rdata    ( simon_block_in_rdata    ),
    .simon_block_in_rlast    ( simon_block_in_rlast    ),
    .simon_block_in_rready   ( simon_block_in_rready   ),
    .simon_block_in_rresp    ( simon_block_in_rresp    ),
    .simon_block_in_rvalid   ( simon_block_in_rvalid   ),
                                                       
    .simon_block_in_wdata    ( simon_block_in_wdata    ),
    .simon_block_in_wlast    ( simon_block_in_wlast    ),
    .simon_block_in_wready   ( simon_block_in_wready   ),
    .simon_block_in_wstrb    ( simon_block_in_wstrb    ),
    .simon_block_in_wvalid   ( simon_block_in_wvalid   )
);

initial begin
  $dumpfile("testbench.vcd");
  $dumpvars(0, i_simon);
end


endmodule
