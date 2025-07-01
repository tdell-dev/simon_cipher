// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon___024root.h"

VL_ATTR_COLD void Vsimon___024root___eval_static(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsimon___024root___eval_initial__TOP(Vsimon___024root* vlSelf);
VL_ATTR_COLD void Vsimon___024root____Vm_traceActivitySetAll(Vsimon___024root* vlSelf);

VL_ATTR_COLD void Vsimon___024root___eval_initial(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsimon___024root___eval_initial__TOP(vlSelf);
    Vsimon___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk_simon_cfg__0 
        = vlSelfRef.clk_simon_cfg;
}

VL_ATTR_COLD void Vsimon___024root___eval_initial__TOP(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simon_cfg_awready = 1U;
    vlSelfRef.simon_cfg_wready = 1U;
    vlSelfRef.simon_cfg_arready = 1U;
    vlSelfRef.simon_cfg_rresp = 0U;
    vlSelfRef.simon_cfg_bresp = 0U;
    vlSelfRef.simon__DOT__i_key_schedule__DOT____Vxrand_h8df6f50b__0 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
    vlSelfRef.simon_data_arready = 1U;
    vlSelfRef.simon_data_bresp = 0U;
}

VL_ATTR_COLD void Vsimon___024root___eval_final(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__stl(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsimon___024root___eval_phase__stl(Vsimon___024root* vlSelf);

VL_ATTR_COLD void Vsimon___024root___eval_settle(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsimon___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/src/simon.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsimon___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__stl(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimon___024root___stl_sequent__TOP__0(Vsimon___024root* vlSelf);

VL_ATTR_COLD void Vsimon___024root___eval_stl(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsimon___024root___stl_sequent__TOP__0(vlSelf);
        Vsimon___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsimon___024root___eval_triggers__stl(Vsimon___024root* vlSelf);

VL_ATTR_COLD bool Vsimon___024root___eval_phase__stl(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsimon___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsimon___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__ico(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__act(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_simon_cfg)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__nba(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_simon_cfg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimon___024root____Vm_traceActivitySetAll(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vsimon___024root___ctor_var_reset(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_simon_cfg = VL_RAND_RESET_I(1);
    vlSelf->rst_simon_cfg = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_araddr = VL_RAND_RESET_I(32);
    vlSelf->simon_cfg_arprot = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_arready = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simon_cfg_awprot = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_awready = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_bready = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_bresp = VL_RAND_RESET_I(2);
    vlSelf->simon_cfg_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_rdata = VL_RAND_RESET_I(32);
    vlSelf->simon_cfg_rready = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_rresp = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_wdata = VL_RAND_RESET_I(32);
    vlSelf->simon_cfg_wready = VL_RAND_RESET_I(1);
    vlSelf->simon_cfg_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simon_cfg_wvalid = VL_RAND_RESET_I(1);
    vlSelf->clk_simon_data = VL_RAND_RESET_I(1);
    vlSelf->rst_simon_data = VL_RAND_RESET_I(1);
    vlSelf->simon_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simon_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simon_data_arcache = VL_RAND_RESET_I(4);
    vlSelf->simon_data_arlen = VL_RAND_RESET_I(8);
    vlSelf->simon_data_arlock = VL_RAND_RESET_I(1);
    vlSelf->simon_data_arprot = VL_RAND_RESET_I(3);
    vlSelf->simon_data_arqos = VL_RAND_RESET_I(4);
    vlSelf->simon_data_arregion = VL_RAND_RESET_I(4);
    vlSelf->simon_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simon_data_arready = VL_RAND_RESET_I(1);
    vlSelf->simon_data_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simon_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simon_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simon_data_awcache = VL_RAND_RESET_I(4);
    vlSelf->simon_data_awlen = VL_RAND_RESET_I(8);
    vlSelf->simon_data_awlock = VL_RAND_RESET_I(1);
    vlSelf->simon_data_awprot = VL_RAND_RESET_I(3);
    vlSelf->simon_data_awqos = VL_RAND_RESET_I(4);
    vlSelf->simon_data_awregion = VL_RAND_RESET_I(4);
    vlSelf->simon_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simon_data_awready = VL_RAND_RESET_I(1);
    vlSelf->simon_data_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simon_data_bready = VL_RAND_RESET_I(1);
    vlSelf->simon_data_bresp = VL_RAND_RESET_I(2);
    vlSelf->simon_data_bvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->simon_data_rdata);
    vlSelf->simon_data_rlast = VL_RAND_RESET_I(1);
    vlSelf->simon_data_rready = VL_RAND_RESET_I(1);
    vlSelf->simon_data_rresp = VL_RAND_RESET_I(2);
    vlSelf->simon_data_rvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->simon_data_wdata);
    vlSelf->simon_data_wlast = VL_RAND_RESET_I(1);
    vlSelf->simon_data_wready = VL_RAND_RESET_I(1);
    vlSelf->simon_data_wstrb = VL_RAND_RESET_I(16);
    vlSelf->simon_data_wvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->simon__DOT__init_key);
    vlSelf->simon__DOT__key_compute_start = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__key_data_vld = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__key_data = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon_cfg__DOT__int_raddr = VL_RAND_RESET_I(3);
    vlSelf->simon__DOT__i_simon_cfg__DOT__int_waddr = VL_RAND_RESET_I(4);
    vlSelf->simon__DOT__i_simon_cfg__DOT__int_wdata = VL_RAND_RESET_I(32);
    vlSelf->simon__DOT__i_simon_cfg__DOT__int_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon_cfg__DOT__int_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon_cfg__DOT__key_start_compute_override = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon_cfg__DOT__word_filled = VL_RAND_RESET_I(8);
    vlSelf->simon__DOT__i_key_schedule__DOT____Vxrand_h8df6f50b__0 = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_key_schedule__DOT__k0 = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_key_schedule__DOT__k1 = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_key_schedule__DOT__k2 = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_key_schedule__DOT__k3 = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_key_schedule__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_key_schedule__DOT__round = VL_RAND_RESET_I(7);
    vlSelf->simon__DOT__i_key_schedule__DOT__key_rd_en_d = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(32768, vlSelf->simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space);
    vlSelf->simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__doutb_pipe = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_rdy = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__round = VL_RAND_RESET_I(7);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__round_complete = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_d = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_dd = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__A = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__B = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__E = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__pt1 = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__pt0 = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__key_data_sel = VL_RAND_RESET_Q(64);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__ingress_fifo_full = VL_RAND_RESET_I(16);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__wr_ack = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full = VL_RAND_RESET_I(16);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_ack = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack = VL_RAND_RESET_I(1);
    vlSelf->simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simon__DOT__i_key_schedule__DOT__round = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__simon__DOT__i_key_schedule__DOT__k0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__round = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__pt0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__clk_simon_cfg__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
