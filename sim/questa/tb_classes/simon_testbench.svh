class simon_testbench;

  virtual simon_bfm bfm;

  simon_tester tester;
  simon_scoreboard scoreboard;

  function new (virtual simon_bfm b);
    bfm = b;
  endfunction : new

endclass : simon_testbench
