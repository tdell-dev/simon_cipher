// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimon__Syms.h"


void Vsimon___024root__trace_chg_0_sub_0(Vsimon___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimon___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root__trace_chg_0\n"); );
    // Init
    Vsimon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimon___024root*>(voidSelf);
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimon___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimon___024root__trace_chg_0_sub_0(Vsimon___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelfRef.simon__DOT__init_key),256);
        bufp->chgBit(oldp+8,(vlSelfRef.simon__DOT__key_compute_start));
        bufp->chgSData(oldp+9,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round),9);
        bufp->chgBit(oldp+10,(vlSelfRef.simon__DOT__key_data_vld));
        bufp->chgQData(oldp+11,(vlSelfRef.simon__DOT__key_data),64);
        bufp->chgQData(oldp+13,(vlSelfRef.simon__DOT__i_key_schedule__DOT__k0),64);
        bufp->chgQData(oldp+15,(vlSelfRef.simon__DOT__i_key_schedule__DOT__k1),64);
        bufp->chgQData(oldp+17,(vlSelfRef.simon__DOT__i_key_schedule__DOT__k2),64);
        bufp->chgQData(oldp+19,(vlSelfRef.simon__DOT__i_key_schedule__DOT__k3),64);
        __Vtemp_1[0U] = 0x46d678bU;
        __Vtemp_1[1U] = 0xfdc94c3aU;
        __Vtemp_1[2U] = 0xe2U;
        bufp->chgQData(oldp+21,((0xfffffffffffffffcULL 
                                 | (QData)((IData)(
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
                                                        : (IData)(vlSelfRef.simon__DOT__i_key_schedule__DOT____Vxrand_h8df6f50b__0))))))),64);
        bufp->chgBit(oldp+23,(vlSelfRef.simon__DOT__i_key_schedule__DOT__running));
        bufp->chgCData(oldp+24,(vlSelfRef.simon__DOT__i_key_schedule__DOT__round),7);
        bufp->chgBit(oldp+25,(vlSelfRef.simon__DOT__i_key_schedule__DOT__key_rd_en_d));
        bufp->chgSData(oldp+26,(vlSelfRef.simon__DOT__i_key_schedule__DOT__round),9);
        bufp->chgWData(oldp+27,(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__mem_space),32768);
        bufp->chgQData(oldp+1051,(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__doutb_pipe),64);
        bufp->chgSData(oldp+1053,(vlSelfRef.simon__DOT__i_key_schedule__DOT__i_simon_key_bram__DOT__addr_store),9);
        bufp->chgWData(oldp+1054,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_dout),128);
        bufp->chgBit(oldp+1058,((1U & (~ (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
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
                                                                                == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)))))))))))))))))))));
        bufp->chgBit(oldp+1059,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_rdy));
        __Vtemp_2[0U] = (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0);
        __Vtemp_2[1U] = (IData)((vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                 >> 0x20U));
        __Vtemp_2[2U] = (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1);
        __Vtemp_2[3U] = (IData)((vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                 >> 0x20U));
        bufp->chgWData(oldp+1060,(__Vtemp_2),128);
        bufp->chgBit(oldp+1064,((0x4bU == (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round))));
        bufp->chgBit(oldp+1065,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full)))))));
        bufp->chgCData(oldp+1066,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__round),7);
        bufp->chgBit(oldp+1067,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack));
        bufp->chgBit(oldp+1068,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap));
        bufp->chgBit(oldp+1069,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_d));
        bufp->chgBit(oldp+1070,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__ingress_fifo_ack_cap_dd));
        bufp->chgQData(oldp+1071,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__A),64);
        bufp->chgQData(oldp+1073,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__B),64);
        bufp->chgQData(oldp+1075,((vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__A 
                                   & vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__B)),64);
        bufp->chgQData(oldp+1077,((vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                   ^ (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__A 
                                      & vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__B))),64);
        bufp->chgQData(oldp+1079,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__E),64);
        bufp->chgQData(oldp+1081,(((vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                    ^ (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__A 
                                       & vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__B)) 
                                   ^ vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__E)),64);
        bufp->chgQData(oldp+1083,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1),64);
        bufp->chgQData(oldp+1085,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0),64);
        bufp->chgQData(oldp+1087,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__key_data_sel),64);
        bufp->chgSData(oldp+1089,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__ingress_fifo_full),16);
        bufp->chgSData(oldp+1090,((((((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                        == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                       << 0xfU) | (
                                                   ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   << 0xeU)) 
                                     | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xdU) | 
                                        (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xcU))) 
                                    | (((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xbU) | 
                                        (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 9U) | 
                                          (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 8U)))) 
                                   | ((((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   << 6U)) 
                                       | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 5U) | 
                                          (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 4U))) 
                                      | (((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                               == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))))))),16);
        bufp->chgSData(oldp+1091,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_full),16);
        bufp->chgSData(oldp+1092,((((((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                        == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                       << 0xfU) | (
                                                   ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   << 0xeU)) 
                                     | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xdU) | 
                                        (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xcU))) 
                                    | (((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xbU) | 
                                        (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 9U) | 
                                          (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 8U)))) 
                                   | ((((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                          == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                                    == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                                   << 6U)) 
                                       | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 5U) | 
                                          (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 4U))) 
                                      | (((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                            == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                              == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                               == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))))))),16);
        bufp->chgBit(oldp+1093,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__egress_fifo_ack));
        bufp->chgCData(oldp+1094,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__simon_rdata_cnt),8);
        bufp->chgCData(oldp+1095,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_raddr),3);
        bufp->chgCData(oldp+1096,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_waddr),4);
        bufp->chgIData(oldp+1097,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wdata),32);
        bufp->chgBit(oldp+1098,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_wvalid));
        bufp->chgBit(oldp+1099,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__int_rvalid));
        bufp->chgBit(oldp+1100,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__key_start_compute_override));
        bufp->chgCData(oldp+1101,(vlSelfRef.simon__DOT__i_simon_cfg__DOT__word_filled),8);
        bufp->chgCData(oldp+1102,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+1103,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1104,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1105,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1106,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1107,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+1235,((0xffU & (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0))),8);
        bufp->chgCData(oldp+1236,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+1237,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1238,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1239,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1240,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1241,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+1369,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+1370,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1371,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1372,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1373,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1374,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+1502,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+1503,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+1504,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1505,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1506,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1507,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1508,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+1636,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+1637,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1638,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1639,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1640,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1641,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+1769,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+1770,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+1771,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1772,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1773,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1774,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1775,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+1903,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+1904,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+1905,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+1906,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+1907,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+1908,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2036,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+2037,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+2038,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2039,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2040,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2041,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2042,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2170,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+2171,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2172,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2173,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2174,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2175,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2303,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+2304,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+2305,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2306,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2307,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2308,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2309,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2437,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+2438,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2439,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2440,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2441,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2442,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2570,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+2571,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+2572,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2573,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2574,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2575,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2576,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2704,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+2705,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2706,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2707,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2708,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2709,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2837,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+2838,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+2839,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2840,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2841,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2842,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2843,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+2971,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+2972,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+2973,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+2974,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+2975,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+2976,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3104,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt0 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+3105,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+3106,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3107,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3108,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3109,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3110,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3238,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+3239,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3240,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3241,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3242,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3243,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3371,((0xffU & (IData)(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1))),8);
        bufp->chgCData(oldp+3372,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+3373,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3374,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3375,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3376,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3377,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3505,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+3506,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3507,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3508,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3509,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3510,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3638,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 8U)))),8);
        bufp->chgCData(oldp+3639,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+3640,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3641,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3642,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3643,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3644,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3772,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+3773,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3774,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3775,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3776,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3777,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+3905,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x10U)))),8);
        bufp->chgCData(oldp+3906,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+3907,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+3908,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+3909,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+3910,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+3911,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4039,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+4040,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4041,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4042,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4043,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4044,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4172,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x18U)))),8);
        bufp->chgCData(oldp+4173,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+4174,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4175,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4176,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4177,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4178,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4306,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+4307,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4308,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4309,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4310,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4311,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4439,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x20U)))),8);
        bufp->chgCData(oldp+4440,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+4441,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4442,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4443,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4444,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4445,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4573,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+4574,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4575,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4576,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4577,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4578,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4706,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x28U)))),8);
        bufp->chgCData(oldp+4707,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+4708,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4709,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4710,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4711,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4712,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4840,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+4841,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4842,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4843,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4844,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4845,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+4973,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x30U)))),8);
        bufp->chgCData(oldp+4974,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+4975,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+4976,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+4977,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+4978,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+4979,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+5107,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.dout),8);
        bufp->chgBit(oldp+5108,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+5109,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+5110,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+5111,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+5112,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
        bufp->chgCData(oldp+5240,((0xffU & (IData)(
                                                   (vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__pt1 
                                                    >> 0x38U)))),8);
        bufp->chgCData(oldp+5241,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.dout),8);
        bufp->chgBit(oldp+5242,((((IData)(1U) + (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr)) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr))));
        bufp->chgBit(oldp+5243,(((IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr) 
                                 == (IData)(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr))));
        bufp->chgSData(oldp+5244,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__waddr),9);
        bufp->chgSData(oldp+5245,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__raddr),9);
        bufp->chgWData(oldp+5246,(vlSymsp->TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo.__PVT__i_simon_fifo__DOT__mem_space),4096);
    }
    bufp->chgBit(oldp+5374,(vlSelfRef.clk_simon_cfg));
    bufp->chgBit(oldp+5375,(vlSelfRef.rst_simon_cfg));
    bufp->chgIData(oldp+5376,(vlSelfRef.simon_cfg_araddr),32);
    bufp->chgBit(oldp+5377,(vlSelfRef.simon_cfg_arprot));
    bufp->chgBit(oldp+5378,(vlSelfRef.simon_cfg_arready));
    bufp->chgBit(oldp+5379,(vlSelfRef.simon_cfg_arvalid));
    bufp->chgIData(oldp+5380,(vlSelfRef.simon_cfg_awaddr),32);
    bufp->chgBit(oldp+5381,(vlSelfRef.simon_cfg_awprot));
    bufp->chgBit(oldp+5382,(vlSelfRef.simon_cfg_awready));
    bufp->chgBit(oldp+5383,(vlSelfRef.simon_cfg_awvalid));
    bufp->chgBit(oldp+5384,(vlSelfRef.simon_cfg_bready));
    bufp->chgCData(oldp+5385,(vlSelfRef.simon_cfg_bresp),2);
    bufp->chgBit(oldp+5386,(vlSelfRef.simon_cfg_bvalid));
    bufp->chgIData(oldp+5387,(vlSelfRef.simon_cfg_rdata),32);
    bufp->chgBit(oldp+5388,(vlSelfRef.simon_cfg_rready));
    bufp->chgBit(oldp+5389,(vlSelfRef.simon_cfg_rresp));
    bufp->chgBit(oldp+5390,(vlSelfRef.simon_cfg_rvalid));
    bufp->chgIData(oldp+5391,(vlSelfRef.simon_cfg_wdata),32);
    bufp->chgBit(oldp+5392,(vlSelfRef.simon_cfg_wready));
    bufp->chgCData(oldp+5393,(vlSelfRef.simon_cfg_wstrb),4);
    bufp->chgBit(oldp+5394,(vlSelfRef.simon_cfg_wvalid));
    bufp->chgBit(oldp+5395,(vlSelfRef.clk_simon_data));
    bufp->chgBit(oldp+5396,(vlSelfRef.rst_simon_data));
    bufp->chgIData(oldp+5397,(vlSelfRef.simon_data_araddr),32);
    bufp->chgCData(oldp+5398,(vlSelfRef.simon_data_arburst),2);
    bufp->chgCData(oldp+5399,(vlSelfRef.simon_data_arcache),4);
    bufp->chgCData(oldp+5400,(vlSelfRef.simon_data_arlen),8);
    bufp->chgBit(oldp+5401,(vlSelfRef.simon_data_arlock));
    bufp->chgCData(oldp+5402,(vlSelfRef.simon_data_arprot),3);
    bufp->chgCData(oldp+5403,(vlSelfRef.simon_data_arqos),4);
    bufp->chgCData(oldp+5404,(vlSelfRef.simon_data_arregion),4);
    bufp->chgCData(oldp+5405,(vlSelfRef.simon_data_arsize),3);
    bufp->chgBit(oldp+5406,(vlSelfRef.simon_data_arready));
    bufp->chgBit(oldp+5407,(vlSelfRef.simon_data_arvalid));
    bufp->chgIData(oldp+5408,(vlSelfRef.simon_data_awaddr),32);
    bufp->chgCData(oldp+5409,(vlSelfRef.simon_data_awburst),2);
    bufp->chgCData(oldp+5410,(vlSelfRef.simon_data_awcache),4);
    bufp->chgCData(oldp+5411,(vlSelfRef.simon_data_awlen),8);
    bufp->chgBit(oldp+5412,(vlSelfRef.simon_data_awlock));
    bufp->chgCData(oldp+5413,(vlSelfRef.simon_data_awprot),3);
    bufp->chgCData(oldp+5414,(vlSelfRef.simon_data_awqos),4);
    bufp->chgCData(oldp+5415,(vlSelfRef.simon_data_awregion),4);
    bufp->chgCData(oldp+5416,(vlSelfRef.simon_data_awsize),3);
    bufp->chgBit(oldp+5417,(vlSelfRef.simon_data_awready));
    bufp->chgBit(oldp+5418,(vlSelfRef.simon_data_awvalid));
    bufp->chgBit(oldp+5419,(vlSelfRef.simon_data_bready));
    bufp->chgCData(oldp+5420,(vlSelfRef.simon_data_bresp),2);
    bufp->chgBit(oldp+5421,(vlSelfRef.simon_data_bvalid));
    bufp->chgWData(oldp+5422,(vlSelfRef.simon_data_rdata),128);
    bufp->chgBit(oldp+5426,(vlSelfRef.simon_data_rlast));
    bufp->chgBit(oldp+5427,(vlSelfRef.simon_data_rready));
    bufp->chgCData(oldp+5428,(vlSelfRef.simon_data_rresp),2);
    bufp->chgBit(oldp+5429,(vlSelfRef.simon_data_rvalid));
    bufp->chgWData(oldp+5430,(vlSelfRef.simon_data_wdata),128);
    bufp->chgBit(oldp+5434,(vlSelfRef.simon_data_wlast));
    bufp->chgBit(oldp+5435,(vlSelfRef.simon_data_wready));
    bufp->chgSData(oldp+5436,(vlSelfRef.simon_data_wstrb),16);
    bufp->chgBit(oldp+5437,(vlSelfRef.simon_data_wvalid));
    bufp->chgBit(oldp+5438,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__wr_ack));
    bufp->chgBit(oldp+5439,(vlSelfRef.simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__rd_ack));
    bufp->chgCData(oldp+5440,((0xffU & vlSelfRef.simon_data_wdata[0U])),8);
    bufp->chgCData(oldp+5441,((0xffU & (vlSelfRef.simon_data_wdata[0U] 
                                        >> 8U))),8);
    bufp->chgCData(oldp+5442,((0xffU & (vlSelfRef.simon_data_wdata[0U] 
                                        >> 0x10U))),8);
    bufp->chgCData(oldp+5443,((vlSelfRef.simon_data_wdata[0U] 
                               >> 0x18U)),8);
    bufp->chgCData(oldp+5444,((0xffU & vlSelfRef.simon_data_wdata[1U])),8);
    bufp->chgCData(oldp+5445,((0xffU & (vlSelfRef.simon_data_wdata[1U] 
                                        >> 8U))),8);
    bufp->chgCData(oldp+5446,((0xffU & (vlSelfRef.simon_data_wdata[1U] 
                                        >> 0x10U))),8);
    bufp->chgCData(oldp+5447,((vlSelfRef.simon_data_wdata[1U] 
                               >> 0x18U)),8);
    bufp->chgCData(oldp+5448,((0xffU & vlSelfRef.simon_data_wdata[2U])),8);
    bufp->chgCData(oldp+5449,((0xffU & (vlSelfRef.simon_data_wdata[2U] 
                                        >> 8U))),8);
    bufp->chgCData(oldp+5450,((0xffU & (vlSelfRef.simon_data_wdata[2U] 
                                        >> 0x10U))),8);
    bufp->chgCData(oldp+5451,((vlSelfRef.simon_data_wdata[2U] 
                               >> 0x18U)),8);
    bufp->chgCData(oldp+5452,((0xffU & vlSelfRef.simon_data_wdata[3U])),8);
    bufp->chgCData(oldp+5453,((0xffU & (vlSelfRef.simon_data_wdata[3U] 
                                        >> 8U))),8);
    bufp->chgCData(oldp+5454,((0xffU & (vlSelfRef.simon_data_wdata[3U] 
                                        >> 0x10U))),8);
    bufp->chgCData(oldp+5455,((vlSelfRef.simon_data_wdata[3U] 
                               >> 0x18U)),8);
}

void Vsimon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimon___024root__trace_cleanup\n"); );
    // Init
    Vsimon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimon___024root*>(voidSelf);
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
