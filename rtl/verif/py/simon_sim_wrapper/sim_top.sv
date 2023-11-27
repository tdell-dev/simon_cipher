//Simon Sim Top level
//
module sim_top #(

) (

  input wire clk,
  input wire rst,

  input  wire  [ADDR_WIDTH-1:0] axi_config_araddr,
  input  wire  [           3:0] axi_config_arcache,
  input  wire  [           2:0] axi_config_arprot,
  input  wire  [           0:0] axi_config_arvalid,
  output logic [           0:0] axi_config_arready,

  output logic [          31:0] axi_config_rdata,
  output logic [           1:0] axi_config_rresp,
  output logic [           0:0] axi_config_rvalid,
  input   wire [           0:0] axi_config_rready,

  input  wire  [ADDR_WIDTH-1:0] axi_config_awaddr,
  input  wire  [           3:0] axi_config_awcache,
  input  wire  [           2:0] axi_config_awprot,
  input  wire  [           0:0] axi_config_awvalid,
  output logic [           0:0] axi_config_awready,

  input wire   [          31:0] axi_config_wdata,
  input wire   [           3:0] axi_config_wstrb,

  output logic [           1:0] axi_config_bresp,
  output logic [           0:0] axi_config_bvalid,
  input  wire  [           0:0] axi_config_bready
    
);


endmodule
