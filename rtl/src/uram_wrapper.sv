`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Personal
// Engineer: rptbt
// 
// Create Date: 10/20/2023 12:25:10 PM
// Design Name: 
// Module Name: simon128_256_encrypt
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module uram_wrapper #(
) (
  input  wire         clk      ,
  input  wire  [ 0:0] rst_async,

  input  wire  [71:0] din_a ,
  input  wire  [71:0] din_b ,

  input  wire  [ 8:0] din_bw_en_a,
  input  wire  [ 8:0] din_bw_en_b,

  output logic [71:0] dout_a,
  output logic [71:0] dout_b,

  input  wire  [22:0] addr_a,
  input  wire  [22:0] addr_b,

  input  wire  [ 0:0] en_a,
  input  wire  [ 0:0] en_b,
  
  input  wire  [ 0:0] we_a,
  input  wire  [ 0:0] we_b

);
 
URAM288_BASE #(
  .AUTO_SLEEP_LATENCY(8),            // Latency requirement to enter sleep mode
  .AVG_CONS_INACTIVE_CYCLES(10),     // Average consecutive inactive cycles when is SLEEP mode for power
                                     // estimation
  .BWE_MODE_A("PARITY_INTERLEAVED"), // Port A Byte write control
  .BWE_MODE_B("PARITY_INTERLEAVED"), // Port B Byte write control
  .EN_AUTO_SLEEP_MODE("FALSE"),      // Enable to automatically enter sleep mode
  .EN_ECC_RD_A("FALSE"),             // Port A ECC encoder
  .EN_ECC_RD_B("FALSE"),             // Port B ECC encoder
  .EN_ECC_WR_A("FALSE"),             // Port A ECC decoder
  .EN_ECC_WR_B("FALSE"),             // Port B ECC decoder
  .IREG_PRE_A("FALSE"),              // Optional Port A input pipeline registers
  .IREG_PRE_B("FALSE"),              // Optional Port B input pipeline registers
  .IS_CLK_INVERTED(1'b0),            // Optional inverter for CLK
  .IS_EN_A_INVERTED(1'b0),           // Optional inverter for Port A enable
  .IS_EN_B_INVERTED(1'b0),           // Optional inverter for Port B enable
  .IS_RDB_WR_A_INVERTED(1'b0),       // Optional inverter for Port A read/write select
  .IS_RDB_WR_B_INVERTED(1'b0),       // Optional inverter for Port B read/write select
  .IS_RST_A_INVERTED(1'b0),          // Optional inverter for Port A reset
  .IS_RST_B_INVERTED(1'b0),          // Optional inverter for Port B reset
  .OREG_A("FALSE"),                  // Optional Port A output pipeline registers
  .OREG_B("FALSE"),                  // Optional Port B output pipeline registers
  .OREG_ECC_A("FALSE"),              // Port A ECC decoder output
  .OREG_ECC_B("FALSE"),              // Port B output ECC decoder
  .RST_MODE_A("SYNC"),               // Port A reset mode
  .RST_MODE_B("SYNC"),               // Port B reset mode
  .USE_EXT_CE_A("FALSE"),            // Enable Port A external CE inputs for output registers
  .USE_EXT_CE_B("FALSE")             // Enable Port B external CE inputs for output registers
) URAM288_BASE_inst (
  .CLK              ( clk          ), // 1-bit input: Clock source
  .RST_A            ( rst_async    ), // 1-bit input: Port A asynchronous or synchronous reset for output registers
  .RST_B            ( rst_async    ), // 1-bit input: Port B asynchronous or synchronous reset for output registers
  .ADDR_A           ( addr_a       ), // 23-bit input: Port A address
  .ADDR_B           ( addr_b       ), // 23-bit input: Port B address
  .DIN_A            ( din_a        ), // 72-bit input: Port A write data input
  .DIN_B            ( din_b        ), // 72-bit input: Port B write data input
  .BWE_A            ( din_bw_en_a  ), // 9-bit input: Port A Byte-write enable
  .BWE_B            ( din_bw_en_b  ), // 9-bit input: Port B Byte-write enable
  .EN_A             ( en_a         ), // 1-bit input: Port A enable
  .EN_B             ( en_b         ), // 1-bit input: Port B enable
  .RDB_WR_A         ( we_a         ), // 1-bit input: Port A read/write select
  .RDB_WR_B         ( we_b         ), // 1-bit input: Port B read/write select
  .DOUT_A           ( dout_a       ), // 72-bit output: Port A read data output
  .DOUT_B           ( dout_b       ), // 72-bit output: Port B read data output
                                   
  .OREG_CE_A        ( 1'b1         ), // 1-bit input: Port A output register clock enable
  .OREG_CE_B        ( 1'b1         ), // 1-bit input: Port B output register clock enable

  .DBITERR_A        (              ), // 1-bit output: Port A double-bit error flag status
  .DBITERR_B        (              ), // 1-bit output: Port B double-bit error flag status
  .SBITERR_A        (              ), // 1-bit output: Port A single-bit error flag status
  .SBITERR_B        (              ), // 1-bit output: Port B single-bit error flag status
  .INJECT_DBITERR_A (              ), // 1-bit input: Port A double-bit error injection
  .INJECT_DBITERR_B (              ), // 1-bit input: Port B double-bit error injection
  .INJECT_SBITERR_A (              ), // 1-bit input: Port A single-bit error injection
  .INJECT_SBITERR_B (              ), // 1-bit input: Port B single-bit error injection
  .OREG_ECC_CE_A    (              ), // 1-bit input: Port A ECC decoder output register clock enable
  .OREG_ECC_CE_B    (              ), // 1-bit input: Port B ECC decoder output register clock enable
  .SLEEP            (              )  // 1-bit input: Dynamic power gating control
   );

endmodule
