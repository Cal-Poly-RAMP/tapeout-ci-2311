// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_sky130_sram_2kbyte_1rw1r_32x512_8;


// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&boot_sel_soft_i,0,0);
    VL_IN8(&boot_sel_src_i,0,0);
    VL_IN8(&sram_mux_sel_i,0,0);
    VL_IN8(&caravel_wb_rst_i,0,0);
    VL_IN8(&caravel_wbs_stb_i,0,0);
    VL_IN8(&caravel_wbs_cyc_i,0,0);
    VL_IN8(&caravel_wbs_we_i,0,0);
    VL_IN8(&caravel_wbs_sel_i,3,0);
    VL_OUT8(&caravel_wbs_ack_o,0,0);
    VL_OUT8(&caravel_interrupt_o,2,0);
    VL_IN(&caravel_wbs_dat_i,31,0);
    VL_IN(&caravel_wbs_adr_i,31,0);
    VL_OUT(&caravel_wbs_dat_o,31,0);
    VL_INW(&la_data_i,127,0,4);
    VL_OUTW(&la_data_o,127,0,4);
    VL_INW(&la_oe_no,127,0,4);
    VL_IN64(&gpio_i,37,0);
    VL_OUT64(&gpio_o,37,0);
    VL_OUT64(&gpio_oeb_no,37,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* const __PVT__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
