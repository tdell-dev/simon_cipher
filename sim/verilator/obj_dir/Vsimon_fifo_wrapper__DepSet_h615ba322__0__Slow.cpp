// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon_fifo_wrapper.h"

VL_ATTR_COLD void Vsimon_fifo_wrapper___ctor_var_reset(Vsimon_fifo_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsimon_fifo_wrapper___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->fifo_full = VL_RAND_RESET_I(1);
    vlSelf->fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_rst_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_rst_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_simon_fifo__DOT__waddr = VL_RAND_RESET_I(9);
    vlSelf->__PVT__i_simon_fifo__DOT__raddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(4096, vlSelf->__PVT__i_simon_fifo__DOT__mem_space);
}
