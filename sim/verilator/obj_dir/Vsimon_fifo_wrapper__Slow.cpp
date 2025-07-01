// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon__Syms.h"
#include "Vsimon_fifo_wrapper.h"

void Vsimon_fifo_wrapper___ctor_var_reset(Vsimon_fifo_wrapper* vlSelf);

Vsimon_fifo_wrapper::Vsimon_fifo_wrapper(Vsimon__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimon_fifo_wrapper___ctor_var_reset(this);
}

void Vsimon_fifo_wrapper::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsimon_fifo_wrapper::~Vsimon_fifo_wrapper() {
}
