`ifndef SIMON_INTERFACE
`define SIMON_INTERFACE

interface simon_interface(input logic clk, reset);

  //declare signals
  logic [3:0] x,y;
  logic cin;
  logic [3:0] sum;
  logic cout;

  //clocking block and modport delcaration for driver

  clocking dr_cb@(posedge clk) ;
    output x;
    output y;
    output cin;
    input  sum;
    input cout;
  endclocking

  modport DRV (clocking dr_cb, input clk, reset ); 

  //clocking block and modport declaration for monitor
  clocking rc_cb@(negedge clk) ;
    input x;
    input y;
    input cin;
    input sum;
    input cout;
  endclocking

  modport RCV (clocking rc_cb, input clk, reset);

endinterface
`endif
