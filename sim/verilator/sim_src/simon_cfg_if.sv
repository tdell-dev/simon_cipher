class simon_cfg_if #(
  int DATA_WIDTH = 32,
  int ADDR_WIDTH = 32,
  int PROT_WIDTH =  1,
  int RESP_WIDTH =  2,
  int STRB_WIDTH =  4);


  //class properties
  rand bit [ADDR_WIDTH-1:0] araddr  ;
  // constraints are not supported in Verilator
  //  constraint araddr_constr { araddr %4 == 0; }

  rand bit [ADDR_WIDTH-1:0] awaddr  ;
  // constraints are not supported in Verilator
  //  constraint awaddr_constr { awaddr %4 == 0; }

  bit [           0:0] arready ;
  bit [           0:0] arvalid ;
  bit [PROT_WIDTH-1:0] arprot  ;

  bit [           0:0] awready ;
  bit [           0:0] awvalid ;
  bit [PROT_WIDTH-1:0] awprot  ;

  bit [           0:0] bready  ;
  bit [RESP_WIDTH-1:0] bresp   ;
  bit [           0:0] bvalid  ;
  bit [DATA_WIDTH-1:0] rdata   ;
  bit [           0:0] rready  ;
  bit [           0:0] rresp   ;
  bit [           0:0] rvalid  ;
  bit [DATA_WIDTH-1:0] wdata   ;
  bit [           0:0] wready  ;
  bit [STRB_WIDTH-1:0] wstrb   ;
  bit [           0:0] wvalid  ;

  function new();
    araddr  = 0;
    arprot  = 0; 
    arvalid = 0;
    awaddr  = 0;
    awprot  = 0;
    awvalid = 0;
    bready  = 0;
    rdata   = 0;
    rready  = 0;
    rresp   = 0;
    rvalid  = 0;
    wdata   = 0;
    wready  = 0;
    wstrb   = 0;
    wvalid  = 0;
  endfunction

  function void display();
    $display("---------------------------------------------------------------");
    $display("\t araddr  = %0h | awaddr  = %0h", this.araddr, this.awaddr);
    $display("\t arready = %0h | awready = %0h", this.arready, this.awready);
    $display("\t arvalid = %0h | awvalid = %0h", this.arvalid, this.awvalid);
    $display("\t rvalid  = %0h | rready  = %0h", this.rvalid, this.rready);
    $display("\t rdata   = %0h", this.rdata);
    $display("\t wvalid  = %0h | wready  = %0h", this.wvalid, this.wready);
    $display("\t wstrb   = %0h", this.wstrb);
    $display("\t wdata   = %0h", this.wdata);
    $display("\t bvalid  = %0h | bready  = %0h", this.bvalid, this.bready);
    $display("\t bresp   = %0h", this.bresp);
    $display("---------------------------------------------------------------");
  endfunction
endclass
