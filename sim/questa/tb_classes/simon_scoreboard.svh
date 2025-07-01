class simon_scoreboard;
  virtual simon_bfm bfm;

  function new (virtual simon_bfm b);
    bfm = b;
  endfunction : new

  task execute();
    shortint predicted_result;
    $error( "Not Implemented" );
  endtask : execute

endclass : scorecard
