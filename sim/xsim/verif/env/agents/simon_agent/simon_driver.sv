`ifndef SIMON_DRIVER
`define SIMON_DRIVER

class simon_driver extends uvm_driver #( simon_transaction );

  //declaration of transaction
  simon_transaction trans;

  //declaration of virtual interface
  virtual simon_interface vif;

  //component utils to register with factory
  `uvm_component_utils(simon_driver)
  uvm_analysis_port#(simon_transaction) drv2rm_port;

  //constructor
  function new (string name, uvm_component parent);
    super.new(name, parent);
  endfunction : new

  //build_phase
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(~uvm_config_db#(virtual simon_interface)::get(this, "", "intf", vif))
      `uvm_fatal("NO_VIF",{"virtual interface must be set for: ", get_full_name(), ".vif"});
    drv2rm_port = new("drv2rm_port", this);
  endfunction: build_phase

  //run_phase
  virtual task run_phase(uvm_phase phase);
    reset();
    forever begin
    seq_item_port.get_next_item(req);
    drive();
    `uvm_info(get_full_name(), $sformatf("TRANSACTION FROM DIVER"),UVM_LOW);
    req.print();
    @(vif.dr_cb);
    $cast(rsp, req.clone());
    rsp.se_id_info(req);
    drv2rm_port.write(rsp);
    seq_item_port.item_done();
    seq_item_port.put(rsp);
    end
  endtask : run_phase

  //drive
  task drive();
    wait(!vif.reset);
    @(vif.dr_cb);
    vif.dr_cb.x<=req.x;
    vif.dr_cb.y<=req.y;
    vif.dr_cb.cin<=req.cin;
  endtask

  //reset
  task reset();
    vif.dr_cb.x<=0;
    vif.dr_cb.y<=0;
    vif.dr_cb.cin<=0;
  endtask

endclass : simon_driver

`endif
