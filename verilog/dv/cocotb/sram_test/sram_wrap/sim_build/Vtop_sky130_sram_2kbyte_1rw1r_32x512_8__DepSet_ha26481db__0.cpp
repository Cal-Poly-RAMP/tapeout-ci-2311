// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_sky130_sram_2kbyte_1rw1r_32x512_8.h"

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h67d39080__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[0].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[0].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[0].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_he9ec4173__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[0].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[0].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h5133cd75__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h97df76d1__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h97df76d1__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h5133cd75__0__1(vlSelf, vlSelf->__Vintraval_h97df76d1__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h5133cd75__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h97df76d1__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h5133cd75__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h97df76d1__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h2bb9d2c9__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h260aa857__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h260aa857__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h2bb9d2c9__0__1(vlSelf, vlSelf->__Vintraval_h260aa857__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h2bb9d2c9__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h260aa857__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h2bb9d2c9__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h260aa857__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h253e2db3__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[1].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[1].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[1].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h97281d72__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[1].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[1].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f7558cf__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h0682adc9__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h0682adc9__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f7558cf__0__1(vlSelf, vlSelf->__Vintraval_h0682adc9__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f7558cf__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h0682adc9__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f7558cf__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h0682adc9__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hafa8ac51__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hf1cadef5__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_hf1cadef5__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hafa8ac51__0__1(vlSelf, vlSelf->__Vintraval_hf1cadef5__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hafa8ac51__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hf1cadef5__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hafa8ac51__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_hf1cadef5__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h3463749e__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[2].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[2].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[2].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h5052b3d5__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[2].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[2].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb39378e0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_ha1fb6e8f__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_ha1fb6e8f__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb39378e0__0__1(vlSelf, vlSelf->__Vintraval_ha1fb6e8f__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb39378e0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_ha1fb6e8f__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb39378e0__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_ha1fb6e8f__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_haec36eb7__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8fb425fc__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h8fb425fc__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_haec36eb7__0__1(vlSelf, vlSelf->__Vintraval_h8fb425fc__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_haec36eb7__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8fb425fc__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_haec36eb7__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h8fb425fc__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hddcad66b__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[3].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[3].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[3].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h43c15422__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[3].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[3].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8d169116__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9af0209b__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h9af0209b__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8d169116__0__1(vlSelf, vlSelf->__Vintraval_h9af0209b__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8d169116__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9af0209b__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8d169116__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h9af0209b__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h74014d28__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h60c96831__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h60c96831__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h74014d28__0__1(vlSelf, vlSelf->__Vintraval_h60c96831__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h74014d28__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h60c96831__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h74014d28__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h60c96831__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hd41dc089__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[4].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[4].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[4].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h333aa9a2__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[4].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[4].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0b500fa5__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7bb45102__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h7bb45102__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0b500fa5__0__1(vlSelf, vlSelf->__Vintraval_h7bb45102__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0b500fa5__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7bb45102__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0b500fa5__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h7bb45102__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he3ee1661__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hf16a0150__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_hf16a0150__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he3ee1661__0__1(vlSelf, vlSelf->__Vintraval_hf16a0150__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he3ee1661__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hf16a0150__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he3ee1661__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_hf16a0150__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h14eb4f87__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[5].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[5].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[5].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hca45ca3d__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[5].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[5].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hc0d337d3__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hf72bd6d3__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hf72bd6d3__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hc0d337d3__0__1(vlSelf, vlSelf->__Vintraval_hf72bd6d3__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hc0d337d3__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hf72bd6d3__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hc0d337d3__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hf72bd6d3__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb54aa37d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h37038fee__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h37038fee__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb54aa37d__0__1(vlSelf, vlSelf->__Vintraval_h37038fee__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb54aa37d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h37038fee__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb54aa37d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h37038fee__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h961577d8__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[6].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[6].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[6].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h2e11fceb__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[6].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[6].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h144c2b00__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hecf6bf04__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hecf6bf04__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h144c2b00__0__1(vlSelf, vlSelf->__Vintraval_hecf6bf04__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h144c2b00__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hecf6bf04__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h144c2b00__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hecf6bf04__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h53e3a9b4__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hd2608ba4__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_hd2608ba4__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h53e3a9b4__0__1(vlSelf, vlSelf->__Vintraval_hd2608ba4__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h53e3a9b4__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hd2608ba4__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h53e3a9b4__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_hd2608ba4__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h311a0fdd__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[7].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[7].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[7].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h40bbc52e__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[7].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[7].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f56a252__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8b7f66ec__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h8b7f66ec__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f56a252__0__1(vlSelf, vlSelf->__Vintraval_h8b7f66ec__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f56a252__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8b7f66ec__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7f56a252__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h8b7f66ec__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h3ce6564f__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hcfc3033a__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_hcfc3033a__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h3ce6564f__0__1(vlSelf, vlSelf->__Vintraval_hcfc3033a__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h3ce6564f__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hcfc3033a__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h3ce6564f__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_hcfc3033a__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h75c42fb9__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[8].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[8].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[8].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hd5e3f254__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[8].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[8].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10cc341e__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hcdcaf633__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hcdcaf633__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10cc341e__0__1(vlSelf, vlSelf->__Vintraval_hcdcaf633__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10cc341e__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hcdcaf633__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10cc341e__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hcdcaf633__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he24d9c35__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_ha460ac19__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_ha460ac19__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he24d9c35__0__1(vlSelf, vlSelf->__Vintraval_ha460ac19__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he24d9c35__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_ha460ac19__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_he24d9c35__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_ha460ac19__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h1afec056__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[9].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[9].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[9].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_he5c16347__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[9].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[9].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_heee8ee0d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7d9647c9__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h7d9647c9__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_heee8ee0d__0__1(vlSelf, vlSelf->__Vintraval_h7d9647c9__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_heee8ee0d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7d9647c9__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_heee8ee0d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h7d9647c9__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h678db4ed__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h066a0c68__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h066a0c68__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h678db4ed__0__1(vlSelf, vlSelf->__Vintraval_h066a0c68__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h678db4ed__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h066a0c68__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h678db4ed__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h066a0c68__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_ha3460daa__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[10].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[10].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[10].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h02a1e423__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[10].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[10].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hcccaf264__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h027f9638__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h027f9638__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hcccaf264__0__1(vlSelf, vlSelf->__Vintraval_h027f9638__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hcccaf264__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h027f9638__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hcccaf264__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h027f9638__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0961251b__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h19fef4a4__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h19fef4a4__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0961251b__0__1(vlSelf, vlSelf->__Vintraval_h19fef4a4__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0961251b__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h19fef4a4__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h0961251b__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h19fef4a4__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h097ce1b6__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[11].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[11].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[11].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h1d2e6b6d__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[11].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[11].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8839caf0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hd3aa67c8__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hd3aa67c8__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8839caf0__0__1(vlSelf, vlSelf->__Vintraval_hd3aa67c8__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8839caf0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hd3aa67c8__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h8839caf0__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hd3aa67c8__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf71ded4c__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9af4b4e5__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h9af4b4e5__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf71ded4c__0__1(vlSelf, vlSelf->__Vintraval_h9af4b4e5__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf71ded4c__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9af4b4e5__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf71ded4c__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h9af4b4e5__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h4b79150a__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[12].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[12].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[12].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h518d5809__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[12].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[12].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_ha2fb0636__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h82ef6923__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h82ef6923__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_ha2fb0636__0__1(vlSelf, vlSelf->__Vintraval_h82ef6923__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_ha2fb0636__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h82ef6923__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_ha2fb0636__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h82ef6923__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb766f50c__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_haef30b8e__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_haef30b8e__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb766f50c__0__1(vlSelf, vlSelf->__Vintraval_haef30b8e__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb766f50c__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_haef30b8e__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb766f50c__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_haef30b8e__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h5d309058__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[13].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[13].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[13].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hc22db79f__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[13].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[13].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7ed7fcc7__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h6c6bc0c5__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h6c6bc0c5__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7ed7fcc7__0__1(vlSelf, vlSelf->__Vintraval_h6c6bc0c5__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7ed7fcc7__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h6c6bc0c5__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7ed7fcc7__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h6c6bc0c5__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb0cff2b2__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h507697ab__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h507697ab__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb0cff2b2__0__1(vlSelf, vlSelf->__Vintraval_h507697ab__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb0cff2b2__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h507697ab__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hb0cff2b2__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h507697ab__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_he19d1911__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[14].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[14].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[14].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hfc479460__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[14].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[14].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h6bbf5d75__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hed4fc67c__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hed4fc67c__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h6bbf5d75__0__1(vlSelf, vlSelf->__Vintraval_hed4fc67c__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h6bbf5d75__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hed4fc67c__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h6bbf5d75__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hed4fc67c__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h71e882c0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7851b77c__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h7851b77c__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h71e882c0__0__1(vlSelf, vlSelf->__Vintraval_h7851b77c__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h71e882c0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7851b77c__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h71e882c0__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h7851b77c__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hf1352a5e__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[15].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[15].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[15].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h219ec62d__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[15].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[15].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h88bd9375__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8530b6ab__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h8530b6ab__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h88bd9375__0__1(vlSelf, vlSelf->__Vintraval_h8530b6ab__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h88bd9375__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8530b6ab__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h88bd9375__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h8530b6ab__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h78029cfb__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7814b161__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h7814b161__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h78029cfb__0__1(vlSelf, vlSelf->__Vintraval_h7814b161__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h78029cfb__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h7814b161__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h78029cfb__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h7814b161__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h4caebb08__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[16].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[16].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[16].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h9671842a__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[16].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[16].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hca5f10be__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h97300fb8__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h97300fb8__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hca5f10be__0__1(vlSelf, vlSelf->__Vintraval_h97300fb8__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hca5f10be__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h97300fb8__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hca5f10be__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h97300fb8__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd7c7fc97__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9bb29807__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h9bb29807__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd7c7fc97__0__1(vlSelf, vlSelf->__Vintraval_h9bb29807__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd7c7fc97__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9bb29807__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd7c7fc97__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h9bb29807__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h18f65c64__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[17].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[17].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[17].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h2eb7fd9f__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[17].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[17].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h351c84d0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hd7896293__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hd7896293__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h351c84d0__0__1(vlSelf, vlSelf->__Vintraval_hd7896293__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h351c84d0__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hd7896293__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h351c84d0__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hd7896293__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h715fd50b__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h233c8507__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h233c8507__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h715fd50b__0__1(vlSelf, vlSelf->__Vintraval_h233c8507__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h715fd50b__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h233c8507__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h715fd50b__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h233c8507__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h7854963a__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[18].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[18].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[18].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_hd3c35029__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[18].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[18].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10647ecd__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h5330073b__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h5330073b__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10647ecd__0__1(vlSelf, vlSelf->__Vintraval_h5330073b__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10647ecd__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h5330073b__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h10647ecd__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h5330073b__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h52b444eb__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h32473e6d__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h32473e6d__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h52b444eb__0__1(vlSelf, vlSelf->__Vintraval_h32473e6d__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h52b444eb__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h32473e6d__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h52b444eb__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h32473e6d__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h0627e790__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[19].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[19].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[19].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h6eb1b43b__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[19].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[19].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hced6d005__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hfde55990__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hfde55990__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hced6d005__0__1(vlSelf, vlSelf->__Vintraval_hfde55990__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hced6d005__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hfde55990__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hced6d005__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hfde55990__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd8b65f70__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9a2bea47__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h9a2bea47__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd8b65f70__0__1(vlSelf, vlSelf->__Vintraval_h9a2bea47__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd8b65f70__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h9a2bea47__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hd8b65f70__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h9a2bea47__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h5d812ed0__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[20].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[20].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[20].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h1f99dd53__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[20].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[20].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h840815ad__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h56f7f781__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h56f7f781__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h840815ad__0__1(vlSelf, vlSelf->__Vintraval_h56f7f781__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h840815ad__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h56f7f781__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h840815ad__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h56f7f781__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h811cf67d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h08f4a325__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h08f4a325__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h811cf67d__0__1(vlSelf, vlSelf->__Vintraval_h08f4a325__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h811cf67d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h08f4a325__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h811cf67d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h08f4a325__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h87739dfb__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[21].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[21].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[21].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h73c08076__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[21].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[21].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf78cfd0e__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h795c8948__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h795c8948__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf78cfd0e__0__1(vlSelf, vlSelf->__Vintraval_h795c8948__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf78cfd0e__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h795c8948__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_hf78cfd0e__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h795c8948__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h988e584b__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8ac17918__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h8ac17918__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h988e584b__0__1(vlSelf, vlSelf->__Vintraval_h8ac17918__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h988e584b__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h8ac17918__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h988e584b__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h8ac17918__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h89387e7a__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[22].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[22].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[22].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h9f2f7633__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[22].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[22].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h15ed751d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hca08358d__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_hca08358d__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h15ed751d__0__1(vlSelf, vlSelf->__Vintraval_hca08358d__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h15ed751d__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_hca08358d__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h15ed751d__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_hca08358d__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h51303cfe__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h79057467__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h79057467__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h51303cfe__0__1(vlSelf, vlSelf->__Vintraval_h79057467__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h51303cfe__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h79057467__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h51303cfe__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h79057467__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h3b2f7714__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[23].sram1.clk0)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                50);
        vlSelf->csb0_reg = vlSelf->csb0;
        vlSelf->web0_reg = vlSelf->web0;
        vlSelf->wmask0_reg = vlSelf->wmask0;
        vlSelf->addr0_reg = vlSelf->addr0;
        vlSelf->din0_reg = vlSelf->din0;
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                57);
        vlSelf->dout0 = 0U;
        if (VL_UNLIKELY(((~ (IData)(vlSelf->csb0_reg)) 
                         & (IData)(vlSelf->web0_reg)))) {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[23].sram1 addr0=%b dout0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->mem[vlSelf->addr0_reg]);
            vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->csb0_reg)) 
                               & (~ (IData)(vlSelf->web0_reg)))))) {
            VL_WRITEF("%20# Writing %Nsoc_sram.sram.genblk1[23].sram1 addr0=%b din0=%b wmask0=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr0_reg),
                      32,vlSelf->din0_reg,4,(IData)(vlSelf->wmask0_reg));
            vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___eval_initial__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__1\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h0f93956f__0.trigger(
                                                                "@(posedge soc_sram.sram.genblk1[23].sram1.clk1)", 
                                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                                69);
        vlSelf->csb1_reg = vlSelf->csb1;
        vlSelf->addr1_reg = vlSelf->addr1;
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->csb0)) 
                           & (~ (IData)(vlSelf->web0))) 
                          & (~ (IData)(vlSelf->csb1))) 
                         & ((IData)(vlSelf->addr0) 
                            == (IData)(vlSelf->addr1))))) {
            vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
            VL_WRITEF("%20# WARNING: Writing and reading addr0=%b and addr1=%b simultaneously!\n",
                      64,VL_TIME_UNITED_Q(1000),9,(IData)(vlSelf->addr0),
                      9,vlSelf->addr1);
        } else {
            vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                                75);
        vlSelf->dout1 = 0U;
        if (VL_LIKELY(vlSelf->csb1_reg)) {
            vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_WRITEF("%20# Reading %Nsoc_sram.sram.genblk1[23].sram1 addr1=%b dout1=%b\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name(),
                      9,(IData)(vlSelf->addr1_reg),
                      32,vlSelf->mem[vlSelf->addr1_reg]);
            vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
    }
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h9d5ecfa9__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h56c0d056__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0\n"); );
    // Body
    vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
    if ((1U & ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 2U)))) {
            vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 1U)))) {
            vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->wmask0_reg)))) {
            vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffff00U 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xffU 
                                                 & vlSelf->din0_reg));
        }
        if ((2U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffff00ffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff00U 
                                                 & vlSelf->din0_reg));
        }
        if ((4U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xff00ffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff0000U 
                                                 & vlSelf->din0_reg));
        }
        if ((8U & (IData)(vlSelf->wmask0_reg))) {
            vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
            vlSelf->mem[vlSelf->addr0_reg] = ((0xffffffU 
                                               & vlSelf->mem
                                               [vlSelf->addr0_reg]) 
                                              | (0xff000000U 
                                                 & vlSelf->din0_reg));
        }
        if ((1U & (~ ((IData)(vlSelf->wmask0_reg) >> 3U)))) {
            vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->csb0_reg)) & (~ (IData)(vlSelf->web0_reg)))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
    }
    if (((~ (IData)(vlSelf->csb0_reg)) & (IData)(vlSelf->web0_reg))) {
        vlSelf->__Vintraval_h56c0d056__0 = vlSelf->mem
            [vlSelf->addr0_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h9d5ecfa9__0__1(vlSelf, vlSelf->__Vintraval_h56c0d056__0);
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h9d5ecfa9__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h56c0d056__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h9d5ecfa9__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            103);
    vlSelf->__Vdlyvval__dout0__v0 = __Vintraval_h56c0d056__0;
    vlSelf->__Vdlyvset__dout0__v0 = 1U;
}

VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7e5f4734__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h2d3c2bb8__0);

VL_INLINE_OPT void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__1\n"); );
    // Body
    if (vlSelf->csb1_reg) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vintraval_h2d3c2bb8__0 = vlSelf->mem
            [vlSelf->addr1_reg];
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7e5f4734__0__1(vlSelf, vlSelf->__Vintraval_h2d3c2bb8__0);
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7e5f4734__0__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf, IData/*31:0*/ __Vintraval_h2d3c2bb8__0) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_sky130_sram_2kbyte_1rw1r_32x512_8____Vfork_h7e5f4734__0__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xbb8ULL, 
                                            "/home/justfran/carp/clam-soc/sky130_sram_macros/sky130_sram_2kbyte_1rw1r_32x512_8/sky130_sram_2kbyte_1rw1r_32x512_8.v", 
                                            111);
    vlSelf->__Vdlyvval__dout1__v0 = __Vintraval_h2d3c2bb8__0;
    vlSelf->__Vdlyvset__dout1__v0 = 1U;
}
