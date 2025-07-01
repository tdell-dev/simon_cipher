module top;

  import simon_pkg::*;

  simon DUT (

  );

  simon_bfm bfm();

  simon_testbench testbench_h;

  initial begin
    testbench_h = new(bfm);
    testbench_h.execute();
  end

endmodule : top
