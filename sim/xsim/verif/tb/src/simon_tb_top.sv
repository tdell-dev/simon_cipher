`ifndef SIMON_TB_TOP
`define SIMON_TB_TOP

`include "uvm_macros.svh"
`include "simon_interface.sv"

import uvm_pkg::*;
module simon_tb_top;

  import simon_test_list::*;

  //declare local fields
  parameter cycle = 10;
  bit clk;
  bit reset;

  //clock generation
  initial begin
    clk=0;
    forever #(cycle/2) clk=~clk;
  end

  //reset generation
  initial begin
    reset = 1;
    #(cycle*5) reset = 0;
  end

  simon_interface simon_intf(clk, reset);

  //simon DUT Instantiation
  adder_4_bit dut_inst (
                   .x    ( simon_intf.x    ),
                   .y    ( simon_intf.y    ),
                   .cin  ( simon_intf.cin  ),
                   .sum  ( simon_intf.sum  ),
                   .cout ( simon_intf.cout )
                 );

  //Start the execution uvm phases
  initial begin
    run_test();
  end

  //set the interface instance using config database
  initial begin
    uvm_config_db#(virtual simon_interface)::set(uvm_root::get(),"*","intf",simon_intf);
  end

endmodule

`endif
