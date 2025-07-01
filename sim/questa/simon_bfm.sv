interface simon_bfm
  import simon_pkg::*;
  
  logic                         clk_simon_cfg      ;
  logic                         rst_simon_cfg      ;
                                                   
  logic [CFG_ADDR_WIDTH-1:0]    simon_cfg_araddr   ;
  logic [CFG_PROT_WIDTH-1:0]    simon_cfg_arprot   ;
  logic [               0:0]    simon_cfg_arready  ;
  logic [               0:0]    simon_cfg_arvalid  ;
  logic [CFG_ADDR_WIDTH-1:0]    simon_cfg_awaddr   ;
  logic [CFG_PROT_WIDTH-1:0]    simon_cfg_awprot   ;
  logic [               0:0]    simon_cfg_awready  ;
  logic [               0:0]    simon_cfg_awvalid  ;
  logic [               0:0]    simon_cfg_bready   ;
  logic [CFG_RESP_WIDTH-1:0]    simon_cfg_bresp    ;
  logic [               0:0]    simon_cfg_bvalid   ;
  logic [CFG_DATA_WIDTH-1:0]    simon_cfg_rdata    ;
  logic [               0:0]    simon_cfg_rready   ;
  logic [               0:0]    simon_cfg_rresp    ;
  logic [               0:0]    simon_cfg_rvalid   ;
  logic [CFG_DATA_WIDTH-1:0]    simon_cfg_wdata    ;
  logic [               0:0]    simon_cfg_wready   ;
  logic [CFG_STRB_WIDTH-1:0]    simon_cfg_wstrb    ;
  logic [               0:0]    simon_cfg_wvalid   ;

  logic                         clk_simon_data     ;
  logic                         rst_simon_data     ;
  
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

  task reset_cfg_if();
    rst_simon_cfg = 1'b0;
    @(posedge clk_simon_cfg);
    rst_simon_cfg = 1'b1;
    @(posedge clk_simon_cfg);
    @(posedge clk_simon_cfg);
    rst_simon_cfg = 1'b0;
  endtask : reset_cfg_if();

  task reset_data_if();
    rst_simon_data = 1'b0;
    @(posedge clk_simon_data);
    rst_simon_data = 1'b1;
    @(posedge clk_simon_data);
    @(posedge clk_simon_data);
    rst_simon_data = 1'b0;
  endtask : reset_data_if

endinterface : simon_bfm
