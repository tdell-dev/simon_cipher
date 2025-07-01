// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIMON_H_
#define VERILATED_VSIMON_H_  // guard

#include "verilated.h"

class Vsimon__Syms;
class Vsimon___024root;
class VerilatedVcdC;
class Vsimon_fifo_wrapper;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsimon VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsimon__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_simon_cfg,0,0);
    VL_IN8(&rst_simon_cfg,0,0);
    VL_IN8(&simon_cfg_arprot,0,0);
    VL_OUT8(&simon_cfg_arready,0,0);
    VL_IN8(&simon_cfg_arvalid,0,0);
    VL_IN8(&simon_cfg_awprot,0,0);
    VL_OUT8(&simon_cfg_awready,0,0);
    VL_IN8(&simon_cfg_awvalid,0,0);
    VL_IN8(&simon_cfg_bready,0,0);
    VL_OUT8(&simon_cfg_bresp,1,0);
    VL_OUT8(&simon_cfg_bvalid,0,0);
    VL_IN8(&simon_cfg_rready,0,0);
    VL_OUT8(&simon_cfg_rresp,0,0);
    VL_OUT8(&simon_cfg_rvalid,0,0);
    VL_OUT8(&simon_cfg_wready,0,0);
    VL_IN8(&simon_cfg_wstrb,3,0);
    VL_IN8(&simon_cfg_wvalid,0,0);
    VL_IN8(&clk_simon_data,0,0);
    VL_IN8(&rst_simon_data,0,0);
    VL_IN8(&simon_data_arburst,1,0);
    VL_IN8(&simon_data_arcache,3,0);
    VL_IN8(&simon_data_arlen,7,0);
    VL_IN8(&simon_data_arlock,0,0);
    VL_IN8(&simon_data_arprot,2,0);
    VL_IN8(&simon_data_arqos,3,0);
    VL_IN8(&simon_data_arregion,3,0);
    VL_IN8(&simon_data_arsize,2,0);
    VL_OUT8(&simon_data_arready,0,0);
    VL_IN8(&simon_data_arvalid,0,0);
    VL_IN8(&simon_data_awburst,1,0);
    VL_IN8(&simon_data_awcache,3,0);
    VL_IN8(&simon_data_awlen,7,0);
    VL_IN8(&simon_data_awlock,0,0);
    VL_IN8(&simon_data_awprot,2,0);
    VL_IN8(&simon_data_awqos,3,0);
    VL_IN8(&simon_data_awregion,3,0);
    VL_IN8(&simon_data_awsize,2,0);
    VL_OUT8(&simon_data_awready,0,0);
    VL_IN8(&simon_data_awvalid,0,0);
    VL_IN8(&simon_data_bready,0,0);
    VL_OUT8(&simon_data_bresp,1,0);
    VL_OUT8(&simon_data_bvalid,0,0);
    VL_OUT8(&simon_data_rlast,0,0);
    VL_IN8(&simon_data_rready,0,0);
    VL_IN8(&simon_data_rresp,1,0);
    VL_OUT8(&simon_data_rvalid,0,0);
    VL_IN8(&simon_data_wlast,0,0);
    VL_OUT8(&simon_data_wready,0,0);
    VL_IN8(&simon_data_wvalid,0,0);
    VL_IN16(&simon_data_wstrb,15,0);
    VL_IN(&simon_cfg_araddr,31,0);
    VL_IN(&simon_cfg_awaddr,31,0);
    VL_OUT(&simon_cfg_rdata,31,0);
    VL_IN(&simon_cfg_wdata,31,0);
    VL_IN(&simon_data_araddr,31,0);
    VL_IN(&simon_data_awaddr,31,0);
    VL_OUTW(&simon_data_rdata,127,0,4);
    VL_INW(&simon_data_wdata,127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo;
    Vsimon_fifo_wrapper* const __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsimon___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsimon(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsimon(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsimon();
  private:
    VL_UNCOPYABLE(Vsimon);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
