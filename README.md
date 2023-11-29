Top-level git repo for the SIMON block cipher on Avnet ZUB1CG board project

This contains all of my implementations of the SIMON block cipher.

hls/ contains the C++ code needed to generate the SIMON block in Vivado HLS
rtl/ contains the SystemVerilog code needed to simulate and build the SIMON block in Vivado
py/ contains the reference implementation of the SIMON block algorithm to test against


Repo tree is as follows:

|+README.md
|+py
| \
|  +- bit_func.py : provides pure-python implementations of XOR, and bit-wise AND
|  +- bit_rotate.py : provides pure-python implementation of rotate left and rotate right ( with wrap-around ) using easy-to-type hex
|  +- key_golden.txt : list of all keys for the given whitepaper initial key
|  +- simon.py : performs the simon encryption for a given test case
|  +- test.json : contains the whitepaper testcase in an easily extensible format
|
|+hls
| \
| +- simon.cpp : contains hls implementations of functions
| +- simon_dec_test.cpp : contains decryption test cases
| +- simon_enc_test.cpp : contains encryption test cases
| +- simon.h            : contains hls header declarations
| +- simon_helper.cpp   : contains helper functions for hls implementation
|
|+rtl
| \
| +sim
| |\
| | +- simon_tb.sv : This behavioral systemverilog contains the simulation for a test in Xilinx Vivado simulator
| |
| +src
| |\
| | +- fifo_wrapper.sv : wrapper for data fifo Xilinx IP
| | +- simon128_256_encrypt.sv :  encryption logic for SIMON block
| | +- simon_cfg.sv :  configuration block supporting AXI4-Lite
| | +- uram_wrapper.sv : wrapper for key memory Xilinx IP
| | +- key_schedule.sv : logic to produce key schedule from given initial key
| | +- simon_axi_to_fifo.sv :  converts axi data transactions to data fifo signaling
| | +- simon.sv : block-level hierarchy for simon block
| | +- zub1cg_simon.sv : top-level hierarchy containing Zynq MPSoC IP and design
| |
| +verif
|  \
|  +- create_env: shell script which sets up cocotb sim environtment
|  +- Makefile: Makefile required for cocotb sim
|  +simon_test
|  |\
|  | +- README.md : readme for the cocotb python test package
|  | +- setup.py : required file for making simon_test a python package
|  |
|  +simon_test
|  |\
|  | +- __init__.py : required file for making simon_test a python package
|  | +- sim.py : contains the test logic for simon
|  |
|  +wrapper
|   \
|    +-simon128n256_wrapper.sv : 
