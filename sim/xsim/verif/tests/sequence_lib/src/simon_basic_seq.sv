`ifndef SIMON_BASIC_SEQ
`define SIMON_BASIC_SEQ

class simon_basic_seq extends uvm_sequence#(simon_transaction);

  //Declare sequence utils
  `uvm_object_utils(simon_basic_seq)

  //constructor
  function new(string name = "simon_basic_seq");
    super.new(name);
  endfunction

  //body of sequence to send randomized transaction through sequencer to driver
  virtual task body();
    for(int i=0; i<`NO_OF_TRANSACTIONS;i++) begin
      req = simon_transaction::type_id::create("req");
      start_item(req);
      assert(req.randomize());
      `uvm_info(get_full_name(),$sformatf("RANDOMIZED TRANSACTION FROM SEQUENCE"),UVM_LOW);
      req.print();
      finish_item(req);
      get_response(rsp);
    end
  endtask

endclass

`endif
