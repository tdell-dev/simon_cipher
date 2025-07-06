`ifndef SIMON_TRANSACTION
`define SIMON_TRANSACTION

class simon_transaction extends uvm_sequence_item;

  //Declaration of simon transaction fields
  rand bit [`ADDER_WIDTH-1:0] x,y;
  rand bit cin;
  bit [`ADDER_WIDTH-1:0] sum;
  bit  cout;
  bit [2:0] carry_out;

  //declaration of utility/field macros
  `uvm_object_utils_begin(simon_transaction)
    `uvm_field_int(x, UVM_ALL_ON)
    `uvm_field_int(y, UVM_ALL_ON)
    `uvm_field_int(cin, UVM_ALL_ON)
    `uvm_field_int(sum, UVM_ALL_ON)
    `uvm_field_int(cout, UVM_ALL_ON)
    `uvm_field_int(carry_out, UVM_ALL_ON)
  `uvm_object_utils_end

  //constructor
  function new(string name = "simon_transaction");
    super.new(name);
  endfunction

  //declaration of constraints
  constraint x_c {x inside {[4'h0:4'hF]}; }
  constraint y_c {y inside {[4'h0:4'hF]}; }
  constraint cin_c {cin inside {0,1}; }

  function void post_randomize();
  endfunction

endclass

`endif
