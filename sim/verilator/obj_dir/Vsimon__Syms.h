// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMON__SYMS_H_
#define VERILATED_VSIMON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsimon.h"

// INCLUDE MODULE CLASSES
#include "Vsimon___024root.h"
#include "Vsimon_fifo_wrapper.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsimon__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsimon* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsimon___024root               TOP;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper            TOP__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo;

    // CONSTRUCTORS
    Vsimon__Syms(VerilatedContext* contextp, const char* namep, Vsimon* modelp);
    ~Vsimon__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
