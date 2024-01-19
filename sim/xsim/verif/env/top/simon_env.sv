`ifndef SIMON_ENV
`define SIMON_ENV

class simon_environment extends uvm_env;

  //components
  simon_agent simon_agnt;
  simon_ref_model ref_model;
  simon_coverage#(simon_transaction) coverage;
  simon_scoreboard sb;

  //component utils register with factory
  `uvm_component_utils(simon_environment);

  //constructor
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction : new

  //build_phase
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    simon_agnt = simon_agent::type_id::create("simon_Agent", this);
    ref_model = simon_ref_model::type_id::create("ref_model", this);
    coverage = simon_coverag#(simon_transaction)::type_id::create("coverage", this);
    sb = simon_scoreboard::type_id::create("sb", this);
  endfunction

  //constructor
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    simon_agnt.driver.drv2rm_port.connect(ref_model.rm_export);
    simon_agnt.monitor.mon2sb_port.connect(sb.mon2sb_export);
    ref_model.rm2sb_port.connect(coverage.analysis_export);
    ref_model.rm2sb_port.connect(sb.rm2sb_export);
  endfunction : connect_phase

endclass : simon_environment

`endif
