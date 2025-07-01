class simon_data_if #(
  int DATA_WIDTH   = 32,
  int ADDR_WIDTH   = 32,
  int BURST_WIDTH  =  2,
  int CACHE_WIDTH  =  4,
  int LEN_WIDTH    =  8,
  int LOCK_WIDTH   =  1,
  int PROT_WIDTH   =  3,
  int QOS_WIDTH    =  4,
  int REGION_WIDTH =  3,
  int SIZE_WIDTH   =  3,
  int RESP_WIDTH   =  2,
  int STRB_WIDTH   =  4);

  bit [ADDR_WIDTH-1   :0] araddr  ;
  // constraints are not supported in Verilator
  //  constraint araddr_constr { araddr %4 == 0; }


  bit [BURST_WIDTH-1  :0] arburst ;
  bit [CACHE_WIDTH-1  :0] arcache ;
  bit [LEN_WIDTH-1    :0] arlen   ;
  bit [LOCK_WIDTH-1   :0] arlock  ;
  bit [PROT_WIDTH-1   :0] arprot  ;
  bit [QOS_WIDTH-1    :0] arqos   ;
  bit [REGION_WIDTH-1 :0] arregion;
  bit [SIZE_WIDTH-1   :0] arsize  ;
  bit [              0:0] arready ;
  bit [              0:0] arvalid ;

  bit [ADDR_WIDTH-1   :0] awaddr  ;
  // constraints are not supported in Verilator
  //  constraint awaddr_constr { awaddr %4 == 0; }

  bit [BURST_WIDTH-1  :0] awburst ;
  bit [CACHE_WIDTH-1  :0] awcache ;
  bit [LEN_WIDTH-1    :0] awlen   ;
  bit [LOCK_WIDTH-1   :0] awlock  ;
  bit [PROT_WIDTH-1   :0] awprot  ;
  bit [QOS_WIDTH-1    :0] awqos   ;
  bit [REGION_WIDTH-1 :0] awregion;
  bit [SIZE_WIDTH-1   :0] awsize  ;
  bit [              0:0] awready ;
  bit [              0:0] awvalid ;

  bit [              0:0] bready  ;
  bit [RESP_WIDTH-1   :0] bresp   ;
  bit [              0:0] bvalid  ;

  bit [DATA_WIDTH-1   :0] rdata   ;
  bit [              0:0] rready  ;
  bit [RESP_WIDTH-1   :0] rresp   ;
  bit [              0:0] rvalid  ;
  bit [              0:0] rlast   ;

  bit [DATA_WIDTH-1   :0] wdata   ;
  bit [STRB_WIDTH-1   :0] wstrb   ;
  bit [              0:0] wvalid  ;
  bit [              0:0] wready  ;
  bit [              0:0] wlast   ;

  function new();
    araddr  = 0;
    arburst = 0;
    arcache = 0;
    arlen   = 0;
    arlock  = 0;
    arprot  = 0;
    arqos   = 0;
    arregion= 0;
    arsize  = 0;
    arready = 0;
    arvalid = 0;

    awaddr  = 0;
    awburst = 0;
    awcache = 0;
    awlen   = 0;
    awlock  = 0;
    awprot  = 0;
    awqos   = 0;
    awregion= 0;
    awsize  = 0;
    awready = 0;
    awvalid = 0;

    bready  = 0;
    bresp   = 0;
    bvalid  = 0;

    rdata   = 0;
    rready  = 0;
    rresp   = 0;
    rvalid  = 0;

    wdata   = 0;
    wstrb   = 0;
    wvalid  = 0;
    wready  = 0;
  endfunction



endclass : simon_data_if

