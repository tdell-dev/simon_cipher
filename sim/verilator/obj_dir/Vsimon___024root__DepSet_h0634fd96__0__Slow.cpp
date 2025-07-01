// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon__Syms.h"
#include "Vsimon___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__stl(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimon___024root___eval_triggers__stl(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimon___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vsimon___024root___stl_sequent__TOP__0(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.simon_data_rlast = (0U == ((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt) 
                                         - (IData)(1U)));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round_complete 
        = (0x4bU == (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round));
    vlSelfRef.simon__DOT__key_compute_start = ((0xffU 
                                                == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled)) 
                                               | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__key_start_compute_override));
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
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack 
        = ((IData)(vlSelfRef.simon_data_rvalid) & (IData)(vlSelfRef.simon_data_rready));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_ack 
        = ((~ (IData)((0U != (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full)))) 
           & (0x4bU == (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round)));
    vlSelfRef.simon_data_awready = (1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__ingress_fifo_full)))));
    vlSelfRef.simon_data_wready = vlSelfRef.simon_data_awready;
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__wr_ack 
        = ((IData)(vlSelfRef.simon_data_awready) & (IData)(vlSelfRef.simon_data_wvalid));
}
