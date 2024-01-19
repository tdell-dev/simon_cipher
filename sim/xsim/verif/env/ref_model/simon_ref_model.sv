`ifndef SIMON_REF_MODEL
`define SIMON_REF_MODEL

class simon_ref_model extends uvm_omponent;
  `uvm_component_utils( simon_ref_model)

  uvm_analysis_export#(simon_transaction) rm_export;
  uvm_analysis_port#(simon_transaction) rm2sb_port;
  simon_transaction exp_trans, rm_trans;
  uvm_tlm_analysis_fifo#(simon_transaction) rm_exp_fifo;

  //constructor
  function new(string name="simon_ref_model", uvm_component parent);
    super.new(name,parent);
  endfunction

  //build-phase
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    rm_export = new("rm_export", this);
    rm2sb_port = new("rm2sb_port", this);
    rm_exp_fifo = new("rm_exp_fifo" this);
  endfunction : build_phase

  //connect-phase
  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    rm_export.connect(rm_exp_fifo.analysis_export);
  endfunction : connect_phase

  //run
  task run_phase(uvm_phase phase);
    forever begin
      rm_exp_fifo.get(rm_trans);
      get_expected_transacion(rm_trans);
    end
  endtask

  task get_expected_transaction(simon_transaction rm_trans);
    this.exp_trans = rm_trans;
    `uvm_info(get_Full_name(),$sformatf("EXPECTED TRANSACTION FROM REF MODEL"),UVM_LOW);
    exp_trans.print();
    {exp_trans.cout, exp_trans.sum} = exp_trans.x + exp_trans.y + exp_trans.cin;
    rm2sb_port.write(exp_trans);
  endtask

endclass

`endif
