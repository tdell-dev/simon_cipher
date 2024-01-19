`ifndef SIMON_ENV_PKG
`define SIMON_ENV_PKG
package simon_env_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"

 //import agent ref model, register
 import simon_agent_pkg::*;
 import simon_ref_model_pkg::*;

 //top env files
 `include "simon_coverage.sv"
 `include "simon_scoreborad.sv"
 `include "simon_env.sv"

endpackage
`endif
