simon_build:
	/tools/Xilinx/Vivado/2024.1/bin/vivado -mode batch -source scripts/tcl/new_proj.tcl
ifeq ($(GUI),1)
	/tools/Xilinx/Vivado/2024.1/bin/vivado build/simon_cipher.xpr
endif

clean:
	@rm -rf *.jou *.log *.str build
