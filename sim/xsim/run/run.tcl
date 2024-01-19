exec xvlog -sv -f simon_compile_list.f -L uvm -define NO_OF_TRANSACTIONS=2000 ;
exec xelab simon_tb_top relax -s top -timescale 1ns/1ps ;
exec xsim top -testplusarg UVM_TESTNAME=simon_basic_test -testplusarg UVM_VERBOSITY=UVM_LOW -runall
