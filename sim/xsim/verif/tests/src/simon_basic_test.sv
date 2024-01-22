`ifndef SIMON_BASIC_TEST
`define SIMON_BASIC_TEST

class simon_basic_test extends uvm_test;

  //delcare component utils for basic test case
  `uvm_component_utils(simon_basic_test)

  simon_environment env;
  simon_basic_seq   seq;

  //constructor
  function new(string name = "simon_basic_test", uvm_component parent=null);
    super.new(name, parent);
  endfunction : new

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = simon_environment::type_id::create("env", this);
    seq = simon_basic_seq::type_id::create("seq");
  endfunction : build_phase

  //trigger the sequences to run
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    seq.start(env.simon_agnt.sequencer);
    phase.drop_objection(this);
  endtask : run_phase

endclass : simon_basic_test
`endif

