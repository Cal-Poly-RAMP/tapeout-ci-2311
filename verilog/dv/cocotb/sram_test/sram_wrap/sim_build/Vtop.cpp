// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , boot_sel_soft_i{vlSymsp->TOP.boot_sel_soft_i}
    , boot_sel_src_i{vlSymsp->TOP.boot_sel_src_i}
    , sram_mux_sel_i{vlSymsp->TOP.sram_mux_sel_i}
    , caravel_wb_rst_i{vlSymsp->TOP.caravel_wb_rst_i}
    , caravel_wbs_stb_i{vlSymsp->TOP.caravel_wbs_stb_i}
    , caravel_wbs_cyc_i{vlSymsp->TOP.caravel_wbs_cyc_i}
    , caravel_wbs_we_i{vlSymsp->TOP.caravel_wbs_we_i}
    , caravel_wbs_sel_i{vlSymsp->TOP.caravel_wbs_sel_i}
    , caravel_wbs_ack_o{vlSymsp->TOP.caravel_wbs_ack_o}
    , caravel_interrupt_o{vlSymsp->TOP.caravel_interrupt_o}
    , caravel_wbs_dat_i{vlSymsp->TOP.caravel_wbs_dat_i}
    , caravel_wbs_adr_i{vlSymsp->TOP.caravel_wbs_adr_i}
    , caravel_wbs_dat_o{vlSymsp->TOP.caravel_wbs_dat_o}
    , la_data_i{vlSymsp->TOP.la_data_i}
    , la_data_o{vlSymsp->TOP.la_data_o}
    , la_oe_no{vlSymsp->TOP.la_oe_no}
    , gpio_i{vlSymsp->TOP.gpio_i}
    , gpio_o{vlSymsp->TOP.gpio_o}
    , gpio_oeb_no{vlSymsp->TOP.gpio_oeb_no}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1}
    , __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1{vlSymsp->TOP.__PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtop::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
