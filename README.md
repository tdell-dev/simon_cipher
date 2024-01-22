Top-level git repo for the SIMON block cipher on Avnet ZUB1CG board project

This contains all of my implementations of the SIMON block cipher.

py/ contains the reference implementation of the SIMON block algorithm to test against
hls/ contains the C++ code needed to generate the SIMON block in Vivado HLS
rtl/ contains the SystemVerilog code needed and build the SIMON block in Vivado
sim/ contains the UVM testbench for the SIMON block to validate behavior ( WIP )
     also contains initial verilator testbench (WIP)
verif/ contains the cocotb testbench for the SIMON block to verify functionality

Repo tree is as follows:

<pre>
+-README.md
|
+-py
|\
| +- bit_func.py : provides pure-python implementations of XOR, and bit-wise AND
| +- bit_rotate.py : provides pure-python implementation of rotate left and rotate right ( with wrap-around ) using easy-to-type hex
| +- key_golden.txt : list of all keys for the given whitepaper initial key
| +- simon.py : performs the simon encryption for a given test case
| +- test.json : contains the whitepaper testcase in an easily extensible format
|
+-hls
|\
| +- simon.cpp : contains hls implementations of functions
| +- simon_dec_test.cpp : contains decryption test cases
| +- simon_enc_test.cpp : contains encryption test cases
| +- simon.h            : contains hls header declarations
| +- simon_helper.cpp   : contains helper functions for hls implementation
|
+-rtl
|\
| +src
|  \
|   +- fifo_wrapper.sv : wrapper for data fifo Xilinx IP
|   +- simon128_256_encrypt.sv :  encryption logic for SIMON block
|   +- simon_cfg.sv :  configuration block supporting AXI4-Lite
|   +- uram_wrapper.sv : wrapper for key memory Xilinx IP
|   +- key_schedule.sv : logic to produce key schedule from given initial key
|   +- simon_axi_to_fifo.sv :  converts axi data transactions to data fifo signaling
|   +- simon.sv : block-level hierarchy for simon block
|   +- zub1cg_simon.sv : top-level hierarchy containing Zynq MPSoC IP and design
|
+sim
|\
| +- xsim
| |\
| | +- run
| | |\
| | | +- run.tcl : 
| | | +- simon_compile_list.f : 
| | | +- simon_compile_list_actual.f : 
| | |
| | +- src
| | |\
| | | +-design : symbolic link to rtl/src directory that contains SIMON design
| | |
| | +- verif
| |  \
| |   +-env
| |   |\
| |   | +- agents
| |   | |\
| |   | | +- simon_agent
| |   | |  \
| |   | |   +- simon_agent_pkg.sv
| |   | |   +- simon_agent.sv
| |   | |   +- simon_defines.svh
| |   | |   +- simon_driver.sv
| |   | |   +- simon_monitor.sv
| |   | |   +- simon_sequencer.sv
| |   | |   +- simon_transaction.sv
| |   | |
| |   | +- ref_model
| |   | |\
| |   | | +- simon_ref_model_pkg.sv
| |   | | +- simon_ref_model.sv
| |   | |
| |   | +- top
| |   |  \
| |   |   +- simon_env_pkg.sv
| |   |   +- simon_env.sv
| |   |   +- simon_coverage.sv
| |   |   +- simon_scoreboard.sv
| |   |
| |   +-tb
| |   |\
| |   | +- src
| |   |  \ 
| |   |   +- simon_fifo.sv : stand-in for Xilinx FIFO IP
| |   |   +- simon_key_bram.sv : stand-in for Xilinx BRAM IP
| |   |   +- simon_interface.sv : 
| |   |   +- simon_tb_top.sv : 
| |   |
| |   +-tests
| |    \
| |     +- sequence_lib
| |     |\
| |     | +- src
| |     |  \
| |     |   +- simon_basic_seq.sv : 
| |     |   +- simon_seq_list.sv :
| |     |
| |     +- src
| |      \
| |       +- simon_basic_test.sv :
| |       +- simon_test_list.sv : 
| |
| +- verilator (WIP)
|
+-verif
 \
  +- create_env: shell script which sets up cocotb sim environtment
  |
  +- Makefile: Makefile required for cocotb sim
  | 
  +simon_test
  |\
  | +- README.md : readme for the cocotb python test package
  | +- setup.py : required file for making simon_test a python package
  |
  +simon_test
  |\
  | +- __init__.py : required file for making simon_test a python package
  | +- sim.py : contains the test logic for simon
  |
  +wrapper
   \
    +-simon128n256_wrapper.sv : 

</pre>
