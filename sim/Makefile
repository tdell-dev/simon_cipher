all:
	verilator --cc --exe --build --timing -j 0 sim_main.cpp simon_sim_headers.sv simon_tb.sv -Isrc/ -Isim_src/

link:
	ln -s ../rtl/src/ .
