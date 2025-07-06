export SRC_DIR=../../rtl/src

SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(SRC_DIR)/simon.sv \
                   $(SRC_DIR)/simon_cfg.sv \
                   $(SRC_DIR)/simon_axi_to_fifo.sv \
                   $(SRC_DIR)/simon128_256_encrypt.sv \
                   $(SRC_DIR)/uram_wrapper.sv \
                   $(SRC_DIR)/fifo_wrapper.sv \
                   $(SRC_DIR)/key_schedule.sv \
                   ./wrapper/simon_wrapper.sv \
                   ./wrapper/sim_fifo.sv \
                   ./wrapper/sim_bram.sv

TOPLEVEL = simon_wrapper

MODULE = simon_test.simon_test

include $(shell cocotb-config --makefiles)/Makefile.sim
