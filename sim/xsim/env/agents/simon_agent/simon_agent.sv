`ifndef SIMON_AGENT
`define SIMON_AGENT

class simon_agent extends uvm_agent;

  //UVC components
  simon_driver    driver;
  simon_sequencer sequencer;
  simon_monitor   monitor;

  //component utils
  `uvm_component_utils(simon_agent)

  //constructor
  function new (string name, uvm_component parent);
    super.new(name, parent);
  endfunction : new

  //build-phase
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    driver    = simon_driver::type_id::create("driver", this);
    sequencer = simon_sequencer::type_id::create("sequencer", this);
    monitor   = simon_monitor::type_id::create("monitor", this);
  endfunction : build_phase

  //connect_phase
  function void connect_phase(uvm_phase phase);
    driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction : connect_phase

endclass : simon_agent 

`endif
