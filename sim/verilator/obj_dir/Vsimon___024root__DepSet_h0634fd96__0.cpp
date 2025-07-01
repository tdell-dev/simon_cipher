// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon__Syms.h"
#include "Vsimon___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__ico(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimon___024root___eval_triggers__ico(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimon___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__act(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimon___024root___eval_triggers__act(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk_simon_cfg) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_simon_cfg__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_simon_cfg__0 
        = vlSelfRef.clk_simon_cfg;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimon___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vsimon___024root___nba_sequent__TOP__0(Vsimon___024root* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf);
void Vsimon___024root___nba_sequent__TOP__1(Vsimon___024root* vlSelf);

void Vsimon___024root___eval_nba(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsimon___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo));
        Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo__0((&vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo));
        Vsimon___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vsimon___024root___nba_sequent__TOP__1(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__Vfuncout;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__inp;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__inp = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__Vfuncout;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__inp;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__inp = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__Vfuncout;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__inp;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__inp = 0;
    // Body
    vlSelfRef.simon_data_rdata[0U] = (IData)((((QData)((IData)(
                                                               ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.dout) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.dout) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.dout) 
                                                                    << 8U) 
                                                                   | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.dout))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.dout)))))));
    vlSelfRef.simon_data_rdata[1U] = (IData)(((((QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.dout))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.dout) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.dout) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.dout) 
                                                                      << 8U) 
                                                                     | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.dout)))))) 
                                              >> 0x20U));
    vlSelfRef.simon_data_rdata[2U] = (IData)((((QData)((IData)(
                                                               ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.dout) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.dout) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.dout) 
                                                                    << 8U) 
                                                                   | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.dout))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.dout)))))));
    vlSelfRef.simon_data_rdata[3U] = (IData)(((((QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.dout))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.dout) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.dout) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.dout) 
                                                                      << 8U) 
                                                                     | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.dout)))))) 
                                              >> 0x20U));
    vlSelfRef.simon_data_rvalid = (1U & (~ (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                             == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                            | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                               | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                   == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                  | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                      == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                     | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                         == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                        | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                           | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                               == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                              | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                     == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                    | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                        == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                       | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                           == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                          | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                             | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                                | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                                | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                                                | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                                                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)))))))))))))))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full 
        = ((((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
               << 0xfU) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                           << 0xeU)) | (((((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                         << 0xdU) | 
                                        ((((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                         << 0xcU))) 
            | ((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                 << 0xbU) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                             << 0xaU)) | (((((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                           << 9U) | 
                                          ((((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                           << 8U)))) 
           | (((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                 << 7U) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                           << 6U)) | (((((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                        == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                       << 5U) | ((((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                                 << 4U))) 
              | ((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                   << 3U) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                             << 2U)) | (((((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                         << 1U) | (
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__ingress_fifo_full 
        = ((((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
               << 0xfU) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                           << 0xeU)) | (((((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                         << 0xdU) | 
                                        ((((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                         << 0xcU))) 
            | ((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                 << 0xbU) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                             << 0xaU)) | (((((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                           << 9U) | 
                                          ((((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                           << 8U)))) 
           | (((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                 << 7U) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                           << 6U)) | (((((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                        == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                       << 5U) | ((((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                                 << 4U))) 
              | ((((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                   << 3U) | ((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                             << 2U)) | (((((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr)) 
                                         << 1U) | (
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
        = ((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_dd)
            ? (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__key_data_sel 
               ^ ((vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                   ^ (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__A 
                      & vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__B)) 
                  ^ vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__E))
            : (((QData)((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[2U]))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack 
        = ((IData)(vlSelfRef.simon_data_rvalid) & (IData)(vlSelfRef.simon_data_rready));
    vlSelfRef.simon_data_awready = (1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__ingress_fifo_full)))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
        = vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__pt0;
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.dout) 
                                       << 0x18U) | 
                                      ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.dout) 
                                       << 0x10U)) | 
                                     (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.dout) 
                                       << 8U) | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.dout))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.dout) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.dout) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.dout) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.dout)))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.dout) 
                                        << 0x18U) | 
                                       ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.dout) 
                                        << 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.dout) 
                                          << 8U) | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.dout))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.dout)))))) 
                   >> 0x20U));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.dout) 
                                       << 0x18U) | 
                                      ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.dout) 
                                       << 0x10U)) | 
                                     (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.dout) 
                                       << 8U) | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.dout))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.dout) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.dout) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.dout) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.dout)))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.dout) 
                                        << 0x18U) | 
                                       ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.dout) 
                                        << 0x10U)) 
                                      | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.dout) 
                                          << 8U) | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.dout))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.dout)))))) 
                   >> 0x20U));
    vlSelfRef.simon_data_wready = vlSelfRef.simon_data_awready;
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__wr_ack 
        = ((IData)(vlSelfRef.simon_data_awready) & (IData)(vlSelfRef.simon_data_wvalid));
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__inp 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__Vfuncout 
        = ((__Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__inp 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (__Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__inp 
                                                    >> 0x3fU))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__A 
        = __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls1__3__Vfuncout;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__inp 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__Vfuncout 
        = ((__Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__inp 
            << 8U) | (QData)((IData)((0xffU & (IData)(
                                                      (__Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__inp 
                                                       >> 0x38U))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__B 
        = __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls8__4__Vfuncout;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__inp 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1;
    __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__Vfuncout 
        = ((__Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__inp 
            << 2U) | (QData)((IData)((3U & (IData)(
                                                   (__Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__inp 
                                                    >> 0x3eU))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__E 
        = __Vfunc_simon__DOT__i_simon128_256_encrypt__DOT__ls2__5__Vfuncout;
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_dd 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_d;
    if (vlSelfRef.simon__DOT__key_data_vld) {
        vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__key_data_sel 
            = vlSelfRef.simon__DOT__key_data;
    }
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_d 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap;
    vlSelfRef.simon__DOT__key_data_vld = ((1U & (~ (IData)(vlSelfRef.rst_simon_cfg))) 
                                          && (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__key_rd_en_d));
    vlSelfRef.simon__DOT__key_data = vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__doutb_pipe;
    vlSelfRef.simon__DOT__i_key_schedule__DOT__key_rd_en_d = 1U;
    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__doutb_pipe 
        = ((0x100U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
            ? ((0x80U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                ? ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                    ? ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ffU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3feU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3faU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3efU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3eeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3edU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ecU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ebU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3eaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3deU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ddU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3daU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ceU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ccU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3caU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c0U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3beU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3baU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3afU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3aeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3adU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3acU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3abU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3aaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x399U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x398U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x397U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x396U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x395U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x394U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x393U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x392U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x391U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x390U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x389U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x388U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x387U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x386U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x385U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x384U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x383U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x382U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x381U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x380U])))))))))
                    : ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x379U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x378U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x377U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x376U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x375U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x374U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x373U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x372U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x371U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x370U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x369U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x368U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x367U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x366U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x365U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x364U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x363U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x362U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x361U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x360U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x359U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x358U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x357U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x356U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x355U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x354U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x353U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x352U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x351U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x350U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x349U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x348U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x347U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x346U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x345U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x344U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x343U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x342U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x341U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x340U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x339U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x338U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x337U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x336U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x335U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x334U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x333U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x332U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x331U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x330U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x329U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x328U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x327U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x326U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x325U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x324U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x323U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x322U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x321U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x320U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x319U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x318U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x317U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x316U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x315U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x314U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x313U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x312U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x311U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x310U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x309U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x308U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x307U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x306U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x305U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x304U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x303U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x302U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x301U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x300U]))))))))))
                : ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                    ? ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ffU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2feU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2faU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2efU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2eeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2edU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ecU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ebU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2eaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2deU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ddU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2daU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ceU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ccU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2caU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c0U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2beU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2baU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2afU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2aeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2adU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2acU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2abU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2aaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x299U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x298U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x297U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x296U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x295U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x294U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x293U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x292U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x291U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x290U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x289U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x288U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x287U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x286U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x285U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x284U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x283U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x282U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x281U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x280U])))))))))
                    : ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x279U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x278U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x277U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x276U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x275U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x274U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x273U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x272U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x271U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x270U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x269U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x268U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x267U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x266U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x265U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x264U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x263U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x262U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x261U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x260U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x259U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x258U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x257U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x256U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x255U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x254U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x253U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x252U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x251U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x250U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x249U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x248U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x247U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x246U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x245U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x244U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x243U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x242U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x241U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x240U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x239U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x238U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x237U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x236U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x235U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x234U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x233U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x232U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x231U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x230U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x229U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x228U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x227U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x226U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x225U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x224U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x223U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x222U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x221U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x220U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x219U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x218U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x217U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x216U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x215U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x214U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x213U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x212U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x211U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x210U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x209U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x208U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x207U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x206U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x205U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x204U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x203U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x202U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x201U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x200U])))))))))))
            : ((0x80U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                ? ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                    ? ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ffU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1feU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1faU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1efU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1eeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1edU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ecU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ebU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1eaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1deU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ddU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1daU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ceU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ccU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1caU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c0U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1beU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1baU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1afU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1aeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1adU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1acU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1abU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1aaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x199U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x198U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x197U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x196U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x195U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x194U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x193U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x192U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x191U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x190U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x189U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x188U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x187U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x186U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x185U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x184U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x183U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x182U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x181U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x180U])))))))))
                    : ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x179U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x178U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x177U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x176U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x175U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x174U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x173U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x172U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x171U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x170U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x169U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x168U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x167U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x166U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x165U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x164U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x163U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x162U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x161U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x160U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x159U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x158U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x157U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x156U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x155U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x154U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x153U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x152U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x151U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x150U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x149U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x148U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x147U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x146U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x145U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x144U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x143U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x142U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x141U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x140U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x139U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x138U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x137U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x136U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x135U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x134U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x133U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x132U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x131U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x130U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x129U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x128U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x127U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x126U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x125U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x124U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x123U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x122U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x121U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x120U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x119U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x118U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x117U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x116U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x115U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x114U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x113U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x112U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x111U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x110U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x109U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x108U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x107U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x106U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x105U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x104U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x103U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x102U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x101U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x100U]))))))))))
                : ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                    ? ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xffU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xefU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xeeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xedU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xecU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xebU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xeaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xddU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xceU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xccU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc0U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb0U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xafU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xaeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xadU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xacU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xabU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xaaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa0U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x99U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x98U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x97U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x96U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x95U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x94U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x93U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x92U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x91U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x90U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x89U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x88U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x87U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x86U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x85U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x84U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x83U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x82U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x81U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x80U])))))))))
                    : ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                        ? ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x79U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x78U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x77U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x76U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x75U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x74U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x73U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x72U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x71U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x70U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x69U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x68U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x67U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x66U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x65U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x64U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x63U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x62U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x61U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x60U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x59U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x58U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x57U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x56U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x55U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x54U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x53U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x52U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x51U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x50U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x49U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x48U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x47U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x46U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x45U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x44U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x43U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x42U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x41U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x40U]))))))))
                        : ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                            ? ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20U])))))))
                            : ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                ? ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1eU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1aU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10U]))))))
                                : ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                    ? ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xeU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcU]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xaU])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[8U])))))
                                    : ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                        ? ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[6U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[4U]))))
                                        : ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[2U])))
                                            : (((QData)((IData)(
                                                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0U]))))))))))));
    if (vlSelfRef.rst_simon_cfg) {
        vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap = 0U;
    } else if (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack) {
        vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap = 1U;
    } else if ((0x4bU == (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round))) {
        vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap = 0U;
    }
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack 
        = ((~ (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
               | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                   == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                  | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                      == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                     | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                         == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                        | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                           | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                               == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                              | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                  == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                     == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                    | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                        == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                       | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                           == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                          | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                             | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                       == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                      | (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                         | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)))))))))))))))))) 
           & (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_rdy));
    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round;
    if (vlSelfRef.simon__DOT__i_key_schedule__DOT__running) {
        if ((0x100U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((0x80U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3feU] 
                                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ffU] 
                                                = (IData)(
                                                          (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                           >> 0x20U));
                                        } else {
                                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fcU] 
                                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fdU] 
                                                = (IData)(
                                                          (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                           >> 0x20U));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3faU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fbU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f8U] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f9U] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f6U] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f7U] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f4U] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f5U] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f2U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f3U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f0U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3f1U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3eeU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3efU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ecU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3edU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3eaU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ebU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e8U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e9U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e6U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e7U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e4U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e5U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e2U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e3U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e0U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3e1U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3deU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dfU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dcU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ddU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3daU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dbU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d8U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d9U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d6U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d7U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d4U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d5U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d2U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d3U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d0U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3d1U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ceU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cfU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3ccU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cdU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3caU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cbU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3c1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3beU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bfU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bcU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bdU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3baU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bbU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b8U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b9U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b6U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b7U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b4U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b5U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b2U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b3U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b0U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3b1U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3aeU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3afU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3acU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3adU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3aaU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3abU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3a1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39eU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39fU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39cU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39dU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39aU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39bU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x398U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x399U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x396U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x397U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x394U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x395U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x392U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x393U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x390U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x391U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x388U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x389U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x386U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x387U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x384U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x385U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x382U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x383U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x380U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x381U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37eU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37fU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37cU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37dU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37aU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37bU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x378U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x379U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x376U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x377U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x374U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x375U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x372U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x373U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x370U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x371U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36eU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36fU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36cU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36dU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36aU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36bU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x368U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x369U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x366U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x367U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x364U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x365U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x362U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x363U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x360U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x361U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35eU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35fU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35cU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35dU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35aU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35bU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x358U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x359U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x356U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x357U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x354U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x355U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x352U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x353U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x350U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x351U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x348U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x349U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x346U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x347U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x344U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x345U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x342U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x343U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x340U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x341U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33eU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33fU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33cU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33dU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33aU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33bU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x338U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x339U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x336U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x337U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x334U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x335U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x332U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x333U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x330U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x331U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x328U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x329U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x326U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x327U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x324U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x325U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x322U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x323U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x320U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x321U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x318U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x319U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x316U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x317U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x314U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x315U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x312U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x313U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x310U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x311U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x308U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x309U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x306U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x307U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x304U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x305U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x302U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x303U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x300U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x301U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2feU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ffU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fcU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fdU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2faU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fbU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f8U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f9U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f6U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f7U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f4U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f5U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f2U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f3U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f0U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2f1U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2eeU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2efU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ecU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2edU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2eaU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ebU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2e1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2deU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dfU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dcU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ddU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2daU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dbU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2d1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ceU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cfU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2ccU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cdU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2caU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cbU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2c1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2beU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bfU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bcU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bdU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2baU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bbU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2b1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2aeU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2afU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2acU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2adU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2aaU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2abU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2a1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x298U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x299U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x296U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x297U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x294U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x295U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x292U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x293U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x290U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x291U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x288U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x289U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x286U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x287U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x284U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x285U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x282U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x283U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x280U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x281U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27eU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27fU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27cU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27dU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27aU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27bU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x278U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x279U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x276U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x277U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x274U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x275U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x272U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x273U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x270U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x271U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x268U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x269U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x266U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x267U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x264U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x265U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x262U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x263U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x260U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x261U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x258U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x259U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x256U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x257U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x254U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x255U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x252U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x253U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x250U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x251U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x248U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x249U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x246U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x247U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x244U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x245U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x242U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x243U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x240U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x241U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x238U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x239U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x236U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x237U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x234U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x235U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x232U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x233U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x230U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x231U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x228U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x229U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x226U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x227U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x224U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x225U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x222U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x223U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x220U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x221U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x218U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x219U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x216U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x217U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x214U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x215U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x212U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x213U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x210U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x211U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20eU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20fU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20cU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20dU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20aU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20bU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x208U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x209U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x206U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x207U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x204U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x205U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x202U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x203U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x200U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x201U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((0x80U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1feU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ffU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    } else {
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fcU] 
                                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fdU] 
                                            = (IData)(
                                                      (vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                       >> 0x20U));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1faU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fbU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f8U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f9U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f6U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f7U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f4U] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f5U] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f2U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f3U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f0U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1f1U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1eeU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1efU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ecU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1edU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1eaU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ebU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1e1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1deU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dfU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dcU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ddU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1daU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dbU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1d1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ceU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cfU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1ccU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cdU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1caU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cbU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1c1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1beU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bfU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bcU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bdU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1baU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bbU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1b1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1aeU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1afU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1acU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1adU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1aaU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1abU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1a1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x198U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x199U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x196U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x197U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x194U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x195U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x192U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x193U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x190U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x191U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x188U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x189U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x186U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x187U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x184U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x185U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x182U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x183U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x180U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x181U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17eU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17fU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17cU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17dU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17aU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17bU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x178U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x179U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x176U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x177U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x174U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x175U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x172U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x173U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x170U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x171U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x168U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x169U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x166U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x167U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x164U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x165U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x162U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x163U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x160U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x161U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x158U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x159U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x156U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x157U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x154U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x155U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x152U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x153U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x150U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x151U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x148U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x149U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x146U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x147U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x144U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x145U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x142U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x143U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x140U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x141U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x138U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x139U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x136U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x137U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x134U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x135U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x132U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x133U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x130U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x131U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x128U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x129U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x126U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x127U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x124U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x125U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x122U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x123U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x120U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x121U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x118U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x119U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x116U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x117U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x114U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x115U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x112U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x113U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x110U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x111U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10eU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10fU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10cU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10dU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10aU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10bU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x108U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x109U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x106U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x107U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x104U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x105U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x102U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x103U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x100U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x101U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((0x40U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfeU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xffU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                } else {
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfcU] 
                                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfdU] 
                                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                                   >> 0x20U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfaU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfbU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf8U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf9U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf6U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf7U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf4U] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf5U] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf2U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf3U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf0U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xf1U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xeeU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xefU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xecU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xedU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xeaU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xebU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xe1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdeU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdfU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdcU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xddU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdaU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdbU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xd1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xceU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcfU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xccU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcdU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcaU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcbU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc8U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc9U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc6U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc7U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc4U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc5U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc2U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc3U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc0U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xc1U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbeU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbfU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbcU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbdU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbaU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbbU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb8U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb9U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb6U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb7U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb4U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb5U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb2U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb3U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb0U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xb1U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xaeU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xafU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xacU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xadU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xaaU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xabU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa8U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa9U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa6U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa7U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa4U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa5U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa2U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa3U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa0U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xa1U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x9bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x98U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x99U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x96U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x97U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x94U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x95U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x92U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x93U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x90U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x91U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8eU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8fU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8cU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8dU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8aU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x8bU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x88U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x89U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x86U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x87U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x84U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x85U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x82U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x83U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x80U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x81U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((0x20U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7eU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7fU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            } else {
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7cU] 
                                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7dU] 
                                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                               >> 0x20U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7aU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x7bU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x78U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x79U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x76U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x77U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x74U] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x75U] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x72U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x73U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x70U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x71U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x6bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x68U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x69U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x66U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x67U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x64U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x65U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x62U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x63U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x60U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x61U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x5bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x58U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x59U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x56U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x57U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x54U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x55U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x52U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x53U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x50U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x51U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4eU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4fU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4cU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4dU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4aU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x4bU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x48U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x49U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x46U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x47U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x44U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x45U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x42U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x43U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x40U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x41U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((0x10U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3eU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3fU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        } else {
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3cU] 
                                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3dU] 
                                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                           >> 0x20U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3aU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x3bU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x38U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x39U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x36U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x37U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x34U] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x35U] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x32U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x33U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x30U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x31U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2eU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2fU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2cU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2dU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2aU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x2bU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x28U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x29U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x26U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x27U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x24U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x25U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x22U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x23U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x20U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x21U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((8U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1eU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1fU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    } else {
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1cU] 
                            = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                        vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1dU] 
                            = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                       >> 0x20U));
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1aU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x1bU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x18U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x19U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x16U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x17U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x14U] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x15U] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x12U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x13U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x10U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0x11U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((4U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xeU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xfU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                } else {
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xcU] 
                        = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                    vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xdU] 
                        = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                                   >> 0x20U));
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xaU] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0xbU] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[8U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[9U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[6U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[7U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            } else {
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[4U] 
                    = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
                vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[5U] 
                    = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[2U] 
                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[3U] 
                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                           >> 0x20U));
        } else {
            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[0U] 
                = (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
            vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space[1U] 
                = (IData)((vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 
                           >> 0x20U));
        }
    }
    if (vlSelfRef.rst_simon_cfg) {
        vlSelfRef.simon__DOT__i_key_schedule__DOT__running = 0U;
    } else if (vlSelfRef.simon__DOT__key_compute_start) {
        vlSelfRef.simon__DOT__i_key_schedule__DOT__running = 1U;
    } else if ((0x47U == (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))) {
        vlSelfRef.simon__DOT__i_key_schedule__DOT__running = 0U;
    }
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round 
        = vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__round;
    vlSelfRef.simon__DOT__i_key_schedule__DOT__k0 = vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__k0;
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round_complete 
        = (0x4bU == (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_ack 
        = ((~ (IData)((0U != (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full)))) 
           & (0x4bU == (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round)));
    vlSelfRef.simon__DOT__i_key_schedule__DOT__round 
        = vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__round;
    vlSelfRef.simon__DOT__key_compute_start = ((0xffU 
                                                == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled)) 
                                               | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__key_start_compute_override));
}
