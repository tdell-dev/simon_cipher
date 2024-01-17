This contains two testbenches for the simon project.

The verilator/ directory contains a simple cpp file and systemverilog testbench 
to run simple verification tests.
Intended to be used in conjunction with Verilator and GTKWave for preliminary be
havioral verification.

The xsim/ directory contains the UVM test files required for validation. 
Intended to be used in conjunction with the SystemVerilog contained in rtl/src/
along with Vivado simulator to provide verification and coverage for the simon
project.  For project details and video walkthru see tdell.xyz

Contains a driver, monitor, and environment adhering as much as possible to
best practices.
