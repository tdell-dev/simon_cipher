// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimon__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsimon::Vsimon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimon__Syms(contextp(), _vcname__, this)}
    , clk_simon_cfg{vlSymsp->TOP.clk_simon_cfg}
    , rst_simon_cfg{vlSymsp->TOP.rst_simon_cfg}
    , simon_cfg_arprot{vlSymsp->TOP.simon_cfg_arprot}
    , simon_cfg_arready{vlSymsp->TOP.simon_cfg_arready}
    , simon_cfg_arvalid{vlSymsp->TOP.simon_cfg_arvalid}
    , simon_cfg_awprot{vlSymsp->TOP.simon_cfg_awprot}
    , simon_cfg_awready{vlSymsp->TOP.simon_cfg_awready}
    , simon_cfg_awvalid{vlSymsp->TOP.simon_cfg_awvalid}
    , simon_cfg_bready{vlSymsp->TOP.simon_cfg_bready}
    , simon_cfg_bresp{vlSymsp->TOP.simon_cfg_bresp}
    , simon_cfg_bvalid{vlSymsp->TOP.simon_cfg_bvalid}
    , simon_cfg_rready{vlSymsp->TOP.simon_cfg_rready}
    , simon_cfg_rresp{vlSymsp->TOP.simon_cfg_rresp}
    , simon_cfg_rvalid{vlSymsp->TOP.simon_cfg_rvalid}
    , simon_cfg_wready{vlSymsp->TOP.simon_cfg_wready}
    , simon_cfg_wstrb{vlSymsp->TOP.simon_cfg_wstrb}
    , simon_cfg_wvalid{vlSymsp->TOP.simon_cfg_wvalid}
    , clk_simon_data{vlSymsp->TOP.clk_simon_data}
    , rst_simon_data{vlSymsp->TOP.rst_simon_data}
    , simon_data_arburst{vlSymsp->TOP.simon_data_arburst}
    , simon_data_arcache{vlSymsp->TOP.simon_data_arcache}
    , simon_data_arlen{vlSymsp->TOP.simon_data_arlen}
    , simon_data_arlock{vlSymsp->TOP.simon_data_arlock}
    , simon_data_arprot{vlSymsp->TOP.simon_data_arprot}
    , simon_data_arqos{vlSymsp->TOP.simon_data_arqos}
    , simon_data_arregion{vlSymsp->TOP.simon_data_arregion}
    , simon_data_arsize{vlSymsp->TOP.simon_data_arsize}
    , simon_data_arready{vlSymsp->TOP.simon_data_arready}
    , simon_data_arvalid{vlSymsp->TOP.simon_data_arvalid}
    , simon_data_awburst{vlSymsp->TOP.simon_data_awburst}
    , simon_data_awcache{vlSymsp->TOP.simon_data_awcache}
    , simon_data_awlen{vlSymsp->TOP.simon_data_awlen}
    , simon_data_awlock{vlSymsp->TOP.simon_data_awlock}
    , simon_data_awprot{vlSymsp->TOP.simon_data_awprot}
    , simon_data_awqos{vlSymsp->TOP.simon_data_awqos}
    , simon_data_awregion{vlSymsp->TOP.simon_data_awregion}
    , simon_data_awsize{vlSymsp->TOP.simon_data_awsize}
    , simon_data_awready{vlSymsp->TOP.simon_data_awready}
    , simon_data_awvalid{vlSymsp->TOP.simon_data_awvalid}
    , simon_data_bready{vlSymsp->TOP.simon_data_bready}
    , simon_data_bresp{vlSymsp->TOP.simon_data_bresp}
    , simon_data_bvalid{vlSymsp->TOP.simon_data_bvalid}
    , simon_data_rlast{vlSymsp->TOP.simon_data_rlast}
    , simon_data_rready{vlSymsp->TOP.simon_data_rready}
    , simon_data_rresp{vlSymsp->TOP.simon_data_rresp}
    , simon_data_rvalid{vlSymsp->TOP.simon_data_rvalid}
    , simon_data_wlast{vlSymsp->TOP.simon_data_wlast}
    , simon_data_wready{vlSymsp->TOP.simon_data_wready}
    , simon_data_wvalid{vlSymsp->TOP.simon_data_wvalid}
    , simon_data_wstrb{vlSymsp->TOP.simon_data_wstrb}
    , simon_cfg_araddr{vlSymsp->TOP.simon_cfg_araddr}
    , simon_cfg_awaddr{vlSymsp->TOP.simon_cfg_awaddr}
    , simon_cfg_rdata{vlSymsp->TOP.simon_cfg_rdata}
    , simon_cfg_wdata{vlSymsp->TOP.simon_cfg_wdata}
    , simon_data_araddr{vlSymsp->TOP.simon_data_araddr}
    , simon_data_awaddr{vlSymsp->TOP.simon_data_awaddr}
    , simon_data_rdata{vlSymsp->TOP.simon_data_rdata}
    , simon_data_wdata{vlSymsp->TOP.simon_data_wdata}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__0__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__1__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__2__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__3__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__4__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__5__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__6__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__7__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__8__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__9__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__10__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__11__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__12__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__13__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__14__KET____DOT__i_egress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_ingress_fifo}
    , __PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo{vlSymsp->TOP.__PVT__simon__DOT__i_simon128_256_encrypt__DOT__i_simon_axi_to_fifo__DOT__generate_fifo__BRA__15__KET____DOT__i_egress_fifo}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsimon::Vsimon(const char* _vcname__)
    : Vsimon(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimon::~Vsimon() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimon___024root___eval_debug_assertions(Vsimon___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimon___024root___eval_static(Vsimon___024root* vlSelf);
void Vsimon___024root___eval_initial(Vsimon___024root* vlSelf);
void Vsimon___024root___eval_settle(Vsimon___024root* vlSelf);
void Vsimon___024root___eval(Vsimon___024root* vlSelf);

void Vsimon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimon___024root___eval_static(&(vlSymsp->TOP));
        Vsimon___024root___eval_initial(&(vlSymsp->TOP));
        Vsimon___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimon___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimon::eventsPending() { return false; }

uint64_t Vsimon::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsimon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsimon___024root___eval_final(Vsimon___024root* vlSelf);

VL_ATTR_COLD void Vsimon::final() {
    Vsimon___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimon::hierName() const { return vlSymsp->name(); }
const char* Vsimon::modelName() const { return "Vsimon"; }
unsigned Vsimon::threads() const { return 1; }
void Vsimon::prepareClone() const { contextp()->prepareClone(); }
void Vsimon::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsimon::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimon___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsimon___024root__trace_init_top(Vsimon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimon___024root*>(voidSelf);
    Vsimon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsimon___024root__trace_decl_types(tracep);
    Vsimon___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsimon___024root__trace_register(Vsimon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsimon::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimon::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimon___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
