`ifndef SIMON_SCOREBOARD
`define SIMON_SCOREBOARD

class simon_scoreboard extends uvm_scoreboard;

  //declare component utils
  `uvm_component_utils(simon_scoreboard)

  //declare analysis ports and exports

  uvm_analysis_export#(simon_transaction) rm2sb_export, mon2sb_export;
  uvm_tlm_analysis_fifo#(simon_transaction) rm2sb_export_fifo, mon2sb_export_fifo;
  simon_transaction exp_trans, act_trans;
  simon_transaction exp_trans_fifo[$], act_trans_fifo[$];
  bit error;

  //constructor 
  function new (string name, uvm_component parent);
    super.new(name, parent);
  endfunction : new

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    rm2sb_export = new("rm2sb_export", this);
    mon2sb_export = new("mon2sb_export", this);
    rm2sb_export_fifo = new("rm2sb_export_fifo", this);
    mon2sb_export_fifo = new("mon2sb_export_fifo", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    rm2sb_export.connect(rm2sb_export_fifo.analysis_export);
    mon2sb_export.connect(mon2sb_export_fifo.analysis_export);
  endfunction: connect_phase

  //run phase
  virtual task run_phase(uvm_phase phase);
    super.run_phase(phase);
      forever begin
        mon2sb_export_fifo.get(act_trans);
        if(act_trans==null) $stop;
        act_trans_fifo.push_back(act_trans);
        
        rm2sb_export_fifo.get(exp_trans);
        if(exp_trans==null) $stop;
        exp_trans_fifo.push_back(exp_trans);
        compare_trans();
      end
  endtask
    
  //comparing expected and actual transactions
  task compare_trans();
    simon_transaction exp_trans, act_trans;
    if(exp_trans_fifo.size!=0) begin
      exp_trans = exp_trans_fifo.pop_front();
      if(act_trans_fifo.size!=0) begin
        act_trans = act_trans_fifo.pop_front();
        `uvm_info(get_full_name(), $sformatf("expected simon SUM =%d , actual simon SUM =%d ", exp_trans.sum, act_trans.sum),UVM_LOW);
        `uvm_info(get_full_name(), $sformatf("expected simon COUT =%d , actual simon COUT =%d ", exp_trans.cout, act_trans.cout),UVM_LOW);
        if(exp_trans.sum == act_trans.sum) begin
          `uvm_info(get_full_name(),$sformatf("SUM MATCHES"),UVM_LOW);
        end else begin
          `uvm_error(get_full_name(), $sformatf("SUM MISMATCHES"));
          error=1;
        end
        if(exp_trans.cout == act_trans.cout) begin
          `uvm_info(get_full_name(),$sformatf("COUT MATCHES"), UVM_LOW);
        end else begin
          `uvm_error(get_full_name(),$sformatf("COUT MISMATCHES"));
          error=1;
        end
      end
    end
  endtask

  //report pass/fail
  function void report_phase(uvm_phase phase);
    if(error==0) begin
      $write("%c[7;32m",27);
      $display("-------------------------------------------------");
      $display("------------- INFO : PASSED----------------------");
      $display("-------------------------------------------------");
      $write("%c[0m",27);
    end else begin
      $write("%c[7;31m",27);
      $display("-------------------------------------------------");
      $display("------------ ERROR : FAILED----------------------");
      $display("-------------------------------------------------");
      $write("%c[0m",27);
    end
  endfunction
endclass

`endif
