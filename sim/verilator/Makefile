SHELL := /bin/bash
all: env link verilate build_exec execute view

env:
	@echo "************************";
	@echo "* Installing  Verilator*";
	@echo "************************";
	./build_verilator

verilate:
	@echo "**************";
	@echo "* Verilating *";
	@echo "**************";
	source ~/tools/oss-cad-suite/environment && ./verilate_src
	#verilator -Wall --trace --x-assign unique --x-initial unique --cc ../rtl/src/core/simon.sv -I../rtl/src/top/ -I../rtl/src/core/ -I../rtl/src/ip/generic_models -I../rtl/src/ -exe src/tb_simon.cpp

build_exec:
	@echo "************";
	@echo "* Building *";
	@echo "************";
	source ~/tools/oss-cad-suite/environment && make -C obj_dir -f Vsimon.mk Vsimon

execute:
	@echo "*************";
	@echo "* Executing *";
	@echo "*************";
	source ~/tools/oss-cad-suite/environment && ./obj_dir/Vsimon +verilator+rand+reset+2

view:
	source ~/tools/oss-cad-suite/environment && gtkwave waveform.vcd

link:
	@echo "***********";
	@echo "* Linking *";
	@echo "***********";
#	if [ -d ../rtl/src/ ]; then \
		echo "../../src/ already linked"; \
	else \
		ln -s ../../src/ ./rtl/src; \
	fi

lint:
	source ~/tools/oss-cad-suite/environment && verilator --lint-only ../rtl/src/simon.sv -I../rtl/src/ -I../rtl/generic_models/

clean:
	rm -rf ./obj_dir
