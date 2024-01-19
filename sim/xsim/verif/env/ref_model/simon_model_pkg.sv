`ifndef SIMON_REF_MODEL_PKG
`define SIMON_REF_MODEL_PKG

package simon_ref_model_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

  //import packages : agent, ref model, register ...
  import simon_agent_pkg::*;

  //ref model files
  `include "simon_ref_model.sv"

endpackage

`endif
