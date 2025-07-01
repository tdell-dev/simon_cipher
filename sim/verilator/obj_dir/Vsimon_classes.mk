# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsimon.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsimon \
	Vsimon___024root__DepSet_h0634fd96__0 \
	Vsimon___024root__DepSet_h698ce94f__0 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__0 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__1 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__2 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__3 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__4 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__5 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__6 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__7 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__8 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__9 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__10 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__11 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__12 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__13 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__14 \
	Vsimon_fifo_wrapper__DepSet_h0e020365__15 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsimon__ConstPool_0 \
	Vsimon___024root__Slow \
	Vsimon___024root__DepSet_h0634fd96__0__Slow \
	Vsimon___024root__DepSet_h698ce94f__0__Slow \
	Vsimon_fifo_wrapper__Slow \
	Vsimon_fifo_wrapper__DepSet_h615ba322__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsimon__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsimon__Syms \
	Vsimon__Trace__0__Slow \
	Vsimon__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
