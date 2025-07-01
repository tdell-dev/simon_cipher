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
	verilator -Wall --trace --x-assign unique --x-initial unique --cc ./rtl/src/core/simon.sv -Irtl/src/top/ -Irtl/src/core/ -Irtl/src/ip/generic_models -Isrc/ -exe src/tb_simon.cpp

build_exec:
	@echo "************";
	@echo "* Building *";
	@echo "************";
	make -C obj_dir -f Vsimon.mk Vsimon

execute:
	@echo "*************";
	@echo "* Executing *";
	@echo "*************";
	./obj_dir/Vsimon +verilator+rand+reset+2

view:
	gtkwave waveform.vcd

link:
	@echo "***********";
	@echo "* Linking *";
	@echo "***********";
	if [ -d ./rtl/src/ ]; then \
		echo "../../src/ already linked"; \
	else \
		ln -s ../../src/ ./rtl/src; \
	fi

lint:
	verilator --lint-only ./rtl/src/simon.sv -Irtl/src/ -Irtl/generic_models/

clean:
	rm -rf ./obj_dir
