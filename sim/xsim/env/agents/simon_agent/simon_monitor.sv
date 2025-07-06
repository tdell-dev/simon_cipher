`ifndef SIMON_MONITOR
`define SIMON_MONITOR

class simon_monitor extends uvm_monitor;

  //virtual interface
  virtual simon_interface vif;

  //Declaration of Analysis ports and exports
  uvm_analysis_port #(simon_transaction) mon2sb_port;

  //Declaration of transaction
  simon_transaction act_trans;

  //Declaration of component utils
  `uvm_component_utils(simon_monitor)

  //constructor
  function new (string name, uvm_component parent);
    super.new(name, parent);
    act_trans = new();
    mon2sb_port = new("mon2sb_port", this);
  endfunction : new

  //build_phase
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(!uvm_config_db#(virtual simon_interface)::get(this, "", "intf", vif))
      `uvm_fatal("NOVIF", {"virtual interface must be set for: ",get_full_name(),".vif"});
  endfunction : build_phase

  virtual task run_phase(uvm_phase phase);
    forever begin
      collect_trans();
      mon2sb_port.write(act_trans);
    end
  endtask : run_phase 

  task collect_trans();
    wait(!vif.reset);
    @(vif.rc_cb);
    @(vif.rc_cb);
      act_trans.x = vif.rc_cb.x;
      act_trans.y = vif.rc_cb.y;
      act_trans.cin = vif.rc_cb.cin;
      act_trans.sum = vif.rc_cb.sum;
      act_trans.cout = vif.rc_cb.cout;
    `uvm_info(get_full_name(),$sformatf("TRANSACTION FROM MONITOR"),UVM_LOW);
      act_trans.print();
  endtask

endclass : simon_monitor

`endif
