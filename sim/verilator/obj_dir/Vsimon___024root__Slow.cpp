// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimon.h for the primary calling header

#include "Vsimon__pch.h"
#include "Vsimon__Syms.h"
#include "Vsimon___024root.h"

void Vsimon___024root___ctor_var_reset(Vsimon___024root* vlSelf);

Vsimon___024root::Vsimon___024root(Vsimon__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimon___024root___ctor_var_reset(this);
}

void Vsimon___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsimon___024root::~Vsimon___024root() {
}
