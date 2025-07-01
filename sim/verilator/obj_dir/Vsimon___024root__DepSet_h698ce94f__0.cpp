// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon___024root.h"

void Vsimon___024root___ico_sequent__TOP__0(Vsimon___024root* vlSelf);

void Vsimon___024root___eval_ico(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsimon___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsimon___024root___ico_sequent__TOP__0(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__wr_ack 
        = ((IData)(vlSelfRef.simon_data_awready) & (IData)(vlSelfRef.simon_data_wvalid));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack 
        = ((IData)(vlSelfRef.simon_data_rvalid) & (IData)(vlSelfRef.simon_data_rready));
}

void Vsimon___024root___eval_triggers__ico(Vsimon___024root* vlSelf);

bool Vsimon___024root___eval_phase__ico(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsimon___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsimon___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsimon___024root___eval_act(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

extern const VlWide<8>/*255:0*/ Vsimon__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsimon___024root___nba_sequent__TOP__0(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__Vfuncout;
    __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__inp;
    __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__inp = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__Vfuncout;
    __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__inp;
    __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__inp = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__Vfuncout;
    __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__inp;
    __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__inp = 0;
    QData/*63:0*/ __Vdly__simon__DOT__i_key_schedule__DOT__k1;
    __Vdly__simon__DOT__i_key_schedule__DOT__k1 = 0;
    QData/*63:0*/ __Vdly__simon__DOT__i_key_schedule__DOT__k2;
    __Vdly__simon__DOT__i_key_schedule__DOT__k2 = 0;
    QData/*63:0*/ __Vdly__simon__DOT__i_key_schedule__DOT__k3;
    __Vdly__simon__DOT__i_key_schedule__DOT__k3 = 0;
    CData/*7:0*/ __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt;
    __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt;
    vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__round 
        = vlSelfRef.simon__DOT__i_key_schedule__DOT__round;
    vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__round 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round;
    vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__k0 
        = vlSelfRef.simon__DOT__i_key_schedule__DOT__k0;
    __Vdly__simon__DOT__i_key_schedule__DOT__k1 = vlSelfRef.simon__DOT__i_key_schedule__DOT__k1;
    __Vdly__simon__DOT__i_key_schedule__DOT__k2 = vlSelfRef.simon__DOT__i_key_schedule__DOT__k2;
    __Vdly__simon__DOT__i_key_schedule__DOT__k3 = vlSelfRef.simon__DOT__i_key_schedule__DOT__k3;
    vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__pt0 
        = vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0;
    if (vlSelfRef.rst_simon_cfg) {
        __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt = 0U;
        vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__round = 0U;
        vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__round = 0U;
    } else {
        if (vlSelfRef.simon_data_arvalid) {
            __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt 
                = vlSelfRef.simon_data_arlen;
        } else if (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack) {
            __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt 
                = (0xffU & ((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt) 
                            - (IData)(1U)));
        }
        if (vlSelfRef.simon__DOT__key_compute_start) {
            vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__round = 0U;
        } else if (vlSelfRef.simon__DOT__i_key_schedule__DOT__running) {
            vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__round 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round)));
        }
        if (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round_complete) {
            vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__round = 0U;
        } else if (((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack) 
                    | (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap))) {
            vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__round 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round)));
        }
    }
    if (vlSelfRef.rst_simon_cfg) {
        vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__k0 = 0ULL;
        __Vdly__simon__DOT__i_key_schedule__DOT__k1 = 0ULL;
        __Vdly__simon__DOT__i_key_schedule__DOT__k2 = 0ULL;
        __Vdly__simon__DOT__i_key_schedule__DOT__k3 = 0ULL;
    } else if (vlSelfRef.simon__DOT__key_compute_start) {
        vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__k0 
            = (((QData)((IData)(vlSelfRef.simon__DOT__init_key[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.simon__DOT__init_key[0U])));
        __Vdly__simon__DOT__i_key_schedule__DOT__k1 
            = (((QData)((IData)(vlSelfRef.simon__DOT__init_key[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.simon__DOT__init_key[2U])));
        __Vdly__simon__DOT__i_key_schedule__DOT__k2 
            = (((QData)((IData)(vlSelfRef.simon__DOT__init_key[5U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.simon__DOT__init_key[4U])));
        __Vdly__simon__DOT__i_key_schedule__DOT__k3 
            = (((QData)((IData)(vlSelfRef.simon__DOT__init_key[7U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.simon__DOT__init_key[6U])));
    } else if (vlSelfRef.simon__DOT__i_key_schedule__DOT__running) {
        vlSelfRef.__Vdly__simon__DOT__i_key_schedule__DOT__k0 
            = vlSelfRef.simon__DOT__i_key_schedule__DOT__k1;
        __Vdly__simon__DOT__i_key_schedule__DOT__k1 
            = vlSelfRef.simon__DOT__i_key_schedule__DOT__k2;
        __Vdly__simon__DOT__i_key_schedule__DOT__k2 
            = vlSelfRef.simon__DOT__i_key_schedule__DOT__k3;
        __Vtemp_1[0U] = 0x46d678bU;
        __Vtemp_1[1U] = 0xfdc94c3aU;
        __Vtemp_1[2U] = 0xe2U;
        __Vdly__simon__DOT__i_key_schedule__DOT__k3 
            = ((((0xfffffffffffffffcULL | (QData)((IData)(
                                                          (1U 
                                                           & ((0x48U 
                                                               >= (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round))
                                                               ? 
                                                              (__Vtemp_1[
                                                               ((IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x1fU 
                                                                & (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT__round)))
                                                               : (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT____Vxrand_h8df6f50b__0)))))) 
                 ^ ([&]() {
                            __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__inp 
                                = (([&]() {
                                        __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__inp 
                                            = vlSelfRef.simon__DOT__i_key_schedule__DOT__k3;
                                        __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__Vfuncout 
                                            = (((QData)((IData)(
                                                                (7U 
                                                                 & (IData)(__Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__inp)))) 
                                                << 0x3dU) 
                                               | (__Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__inp 
                                                  >> 3U));
                                    }(), __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__1__Vfuncout) 
                                   ^ vlSelfRef.simon__DOT__i_key_schedule__DOT__k1);
                            __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__Vfuncout 
                                = (((QData)((IData)(
                                                    (1U 
                                                     & (IData)(__Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__inp)))) 
                                    << 0x3fU) | (__Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__inp 
                                                 >> 1U));
                        }(), __Vfunc_simon__DOT__i_key_schedule__DOT__ror1__0__Vfuncout)) 
                ^ (([&]() {
                            __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__inp 
                                = vlSelfRef.simon__DOT__i_key_schedule__DOT__k3;
                            __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__Vfuncout 
                                = (((QData)((IData)(
                                                    (7U 
                                                     & (IData)(__Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__inp)))) 
                                    << 0x3dU) | (__Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__inp 
                                                 >> 3U));
                        }(), __Vfunc_simon__DOT__i_key_schedule__DOT__ror3__2__Vfuncout) 
                   ^ vlSelfRef.simon__DOT__i_key_schedule__DOT__k1)) 
               ^ vlSelfRef.simon__DOT__i_key_schedule__DOT__k0);
    }
    if (vlSelfRef.rst_simon_cfg) {
        vlSelfRef.simon_cfg_rvalid = 0U;
        vlSelfRef.simon_cfg_rdata = 0U;
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xfeU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xfdU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xfbU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xf7U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xefU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xdfU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0xbfU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
            = (0x7fU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr = 0U;
        vlSelfRef.simon__DOT__init_key[0U] = Vsimon__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.simon__DOT__init_key[1U] = Vsimon__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.simon__DOT__init_key[2U] = Vsimon__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.simon__DOT__init_key[3U] = Vsimon__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.simon__DOT__init_key[4U] = Vsimon__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.simon__DOT__init_key[5U] = Vsimon__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.simon__DOT__init_key[6U] = Vsimon__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.simon__DOT__init_key[7U] = Vsimon__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata = 0U;
        vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr = 0U;
    } else {
        if (vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_rvalid) {
            vlSelfRef.simon_cfg_rdata = ((4U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                          ? ((2U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                                  ? 
                                                 vlSelfRef.simon__DOT__init_key[7U]
                                                  : 
                                                 vlSelfRef.simon__DOT__init_key[6U])
                                              : ((1U 
                                                  & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                                  ? 
                                                 vlSelfRef.simon__DOT__init_key[5U]
                                                  : 
                                                 vlSelfRef.simon__DOT__init_key[4U]))
                                          : ((2U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                                  ? 
                                                 vlSelfRef.simon__DOT__init_key[3U]
                                                  : 
                                                 vlSelfRef.simon__DOT__init_key[2U])
                                              : ((1U 
                                                  & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr))
                                                  ? 
                                                 vlSelfRef.simon__DOT__init_key[0U]
                                                  : 
                                                 vlSelfRef.simon__DOT__init_key[0U])));
        }
        if (vlSelfRef.simon_cfg_arvalid) {
            vlSelfRef.simon_cfg_rvalid = 1U;
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr 
                = (7U & (vlSelfRef.simon_cfg_araddr 
                         >> 3U));
        } else if (vlSelfRef.simon_cfg_rready) {
            vlSelfRef.simon_cfg_rvalid = 0U;
        }
        if (vlSelfRef.simon__DOT__key_compute_start) {
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xfeU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xfdU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xfbU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xf7U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xefU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xdfU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0xbfU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                = (0x7fU & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
        } else {
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (0U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (1U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (1U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (2U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (2U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (4U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (3U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (8U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (4U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (0x10U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (5U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (0x20U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (6U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (0x40U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
            if (((IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) 
                 & (7U == (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr)))) {
                vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled 
                    = (0x80U | (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled));
            }
        }
        if (vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid) {
            if ((4U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                if ((2U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                    if ((1U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                        vlSelfRef.simon__DOT__init_key[7U] 
                            = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
                    } else {
                        vlSelfRef.simon__DOT__init_key[6U] 
                            = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
                    }
                } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                    vlSelfRef.simon__DOT__init_key[5U] 
                        = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
                } else {
                    vlSelfRef.simon__DOT__init_key[4U] 
                        = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
                }
            } else if ((2U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                if ((1U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                    vlSelfRef.simon__DOT__init_key[3U] 
                        = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
                } else {
                    vlSelfRef.simon__DOT__init_key[2U] 
                        = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
                }
            } else if ((1U & (IData)(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr))) {
                vlSelfRef.simon__DOT__init_key[1U] 
                    = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
            } else {
                vlSelfRef.simon__DOT__init_key[0U] 
                    = vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata;
            }
        }
        if (vlSelfRef.simon_cfg_wvalid) {
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata 
                = vlSelfRef.simon_cfg_wdata;
        }
        if (vlSelfRef.simon_cfg_awvalid) {
            vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr 
                = (0xfU & (vlSelfRef.simon_cfg_awaddr 
                           >> 2U));
        }
    }
    vlSelfRef.__Vdly__simon__DOT__i_simon128_256_encrypt__DOT__pt0 
        = ((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_dd)
            ? vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1
            : (((QData)((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout[0U]))));
    vlSelfRef.simon_data_bvalid = ((IData)(vlSelfRef.simon_data_wlast) 
                                   & (IData)(vlSelfRef.simon_data_wvalid));
    vlSelfRef.simon_cfg_bvalid = vlSelfRef.simon_cfg_wvalid;
    vlSelfRef.simon__DOT__i_simon_cfg__DOT__key_start_compute_override 
        = ((IData)(vlSelfRef.simon_cfg_awvalid) & (0x20U 
                                                   == 
                                                   (0x3cU 
                                                    & vlSelfRef.simon_cfg_awaddr)));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_rdy 
        = ((1U & (~ (IData)(vlSelfRef.rst_simon_cfg))) 
           && ((1U & (~ ((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack) 
                         | (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap)))) 
               && (1U & (~ (IData)((0U != (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full)))))));
    vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt 
        = __Vdly__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt;
    vlSelfRef.simon__DOT__i_key_schedule__DOT__k1 = __Vdly__simon__DOT__i_key_schedule__DOT__k1;
    vlSelfRef.simon__DOT__i_key_schedule__DOT__k2 = __Vdly__simon__DOT__i_key_schedule__DOT__k2;
    vlSelfRef.simon__DOT__i_key_schedule__DOT__k3 = __Vdly__simon__DOT__i_key_schedule__DOT__k3;
    vlSelfRef.simon_data_rlast = (0U == ((IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt) 
                                         - (IData)(1U)));
    vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_rvalid 
        = ((1U & (~ (IData)(vlSelfRef.rst_simon_cfg))) 
           && (IData)(vlSelfRef.simon_cfg_arvalid));
    vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid 
        = ((1U & (~ (IData)(vlSelfRef.rst_simon_cfg))) 
           && (IData)(vlSelfRef.simon_cfg_wvalid));
}

void Vsimon___024root___eval_triggers__act(Vsimon___024root* vlSelf);

bool Vsimon___024root___eval_phase__act(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsimon___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsimon___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsimon___024root___eval_nba(Vsimon___024root* vlSelf);

bool Vsimon___024root___eval_phase__nba(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsimon___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__ico(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__nba(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimon___024root___dump_triggers__act(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimon___024root___eval(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vsimon___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/src/simon.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsimon___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsimon___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/src/simon.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsimon___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/src/simon.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsimon___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsimon___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsimon___024root___eval_debug_assertions(Vsimon___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk_simon_cfg & 0xfeU))) {
        Verilated::overWidthError("clk_simon_cfg");}
    if (VL_UNLIKELY((vlSelfRef.rst_simon_cfg & 0xfeU))) {
        Verilated::overWidthError("rst_simon_cfg");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_arprot & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_arprot");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_arvalid & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_arvalid");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_awprot & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_awprot");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_awvalid & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_awvalid");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_bready & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_bready");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_rready & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_rready");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_wstrb & 0xf0U))) {
        Verilated::overWidthError("simon_cfg_wstrb");}
    if (VL_UNLIKELY((vlSelfRef.simon_cfg_wvalid & 0xfeU))) {
        Verilated::overWidthError("simon_cfg_wvalid");}
    if (VL_UNLIKELY((vlSelfRef.clk_simon_data & 0xfeU))) {
        Verilated::overWidthError("clk_simon_data");}
    if (VL_UNLIKELY((vlSelfRef.rst_simon_data & 0xfeU))) {
        Verilated::overWidthError("rst_simon_data");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arburst & 0xfcU))) {
        Verilated::overWidthError("simon_data_arburst");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arcache & 0xf0U))) {
        Verilated::overWidthError("simon_data_arcache");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arlock & 0xfeU))) {
        Verilated::overWidthError("simon_data_arlock");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arprot & 0xf8U))) {
        Verilated::overWidthError("simon_data_arprot");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arqos & 0xf0U))) {
        Verilated::overWidthError("simon_data_arqos");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arregion 
                     & 0xf0U))) {
        Verilated::overWidthError("simon_data_arregion");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arsize & 0xf8U))) {
        Verilated::overWidthError("simon_data_arsize");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_arvalid & 0xfeU))) {
        Verilated::overWidthError("simon_data_arvalid");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awburst & 0xfcU))) {
        Verilated::overWidthError("simon_data_awburst");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awcache & 0xf0U))) {
        Verilated::overWidthError("simon_data_awcache");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awlock & 0xfeU))) {
        Verilated::overWidthError("simon_data_awlock");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awprot & 0xf8U))) {
        Verilated::overWidthError("simon_data_awprot");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awqos & 0xf0U))) {
        Verilated::overWidthError("simon_data_awqos");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awregion 
                     & 0xf0U))) {
        Verilated::overWidthError("simon_data_awregion");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awsize & 0xf8U))) {
        Verilated::overWidthError("simon_data_awsize");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_awvalid & 0xfeU))) {
        Verilated::overWidthError("simon_data_awvalid");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_bready & 0xfeU))) {
        Verilated::overWidthError("simon_data_bready");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_rready & 0xfeU))) {
        Verilated::overWidthError("simon_data_rready");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_rresp & 0xfcU))) {
        Verilated::overWidthError("simon_data_rresp");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_wlast & 0xfeU))) {
        Verilated::overWidthError("simon_data_wlast");}
    if (VL_UNLIKELY((vlSelfRef.simon_data_wvalid & 0xfeU))) {
        Verilated::overWidthError("simon_data_wvalid");}
}
#endif  // VL_DEBUG
