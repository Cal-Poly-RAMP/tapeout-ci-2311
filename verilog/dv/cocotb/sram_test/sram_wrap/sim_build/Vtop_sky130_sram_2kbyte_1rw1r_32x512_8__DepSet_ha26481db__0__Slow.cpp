// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_sky130_sram_2kbyte_1rw1r_32x512_8.h"

VL_ATTR_COLD void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___configure_coverage(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 58, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 58, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 60, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "60-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 60, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 50, 3, "", "v_line/sky130_sram_2kbyte_1rw1r_32x512_8", "block", "50-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 73, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 73, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 76, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 76, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 69, 3, "", "v_line/sky130_sram_2kbyte_1rw1r_32x512_8", "block", "69-72,75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 87, 9, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 87, 10, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 89, 9, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 89, 10, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 91, 9, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 91, 10, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 93, 9, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 93, 10, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 86, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 86, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 84, 3, "", "v_line/sky130_sram_2kbyte_1rw1r_32x512_8", "block", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 102, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "102-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 102, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 100, 3, "", "v_line/sky130_sram_2kbyte_1rw1r_32x512_8", "block", "100-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 110, 5, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "if", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 110, 6, "", "v_branch/sky130_sram_2kbyte_1rw1r_32x512_8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 108, 3, "", "v_line/sky130_sram_2kbyte_1rw1r_32x512_8", "block", "108-109");
}
