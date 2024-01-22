`ifndef SIMON_COVERAGE
`define SIMON_COVERAGE

class simon_coverage#(type T=simon_transaction) extends uvm_subscriber#(T);

//declaration of local fields
simon_transaction cov_trans;
`uvm_component_utils(simon_coverage);

//functional coverage: covergroup for simon
covergroup simon_cg;
  option.per_instance=1;
  option.goal=100;

  simon_x: coverpoint cov_trans.x {
             bins x_values[] = {[0:$]};
           }
  simon_y: coverpoint cov_trans.y {
             bins y_values[] = {[0:$]};
           }
  simon_cin: coverpoint cov_trans.cin {
             bins cin_1 = {1};
             bins cin_0 = {0};
           }

  simon_sum : coverpoint cov_trans.sum {
             bins sum_values[] = {[0:$]};
           }

  simon_cout : coverpoint cov_trans.cout {
             bins low = {0};
             bins high = {1};
           }
endgroup

//constructor
function new(string name="simon_ref_model", uvm_component parent);
  super.new(name,parent);
  simon_cg = new();
  cov_trans = new();
endfunction

//sampling coverage
function void write(T t);
  this.cov_trans = t;
  simon_cg.sample();
endfunction

endclass

`endif
