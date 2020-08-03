  interface axi4_lite_intf #(
    parameter ADDR_WIDTH = 32
  )(
    input aclk,
    input arst_n
  );

  //Read Address Channel
  logic [ADDR_WIDTH-1:0] araddr;
  logic [           3:0] arcache;
  logic [           2:0] arprot;
  logic [           0:0] arvalid;
  logic [           0:0] arready;

  //Read Channel
  logic [          31:0] rdata;
  logic [           1:0] rresp;
  logic [           0:0] rvalid;
  logic [           0:0] rready;

  //Write Address Channel
  logic [ADDR_WIDTH-1:0] awaddr;
  logic [           3:0] awcache;
  logic [           2:0] awprot;
  logic [           0:0] awvalid;
  logic [           0:0] awready;

  //Write Channel
  logic [          31:0] wdata;
  logic [           3:0] wstrb;

  //Write Resp Channel
  logic [           1:0] bresp;
  logic [           0:0] bvalid;
  logic [           0:0] bready;


  modport slave (
    input  araddr ,
    input  arcache,
    input  arprot ,
    input  arvalid,
    output arready,

    output rdata  ,
    output rresp  ,
    output rvalid ,
    input  rready ,

    input  awaddr ,
    input  awcache,
    input  awprot ,
    input  awvalid,
    output awready,

    input  wdata  ,
    input  wstrb  ,

    output bresp  ,
    output bvalid ,
    output bready
  );

  modport master (
    output araddr ,
    output arcache,
    output arprot ,
    output arvalid,
    input  arready,

    input  rdata  ,
    input  rresp  ,
    input  rvalid ,
    output rready ,

    output awaddr ,
    output awcache,
    output awprot ,
    output awvalid,
    input  awready,

    output wdata  ,
    output wstrb  ,

    input  bresp  ,
    input  bvalid ,
    input  bready
  );

  modport audit (
    input araddr ,
    input arcache,
    input arprot ,
    input arvalid,
    input arready,

    input rdata  ,
    input rresp  ,
    input rvalid ,
    input rready ,

    input awaddr ,
    input awcache,
    input awprot ,
    input awvalid,
    input awready,

    input wdata  ,
    input wstrb  ,

    input bresp  ,
    input bvalid ,
    input bready
  );

  endinterface
