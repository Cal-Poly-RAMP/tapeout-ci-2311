TEST_DIR := $(abspath $(shell pwd)/../../tests)
RTL_DIR  := $(abspath  $(shell find ../.. -name '*.sv' -or -name '*.v' | grep -v 'peripherals' ))
INC_DIR  := $(abspath $(dir $(shell find ../.. -name '*.svh' -or -name '*.vh')))

# Cocotb options
SIM ?= verilator
TOPLEVEL_LANG := verilog
VERILOG_SOURCES := $(wildcard $(RTL_DIR)/*.sv)
# VERILOG_SOURCES := $(wildcard $(RTL_DIR)/wrapper_modules/*.sv)
# VERILOG_SOURCES += $(wildcard $(RTL_DIR)/core/*.sv)
# VERILOG_SOURCES += $(wildcard $(RTL_DIR)/core/modules/*.sv)
# VERILOG_SOURCES += $(wildcard $(RTL_DIR)/core/stages/*.sv)
TOPLEVEL = soc_sram
MODULE = test_sram
COMPILE_ARGS += $(foreach dir, $(INC_DIR), -I$(dir))
EXTRA_ARGS = --coverage-line --timing

include $(TEST_DIR)/Makefile.common