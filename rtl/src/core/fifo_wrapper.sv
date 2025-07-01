`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Personal
// Engineer: rptbt
// 
// Create Date: 10/24/2023 12:05:24 AM
// Design Name: 
// Module Name: bram_wrapper
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


module fifo_wrapper(
  input  wire         clk       ,
  input  wire         rst       ,
                                
  input  wire  [ 7:0] din       , 
  input  wire         wr_en     ,
                                
  output logic [ 7:0] dout      ,
  input  wire         rd_en     ,

  output logic        fifo_full ,
  output logic        fifo_empty,

  output logic        rd_rst_busy,
  output logic        wr_rst_busy
);
 
   // FIFO_SYNC_MACRO: Synchronous First-In, First-Out (FIFO) RAM Buffer
   //                  Kintex-7
   // Xilinx HDL Language Template, version 2022.2

   /////////////////////////////////////////////////////////////////
   // DATA_WIDTH | FIFO_SIZE | FIFO Depth | RDCOUNT/WRCOUNT Width //
   // ===========|===========|============|=======================//
   //   37-72    |  "36Kb"   |     512    |         9-bit         //
   //   19-36    |  "36Kb"   |    1024    |        10-bit         //
   //   19-36    |  "18Kb"   |     512    |         9-bit         //
   //   10-18    |  "36Kb"   |    2048    |        11-bit         //
   //   10-18    |  "18Kb"   |    1024    |        10-bit         //
   //    5-9     |  "36Kb"   |    4096    |        12-bit         //
   //    5-9     |  "18Kb"   |    2048    |        11-bit         //
   //    1-4     |  "36Kb"   |    8192    |        13-bit         //
   //    1-4     |  "18Kb"   |    4096    |        12-bit         //
   /////////////////////////////////////////////////////////////////

   simon_fifo i_simon_fifo (
      .clk         ( clk        ),     // 1-bit input clock
      .srst        ( rst        ),     // 1-bit input reset

      .din         ( din        ),     // Input data, width defined by DATA_WIDTH parameter
      .wr_en       ( wr_en      ),     // 1-bit input write enable

      .dout        ( dout       ),     // Output data, width defined by DATA_WIDTH parameter
      .rd_en       ( rd_en      ),     // 1-bit input read enable

      .empty       ( fifo_empty ),     // 1-bit output empty
      .full        ( fifo_full  ),
      
      .wr_rst_busy ( wr_rst_busy ),
      .rd_rst_busy ( rd_rst_busy )      // 1-bit output full
    );

endmodule
