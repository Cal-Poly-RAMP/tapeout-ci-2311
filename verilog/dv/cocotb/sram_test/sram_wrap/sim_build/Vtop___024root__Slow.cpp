// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__BOOTLOADER_ADDR;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__FAILSAFE_ADDR;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__Width;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__sram__DOT__SRAM_BASE_ADDR;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__sram__DOT__SRAM_END_ADDR;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__sram__DOT__SRAM_NUM_BLOCKS;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__sram__DOT__SRAM_LOG_BLOCKS;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__sram__DOT__SRAM_LOG_BLOCK_SIZE;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_memory__DOT__NUM_COL;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_memory__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_memory__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::soc_sram__DOT__i_memory__DOT__DATA_WIDTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first);

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vtop___024root___configure_coverage(this, first);
}

Vtop___024root::~Vtop___024root() {
}

// Coverage
void Vtop___024root::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
