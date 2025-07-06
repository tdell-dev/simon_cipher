`ifndef SIMON_AGENT_PKG
`define SIMON_AGENT_PKG

package simon_agent_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

  `include "simon_defines.svh"
  `include "simon_transaction.sv"
  `include "simon_sequencer.sv"
  `include "simon_driver.sv"
  `include "simon_monitor.sv"
  `include "simon_agent.sv"

endpackage


`endif
