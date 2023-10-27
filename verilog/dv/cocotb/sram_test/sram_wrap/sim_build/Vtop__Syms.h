// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_sky130_sram_2kbyte_1rw1r_32x512_8.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1;
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[313];

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_soc_sram;
    VerilatedScope __Vscope_soc_sram__i_core;
    VerilatedScope __Vscope_soc_sram__i_core__i_csr;
    VerilatedScope __Vscope_soc_sram__i_core__i_decode_stage;
    VerilatedScope __Vscope_soc_sram__i_core__i_decode_stage__i_decoder;
    VerilatedScope __Vscope_soc_sram__i_core__i_decode_stage__i_immed_gen;
    VerilatedScope __Vscope_soc_sram__i_core__i_dmem_obi_driver;
    VerilatedScope __Vscope_soc_sram__i_core__i_exec_stage;
    VerilatedScope __Vscope_soc_sram__i_core__i_exec_stage__i_alu;
    VerilatedScope __Vscope_soc_sram__i_core__i_exec_stage__i_branch_gen;
    VerilatedScope __Vscope_soc_sram__i_core__i_exec_stage__i_mem_prep;
    VerilatedScope __Vscope_soc_sram__i_core__i_fetch_stage;
    VerilatedScope __Vscope_soc_sram__i_core__i_fetch_stage__i_prog_cntr;
    VerilatedScope __Vscope_soc_sram__i_core__i_fwd_unit;
    VerilatedScope __Vscope_soc_sram__i_core__i_fwd_unit__rs1_fwd_unit;
    VerilatedScope __Vscope_soc_sram__i_core__i_fwd_unit__rs2_fwd_unit;
    VerilatedScope __Vscope_soc_sram__i_core__i_hazard_unit;
    VerilatedScope __Vscope_soc_sram__i_core__i_imem_obi_driver;
    VerilatedScope __Vscope_soc_sram__i_core__i_mem_slice_stage;
    VerilatedScope __Vscope_soc_sram__i_core__i_wb_stage;
    VerilatedScope __Vscope_soc_sram__i_memory;
    VerilatedScope __Vscope_soc_sram__i_reg_file;
    VerilatedScope __Vscope_soc_sram__sram;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__0__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__0__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__10__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__10__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__11__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__11__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__12__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__12__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__13__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__13__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__14__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__14__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__15__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__15__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__16__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__16__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__17__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__17__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__18__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__18__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__19__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__19__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__1__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__1__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__20__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__20__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__21__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__21__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__22__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__22__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__23__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__23__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__2__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__2__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__3__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__3__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__4__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__4__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__5__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__5__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__6__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__6__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__7__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__7__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__8__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__8__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__9__KET__;
    VerilatedScope __Vscope_soc_sram__sram__genblk1__BRA__9__KET____sram1;
    VerilatedScope __Vscope_soc_sram__sram__unnamedblk1;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
