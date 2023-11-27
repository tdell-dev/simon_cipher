SRC_DIR ?= $(PWD)/../src/

VERILOG_SOURCES = $(SRC_DIR)/axi4_lite_intf.sv \
		  $(SRC_DIR)/simon128s128_enc.sv \
		  $(SRC_DIR)/simon128s192_enc.sv \
		  $(SRC_DIR)/simon128s256_enc.sv \
		  $(SRC_DIR)/simon32s64_enc.sv \
		  $(SRC_DIR)/simon48s72_enc.sv \
		  $(SRC_DIR)/simon48s96_enc.sv \
		  $(SRC_DIR)/simon64s128_enc.sv \
		  $(SRC_DIR)/simon64s96_enc.sv \
		  $(SRC_DIR)/simon96s144_enc.sv \
		  $(SRC_DIR)/simon96s96_enc.sv \
		  $(SRC_DIR)/simon_enc_subkey.sv \
		  $(SRC_DIR)/simon_enc_top.sv \
		  $(SRC_DIR)/simon128s128_dec.sv \
		  $(SRC_DIR)/simon128s192_dec.sv \
		  $(SRC_DIR)/simon128s256_dec.sv \
		  $(SRC_DIR)/simon32s64_dec.sv \
		  $(SRC_DIR)/simon48s72_dec.sv \
		  $(SRC_DIR)/simon48s96_dec.sv \
		  $(SRC_DIR)/simon64s128_dec.sv \
		  $(SRC_DIR)/simon64s96_dec.sv \
		  $(SRC_DIR)/simon96s144_dec.sv \
		  $(SRC_DIR)/simon96s96_dec.sv \
		  $(SRC_DIR)/simon_dec_subkey.sv \
		  $(SRC_DIR)/simon_dec_top.sv

TOPLEVEL = simon_sim_wrapper/sim_top

MODULE = simon_test.sim

include $(shell cocotb-config --makefiles)/Makefile.sim
