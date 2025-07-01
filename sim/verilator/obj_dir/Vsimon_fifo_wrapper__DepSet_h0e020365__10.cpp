// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon__Syms.h"
#include "Vsimon_fifo_wrapper.h"

VL_INLINE_OPT void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo__0(Vsimon_fifo_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vdly__i_simon_fifo__DOT__raddr;
    __Vdly__i_simon_fifo__DOT__raddr = 0;
    // Body
    __Vdly__i_simon_fifo__DOT__raddr = vlSelfRef.__PVT__i_simon_fifo__DOT__raddr;
    if (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__wr_ack) {
        vlSelfRef.__PVT__i_simon_fifo__DOT__waddr = 
            (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__waddr)));
    }
    if (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack) {
        __Vdly__i_simon_fifo__DOT__raddr = (0x1ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr)));
    }
    if (vlSymsp->TOP.rst_simon_cfg) {
        vlSelfRef.__PVT__i_simon_fifo__DOT__waddr = 0U;
        __Vdly__i_simon_fifo__DOT__raddr = 0U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x80U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                        vlSelfRef.dout 
                                            = (0xffU 
                                               & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                     >> 0x18U)));
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                            = ((0xffffffU 
                                                & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                               | (0xff000000U 
                                                  & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                     << 8U)));
                                    } else {
                                        vlSelfRef.dout 
                                            = (0xffU 
                                               & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                     >> 0x10U)));
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                            = ((0xff00ffffU 
                                                & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                               | (0xff0000U 
                                                  & vlSymsp->TOP.simon_data_wdata[2U]));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                             << 0x18U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                               >> 8U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                        = ((0xffff00ffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                           | (0xff00U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]);
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                        = ((0xffffff00U 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                           | (0xffU 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 0x10U)));
                                }
                            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((0x80U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                           | (0xff000000U 
                                              & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                           | (0xff0000U 
                                              & vlSymsp->TOP.simon_data_wdata[2U]));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                       | (0xff00U & 
                                          (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                       | (0xffU & (
                                                   vlSymsp->TOP.simon_data_wdata[2U] 
                                                   >> 0x10U)));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                       | (0xff000000U 
                                          & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                       | (0xff0000U 
                                          & vlSymsp->TOP.simon_data_wdata[2U]));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 >> 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                               >> 0x10U)));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                                   | (0xff000000U & 
                                      (vlSymsp->TOP.simon_data_wdata[2U] 
                                       << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             >> 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                           >> 0x10U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                               | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                                 << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                               | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                           | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         >> 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                           | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                       >> 0x10U)));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                           | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                             << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                           | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                       | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     >> 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                       | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                                   >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                       | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                         << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                       | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                   | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                 >> 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                   | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                               >> 0x10U)));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                        << 8U) | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                                  >> 0x18U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
                   | (0xff000000U & (vlSymsp->TOP.simon_data_wdata[2U] 
                                     << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                        << 0x10U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                        >> 0x10U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
                   | (0xff0000U & vlSymsp->TOP.simon_data_wdata[2U]));
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                    << 0x18U) | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                                 >> 8U)));
        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
               | (0xff00U & (vlSymsp->TOP.simon_data_wdata[2U] 
                             >> 8U)));
    } else {
        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]);
        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
               | (0xffU & (vlSymsp->TOP.simon_data_wdata[2U] 
                           >> 0x10U)));
    }
    vlSelfRef.__PVT__i_simon_fifo__DOT__raddr = __Vdly__i_simon_fifo__DOT__raddr;
}

VL_INLINE_OPT void Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo__0(Vsimon_fifo_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsimon_fifo_wrapper___nba_sequent__TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vdly__i_simon_fifo__DOT__raddr;
    __Vdly__i_simon_fifo__DOT__raddr = 0;
    // Body
    __Vdly__i_simon_fifo__DOT__raddr = vlSelfRef.__PVT__i_simon_fifo__DOT__raddr;
    if (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_ack) {
        vlSelfRef.__PVT__i_simon_fifo__DOT__waddr = 
            (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__waddr)));
    }
    if (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack) {
        __Vdly__i_simon_fifo__DOT__raddr = (0x1ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr)));
    }
    if (vlSymsp->TOP.rst_simon_cfg) {
        vlSelfRef.__PVT__i_simon_fifo__DOT__waddr = 0U;
        __Vdly__i_simon_fifo__DOT__raddr = 0U;
    }
    if ((0x100U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x80U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                        vlSelfRef.dout 
                                            = (0xffU 
                                               & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                     >> 0x18U)));
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                            = ((0xffffffU 
                                                & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                               | ((IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U)) 
                                                  << 0x18U));
                                    } else {
                                        vlSelfRef.dout 
                                            = (0xffU 
                                               & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                   << 0x10U) 
                                                  | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                                     >> 0x10U)));
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                            = ((0xff00ffffU 
                                                & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                               | (0xff0000U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                              >> 0x10U)) 
                                                     << 0x10U)));
                                    }
                                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                             << 0x18U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                               >> 8U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                        = ((0xffff00ffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                           | (0xff00U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]);
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU] 
                                        = ((0xffffff00U 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7fU]) 
                                           | (0xffU 
                                              & (IData)(
                                                        (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                         >> 0x10U))));
                                }
                            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7eU]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7dU]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7cU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7bU]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x7aU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x79U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x78U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x77U]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x76U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x75U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x74U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x73U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x72U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x71U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x70U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6fU]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6eU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6dU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6cU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6bU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x6aU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x69U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x68U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x67U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x66U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x65U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x64U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x63U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x62U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x61U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x60U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5fU]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5eU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5dU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5cU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5bU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x5aU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x59U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x58U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x57U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x56U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x55U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x54U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x53U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x52U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x51U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x50U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4fU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4eU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4dU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4cU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4bU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x4aU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x49U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x48U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x47U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x46U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x45U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x44U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x43U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x42U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x41U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x40U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((0x80U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                             << 8U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                               >> 0x18U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                        = ((0xffffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                           | ((IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U)) 
                                              << 0x18U));
                                } else {
                                    vlSelfRef.dout 
                                        = (0xffU & 
                                           ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                               >> 0x10U)));
                                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                        = ((0xff00ffffU 
                                            & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                           | (0xff0000U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 0x10U)));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                                        >> 8U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                       | (0xff00U & 
                                          ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 8U)));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]);
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3fU]) 
                                       | (0xffU & (IData)(
                                                          (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                           >> 0x10U))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3eU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3dU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3cU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3bU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x3aU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x39U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x38U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x37U]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x36U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x35U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x34U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x33U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x32U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x31U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x30U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2fU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2eU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2dU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2cU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2bU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x2aU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x29U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x28U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x27U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x26U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x25U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x24U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x23U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x22U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x21U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x20U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((0x40U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                        >> 0x18U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                    = ((0xffffffU & 
                                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U)) 
                                          << 0x18U));
                            } else {
                                vlSelfRef.dout = (0xffU 
                                                  & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                        >> 0x10U)));
                                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                       | (0xff0000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 0x10U)));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                  << 0x18U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                                    >> 8U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                   | (0xff00U & ((IData)(
                                                         (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                          >> 0x10U)) 
                                                 << 8U)));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]);
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU] 
                                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1fU]) 
                                   | (0xffU & (IData)(
                                                      (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                       >> 0x10U))));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1eU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1dU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1cU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1bU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x1aU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x19U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x18U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x17U]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x16U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x15U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x14U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x13U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x12U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x11U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0x10U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                  << 8U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                    >> 0x18U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U)) 
                                      << 0x18U));
                        } else {
                            vlSelfRef.dout = (0xffU 
                                              & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                    >> 0x10U)));
                            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                                   | (0xff0000U & ((IData)(
                                                           (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                            >> 0x10U)) 
                                                   << 0x10U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                    << 0x18U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                                                      >> 8U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                               | (0xff00U & ((IData)(
                                                     (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                      >> 0x10U)) 
                                             << 8U)));
                    } else {
                        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]);
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU] 
                            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xfU]) 
                               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                   >> 0x10U))));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xeU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xdU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xcU]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xbU]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0xaU]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[9U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[8U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                      >> 0x18U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                            = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                               | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U)) 
                                  << 0x18U));
                    } else {
                        vlSelfRef.dout = (0xffU & (
                                                   (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                      >> 0x10U)));
                        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                            = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                               | (0xff0000U & ((IData)(
                                                       (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                        >> 0x10U)) 
                                               << 0x10U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                                                  >> 8U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                        = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                           | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                  >> 0x10U)) 
                                         << 8U)));
                } else {
                    vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]);
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[7U]) 
                           | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                               >> 0x10U))));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[6U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[5U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[4U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                  >> 0x18U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                        = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                           | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U)) << 0x18U));
                } else {
                    vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                                  >> 0x10U)));
                    vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                        = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                           | (0xff0000U & ((IData)(
                                                   (vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)) 
                                           << 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                            << 0x18U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                                              >> 8U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                       | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                              >> 0x10U)) 
                                     << 8U)));
            } else {
                vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]);
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[3U]) 
                       | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                           >> 0x10U))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[2U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                              >> 0x18U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                    = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                       | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U)) << 0x18U));
            } else {
                vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                            << 0x10U) 
                                           | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                              >> 0x10U)));
                vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                       | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                >> 0x10U)) 
                                       << 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                        << 0x18U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                                        >> 8U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                   | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                          >> 0x10U)) 
                                 << 8U)));
        } else {
            vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]);
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[1U]) 
                   | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                       >> 0x10U))));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                        << 8U) | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                                  >> 0x18U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
                   | ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                               >> 0x10U)) << 0x18U));
        } else {
            vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                        << 0x10U) | 
                                       (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                        >> 0x10U)));
            vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
                   | (0xff0000U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                            >> 0x10U)) 
                                   << 0x10U)));
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__i_simon_fifo__DOT__raddr))) {
        vlSelfRef.dout = (0xffU & ((vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                    << 0x18U) | (vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
                                                 >> 8U)));
        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
            = ((0xffff00ffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
               | (0xff00U & ((IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                      >> 0x10U)) << 8U)));
    } else {
        vlSelfRef.dout = (0xffU & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]);
        vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U] 
            = ((0xffffff00U & vlSelfRef.__PVT__i_simon_fifo__DOT__mem_space[0U]) 
               | (0xffU & (IData)((vlSymsp->TOP.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                   >> 0x10U))));
    }
    vlSelfRef.__PVT__i_simon_fifo__DOT__raddr = __Vdly__i_simon_fifo__DOT__raddr;
}
