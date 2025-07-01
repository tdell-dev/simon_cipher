// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimon.h for the primary calling header

#ifndef VERILATED_VSIMON_FIFO_WRAPPER_H_
#define VERILATED_VSIMON_FIFO_WRAPPER_H_  // guard

#include "verilated.h"


class Vsimon__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsimon_fifo_wrapper final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(din,7,0);
    VL_IN8(wr_en,0,0);
    VL_OUT8(dout,7,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(fifo_full,0,0);
    VL_OUT8(fifo_empty,0,0);
    VL_OUT8(__PVT__rd_rst_busy,0,0);
    VL_OUT8(__PVT__wr_rst_busy,0,0);
    VlWide<128>/*4095:0*/ __PVT__i_simon_fifo__DOT__mem_space;
    SData/*8:0*/ __PVT__i_simon_fifo__DOT__waddr;
    SData/*8:0*/ __PVT__i_simon_fifo__DOT__raddr;

    // INTERNAL VARIABLES
    Vsimon__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimon_fifo_wrapper(Vsimon__Syms* symsp, const char* v__name);
    ~Vsimon_fifo_wrapper();
    VL_UNCOPYABLE(Vsimon_fifo_wrapper);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
