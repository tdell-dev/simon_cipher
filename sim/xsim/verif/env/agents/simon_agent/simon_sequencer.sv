`ifndef SIMON_SEQUENCER
`define SIMON_SEQUENCER

class simon_sequencer extends uvm_sequencer#(simon_transaction);

  `uvm_component_utils(simon_sequencer)

  //constructor
  function new(string name, uvm_component parent);
    super.new(name,parent);
  endfunction

endclass

`endif
