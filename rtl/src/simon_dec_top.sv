// Simon Cypher decrypt 
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

  module simon_dec_top #(
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
    input clk,
    input rst,
  
    input  [255:0] data_in,
    input          data_in_vld,
    output         data_in_rdy,
  
    input  [255:0] key_in,
    input          key_in_vld,
    output         key_in_rdy,
  
    output [255:0] data_out,
    output         data_out_vld,
    input          data_out_rdy
  );

  if ( SIMON32S64 ) begin
    simon32s64_dec u_simon32s64_dec (
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
    simon48s72_dec u_simon48s72_dec (
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
    simon48s96_dec u_simon48s96_dec (
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
    simon64s96_dec u_simon64s96_dec (
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
    simon64s128_dec u_simon64s128_dec (
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
    simon96s96_dec u_simon96s96_dec (
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
    simon96s144_dec u_simon96s144_dec (
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
    simon128s128_dec u_simon128s128_dec (
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
    simon128s192_dec u_simon128s192_dec (
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
    simon128s256_dec u_simon128s256_dec (
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

