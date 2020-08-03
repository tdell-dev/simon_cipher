// Simon Cypher encrypt 
//
// Due to the numerous key size capabilities and word size abilities, only one
// of the following should be set to 1
//
//    BLOCK/KEY SIZE |    NUM ROUNDS
//    simon32s64     |        32
//    simon48s72     |        36
//    simon48s96     |        36
//    simon64s96     |        42
//    simon64s128    |        44
//    simon96s96     |        52
//    simon96s144    |        54
//    simon128s128   |        68
//    simon128s192   |        69
//    simon128s256   |        72
//
//

  module simon_enc_top #(
    parameter SIMON32S64   = 0,
    parameter SIMON48S72   = 0,
    parameter SIMON48S96   = 0,
    parameter SIMON64S96   = 0,
    parameter SIMON64S128  = 0,
    parameter SIMON96S96   = 0,
    parameter SIMON96S144  = 0,
    parameter SIMON128S128 = 0,
    parameter SIMON128S192 = 0,
    parameter SIMON128S256 = 0
  )(
      input                 clk, //must be clocked at the same as axi_config
      input                 rst,

      axi4_lite_intf.slave  axi_config
  );

    logic start;
    logic done;
    logic calc_vld;
    logic reg_awready;

    logic [127:0] data_in;
    logic         data_in_vld;
    logic         data_in_rdy;

    logic [255:0] key_in;
    logic         key_in_vld;
    logic         key_in_rdy;

    logic [127:0] data_out;
    logic         data_out_vld;
    logic         data_out_rdy;

    assign key_in_vld = start;
    assign data_in_vld = start;
    assign done = data_out_vld;

    //Need an optional signal from ureg that indicates when a register is read
    //or written to
    assign data_out_rdy = 1'b1;

    assign data_out_ack       = data_out_vld & data_out_rdy;
    assign axi_config.awready = reg_awready & data_in_rdy & key_in_rdy;

    simon_cipher_ureg u_ureg_regs (
      .aclk       ( clk  ),
      .arst_n     ( ~rst ),

      .inp_data_3 (  data_in[127: 96] ),
      .inp_data_2 (  data_in[ 95: 64] ),
      .inp_data_1 (  data_in[ 63: 32] ),
      .inp_data_0 (  data_in[ 31:  0] ),
     
      .inp_key_7  (   key_in[255:224] ),
      .inp_key_6  (   key_in[223:192] ),
      .inp_key_5  (   key_in[191:160] ),
      .inp_key_4  (   key_in[159:128] ),
      .inp_key_3  (   key_in[127: 96] ),
      .inp_key_2  (   key_in[ 95: 64] ),
      .inp_key_1  (   key_in[ 63: 32] ),
      .inp_key_0  (   key_in[ 31:  0] ),
     
      .out_data_3 ( data_out[127: 96] ),
      .out_data_2 ( data_out[ 95: 64] ),
      .out_data_1 ( data_out[ 63: 32] ),
      .out_data_0 ( data_out[ 31:  0] ),
     
      .start      ( start ),
      .done       ( done  ),
     
      .awvalid    ( axi_config.awvalid ),
      .awready    ( reg_awready ),
      .awaddr     ( axi_config.awaddr  ),
      .awprot     ( axi_config.awprot  ),
                                      
      .wvalid     ( axi_config.wvalid  ),
      .wready     ( axi_config.wready  ),
      .wdata      ( axi_config.wdata   ),
      .wstrb      ( axi_config.wstrb   ),
                                      
      .bvalid     ( axi_config.bvalid  ),
      .bready     ( axi_config.bready  ),
      .bresp      ( axi_config.bresp   ),
                                      
      .arvalid    ( axi_config.arvalid ),
      .arready    ( axi_config.arready ),
      .araddr     ( axi_config.araddr  ),
      .arprot     ( axi_config.arprot  ),
                                      
      .rvalid     ( axi_config.rvalid  ),
      .rready     ( axi_config.rready  ),
      .rdata      ( axi_config.rdata   ),
      .rresp      ( axi_config.rresp   ) 
    );


  if ( SIMON32S64 ) begin
    simon32s64_enc u_simon32s64_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                             
      .data_in      ( data_in[31:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                             
      .key_in       ( key_in[63:0]   ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                               
      .data_out     ( data_out[31:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON48S72 ) begin
    simon48s72_enc u_simon48s72_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                           
      .data_in      ( data_in[47:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                           
      .key_in       ( key_in[71:0]   ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                               
      .data_out     ( data_out[47:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON48S96 ) begin
    simon48s96_enc u_simon48s96_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                            
      .data_in      ( data_in[47:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                               
      .key_in       ( key_in[95:0]   ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                               
      .data_out     ( data_out[47:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON64S96 ) begin
    simon64s96_enc u_simon64s96_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                             
      .data_in      ( data_in[63:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                             
      .key_in       ( key_in[95:0]   ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                               
      .data_out     ( data_out[63:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON64S128 ) begin
    simon64s128_enc u_simon64s128_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                               
      .data_in      ( data_in[63:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                               
      .key_in       ( key_in[127:0]  ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                            
      .data_out     ( data_out[63:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON96S96 ) begin
    simon96s96_enc u_simon96s96_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                               
      .data_in      ( data_in[63:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                               
      .key_in       ( key_in[127:0]  ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                               
      .data_out     ( data_out[63:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON96S144 ) begin
    simon96s144_enc u_simon96s144_enc (
      .clk          ( clk            ),
      .rst          ( rst            ),
                                             
      .data_in      ( data_in[95:0]  ),
      .data_in_vld  ( data_in_vld    ),
      .data_in_rdy  ( data_in_rdy    ),
                                               
      .key_in       ( key_in[143:0]  ),
      .key_in_vld   ( key_in_vld     ),
      .key_in_rdy   ( key_in_rdy     ),
                                              
      .data_out     ( data_out[95:0] ),
      .data_out_vld ( data_out_vld   ),
      .data_out_rdy ( data_out_rdy   )
    );
  end
  
  if ( SIMON128S128 ) begin
    simon128s128_enc u_simon128s128_enc (
      .clk          ( clk             ),
      .rst          ( rst             ),
                                               
      .data_in      ( data_in[127:0]  ),
      .data_in_vld  ( data_in_vld     ),
      .data_in_rdy  ( data_in_rdy     ),
                                               
      .key_in       ( key_in[127:0]   ),
      .key_in_vld   ( key_in_vld      ),
      .key_in_rdy   ( key_in_rdy      ),
                                               
      .data_out     ( data_out[127:0] ),
      .data_out_vld ( data_out_vld    ),
      .data_out_rdy ( data_out_rdy    )
    );
  end
  
  if ( SIMON128S192 ) begin
    simon128s192_enc u_simon128s192_enc (
      .clk          ( clk             ),
      .rst          ( rst             ),
                                               
      .data_in      ( data_in[127:0]  ),
      .data_in_vld  ( data_in_vld     ),
      .data_in_rdy  ( data_in_rdy     ),
                           
      .key_in       ( key_in[191:0]   ),
      .key_in_vld   ( key_in_vld      ),
      .key_in_rdy   ( key_in_rdy      ),
                           
      .data_out     ( data_out[127:0] ),
      .data_out_vld ( data_out_vld    ),
      .data_out_rdy ( data_out_rdy    )
    );
  end
  
  if ( SIMON128S256 ) begin
    simon128s256_enc u_simon128s256_enc (
      .clk          ( clk             ),
      .rst          ( rst             ),
                           
      .data_in      ( data_in[127:0]  ),
      .data_in_vld  ( data_in_vld     ),
      .data_in_rdy  ( data_in_rdy     ),
                           
      .key_in       ( key_in[255:0]   ),
      .key_in_vld   ( key_in_vld      ),
      .key_in_rdy   ( key_in_rdy      ),
                           
      .data_out     ( data_out[127:0] ),
      .data_out_vld ( data_out_vld    ),
      .data_out_rdy ( data_out_rdy    )
    );
  end

endmodule

