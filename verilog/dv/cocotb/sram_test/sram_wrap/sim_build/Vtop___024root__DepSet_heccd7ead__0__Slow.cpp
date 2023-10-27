// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/justfran/carp/clam-soc/tests/sram_wrap/soc_sram.sv", 24, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk_i)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'act' region trigger index 66 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'act' region trigger index 67 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'act' region trigger index 68 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'act' region trigger index 69 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'act' region trigger index 70 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'act' region trigger index 71 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'act' region trigger index 72 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'act' region trigger index 73 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'act' region trigger index 74 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'act' region trigger index 75 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'act' region trigger index 76 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'act' region trigger index 77 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'act' region trigger index 78 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'act' region trigger index 79 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'act' region trigger index 80 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'act' region trigger index 81 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'act' region trigger index 82 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'act' region trigger index 83 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'act' region trigger index 84 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'act' region trigger index 85 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'act' region trigger index 86 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'act' region trigger index 87 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'act' region trigger index 88 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'act' region trigger index 89 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'act' region trigger index 90 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'act' region trigger index 91 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'act' region trigger index 92 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'act' region trigger index 93 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'act' region trigger index 94 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'act' region trigger index 95 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'act' region trigger index 96 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'act' region trigger index 97 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'act' region trigger index 98 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'act' region trigger index 99 is active: @(posedge soc_sram.sram.genblk1[0].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'act' region trigger index 100 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'act' region trigger index 101 is active: @(posedge soc_sram.sram.genblk1[0].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'act' region trigger index 102 is active: @(posedge soc_sram.sram.genblk1[1].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'act' region trigger index 103 is active: @(posedge soc_sram.sram.genblk1[1].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x68U)) {
        VL_DBG_MSGF("         'act' region trigger index 104 is active: @(posedge soc_sram.sram.genblk1[2].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x69U)) {
        VL_DBG_MSGF("         'act' region trigger index 105 is active: @(posedge soc_sram.sram.genblk1[2].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6aU)) {
        VL_DBG_MSGF("         'act' region trigger index 106 is active: @(posedge soc_sram.sram.genblk1[3].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6bU)) {
        VL_DBG_MSGF("         'act' region trigger index 107 is active: @(posedge soc_sram.sram.genblk1[3].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6cU)) {
        VL_DBG_MSGF("         'act' region trigger index 108 is active: @(posedge soc_sram.sram.genblk1[4].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6dU)) {
        VL_DBG_MSGF("         'act' region trigger index 109 is active: @(posedge soc_sram.sram.genblk1[4].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6eU)) {
        VL_DBG_MSGF("         'act' region trigger index 110 is active: @(posedge soc_sram.sram.genblk1[5].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x6fU)) {
        VL_DBG_MSGF("         'act' region trigger index 111 is active: @(posedge soc_sram.sram.genblk1[5].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x70U)) {
        VL_DBG_MSGF("         'act' region trigger index 112 is active: @(posedge soc_sram.sram.genblk1[6].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x71U)) {
        VL_DBG_MSGF("         'act' region trigger index 113 is active: @(posedge soc_sram.sram.genblk1[6].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x72U)) {
        VL_DBG_MSGF("         'act' region trigger index 114 is active: @(posedge soc_sram.sram.genblk1[7].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x73U)) {
        VL_DBG_MSGF("         'act' region trigger index 115 is active: @(posedge soc_sram.sram.genblk1[7].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x74U)) {
        VL_DBG_MSGF("         'act' region trigger index 116 is active: @(posedge soc_sram.sram.genblk1[8].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x75U)) {
        VL_DBG_MSGF("         'act' region trigger index 117 is active: @(posedge soc_sram.sram.genblk1[8].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x76U)) {
        VL_DBG_MSGF("         'act' region trigger index 118 is active: @(posedge soc_sram.sram.genblk1[9].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x77U)) {
        VL_DBG_MSGF("         'act' region trigger index 119 is active: @(posedge soc_sram.sram.genblk1[9].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x78U)) {
        VL_DBG_MSGF("         'act' region trigger index 120 is active: @(posedge soc_sram.sram.genblk1[10].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x79U)) {
        VL_DBG_MSGF("         'act' region trigger index 121 is active: @(posedge soc_sram.sram.genblk1[10].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7aU)) {
        VL_DBG_MSGF("         'act' region trigger index 122 is active: @(posedge soc_sram.sram.genblk1[11].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7bU)) {
        VL_DBG_MSGF("         'act' region trigger index 123 is active: @(posedge soc_sram.sram.genblk1[11].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7cU)) {
        VL_DBG_MSGF("         'act' region trigger index 124 is active: @(posedge soc_sram.sram.genblk1[12].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7dU)) {
        VL_DBG_MSGF("         'act' region trigger index 125 is active: @(posedge soc_sram.sram.genblk1[12].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7eU)) {
        VL_DBG_MSGF("         'act' region trigger index 126 is active: @(posedge soc_sram.sram.genblk1[13].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x7fU)) {
        VL_DBG_MSGF("         'act' region trigger index 127 is active: @(posedge soc_sram.sram.genblk1[13].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x80U)) {
        VL_DBG_MSGF("         'act' region trigger index 128 is active: @(posedge soc_sram.sram.genblk1[14].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x81U)) {
        VL_DBG_MSGF("         'act' region trigger index 129 is active: @(posedge soc_sram.sram.genblk1[14].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x82U)) {
        VL_DBG_MSGF("         'act' region trigger index 130 is active: @(posedge soc_sram.sram.genblk1[15].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x83U)) {
        VL_DBG_MSGF("         'act' region trigger index 131 is active: @(posedge soc_sram.sram.genblk1[15].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x84U)) {
        VL_DBG_MSGF("         'act' region trigger index 132 is active: @(posedge soc_sram.sram.genblk1[16].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x85U)) {
        VL_DBG_MSGF("         'act' region trigger index 133 is active: @(posedge soc_sram.sram.genblk1[16].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x86U)) {
        VL_DBG_MSGF("         'act' region trigger index 134 is active: @(posedge soc_sram.sram.genblk1[17].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x87U)) {
        VL_DBG_MSGF("         'act' region trigger index 135 is active: @(posedge soc_sram.sram.genblk1[17].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x88U)) {
        VL_DBG_MSGF("         'act' region trigger index 136 is active: @(posedge soc_sram.sram.genblk1[18].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x89U)) {
        VL_DBG_MSGF("         'act' region trigger index 137 is active: @(posedge soc_sram.sram.genblk1[18].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x8aU)) {
        VL_DBG_MSGF("         'act' region trigger index 138 is active: @(posedge soc_sram.sram.genblk1[19].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x8bU)) {
        VL_DBG_MSGF("         'act' region trigger index 139 is active: @(posedge soc_sram.sram.genblk1[19].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x8cU)) {
        VL_DBG_MSGF("         'act' region trigger index 140 is active: @(posedge soc_sram.sram.genblk1[20].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x8dU)) {
        VL_DBG_MSGF("         'act' region trigger index 141 is active: @(posedge soc_sram.sram.genblk1[20].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x8eU)) {
        VL_DBG_MSGF("         'act' region trigger index 142 is active: @(posedge soc_sram.sram.genblk1[21].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x8fU)) {
        VL_DBG_MSGF("         'act' region trigger index 143 is active: @(posedge soc_sram.sram.genblk1[21].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x90U)) {
        VL_DBG_MSGF("         'act' region trigger index 144 is active: @(posedge soc_sram.sram.genblk1[22].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x91U)) {
        VL_DBG_MSGF("         'act' region trigger index 145 is active: @(posedge soc_sram.sram.genblk1[22].sram1.clk1)\n");
    }
    if (vlSelf->__VactTriggered.at(0x92U)) {
        VL_DBG_MSGF("         'act' region trigger index 146 is active: @(posedge soc_sram.sram.genblk1[23].sram1.clk0)\n");
    }
    if (vlSelf->__VactTriggered.at(0x93U)) {
        VL_DBG_MSGF("         'act' region trigger index 147 is active: @(posedge soc_sram.sram.genblk1[23].sram1.clk1)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk_i)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x1fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x21U)) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x23U)) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x24U)) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x25U)) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x26U)) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x27U)) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x28U)) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x29U)) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x2fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x30U)) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x31U)) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x32U)) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x33U)) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x34U)) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @(negedge soc_sram.sram.genblk1[0].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x35U)) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x36U)) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @(negedge soc_sram.sram.genblk1[1].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x37U)) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x38U)) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @(negedge soc_sram.sram.genblk1[2].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x39U)) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @(negedge soc_sram.sram.genblk1[3].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @(negedge soc_sram.sram.genblk1[4].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @(negedge soc_sram.sram.genblk1[5].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x3fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x40U)) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @(negedge soc_sram.sram.genblk1[6].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x41U)) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x42U)) {
        VL_DBG_MSGF("         'nba' region trigger index 66 is active: @(negedge soc_sram.sram.genblk1[7].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x43U)) {
        VL_DBG_MSGF("         'nba' region trigger index 67 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x44U)) {
        VL_DBG_MSGF("         'nba' region trigger index 68 is active: @(negedge soc_sram.sram.genblk1[8].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x45U)) {
        VL_DBG_MSGF("         'nba' region trigger index 69 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x46U)) {
        VL_DBG_MSGF("         'nba' region trigger index 70 is active: @(negedge soc_sram.sram.genblk1[9].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x47U)) {
        VL_DBG_MSGF("         'nba' region trigger index 71 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x48U)) {
        VL_DBG_MSGF("         'nba' region trigger index 72 is active: @(negedge soc_sram.sram.genblk1[10].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x49U)) {
        VL_DBG_MSGF("         'nba' region trigger index 73 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 74 is active: @(negedge soc_sram.sram.genblk1[11].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 75 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 76 is active: @(negedge soc_sram.sram.genblk1[12].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 77 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 78 is active: @(negedge soc_sram.sram.genblk1[13].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x4fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 79 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x50U)) {
        VL_DBG_MSGF("         'nba' region trigger index 80 is active: @(negedge soc_sram.sram.genblk1[14].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x51U)) {
        VL_DBG_MSGF("         'nba' region trigger index 81 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x52U)) {
        VL_DBG_MSGF("         'nba' region trigger index 82 is active: @(negedge soc_sram.sram.genblk1[15].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x53U)) {
        VL_DBG_MSGF("         'nba' region trigger index 83 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x54U)) {
        VL_DBG_MSGF("         'nba' region trigger index 84 is active: @(negedge soc_sram.sram.genblk1[16].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x55U)) {
        VL_DBG_MSGF("         'nba' region trigger index 85 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x56U)) {
        VL_DBG_MSGF("         'nba' region trigger index 86 is active: @(negedge soc_sram.sram.genblk1[17].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x57U)) {
        VL_DBG_MSGF("         'nba' region trigger index 87 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x58U)) {
        VL_DBG_MSGF("         'nba' region trigger index 88 is active: @(negedge soc_sram.sram.genblk1[18].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x59U)) {
        VL_DBG_MSGF("         'nba' region trigger index 89 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 90 is active: @(negedge soc_sram.sram.genblk1[19].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 91 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 92 is active: @(negedge soc_sram.sram.genblk1[20].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 93 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 94 is active: @(negedge soc_sram.sram.genblk1[21].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x5fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 95 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x60U)) {
        VL_DBG_MSGF("         'nba' region trigger index 96 is active: @(negedge soc_sram.sram.genblk1[22].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x61U)) {
        VL_DBG_MSGF("         'nba' region trigger index 97 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk0 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x62U)) {
        VL_DBG_MSGF("         'nba' region trigger index 98 is active: @(negedge soc_sram.sram.genblk1[23].sram1.clk1 or [true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x63U)) {
        VL_DBG_MSGF("         'nba' region trigger index 99 is active: @(posedge soc_sram.sram.genblk1[0].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x64U)) {
        VL_DBG_MSGF("         'nba' region trigger index 100 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x65U)) {
        VL_DBG_MSGF("         'nba' region trigger index 101 is active: @(posedge soc_sram.sram.genblk1[0].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x66U)) {
        VL_DBG_MSGF("         'nba' region trigger index 102 is active: @(posedge soc_sram.sram.genblk1[1].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x67U)) {
        VL_DBG_MSGF("         'nba' region trigger index 103 is active: @(posedge soc_sram.sram.genblk1[1].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x68U)) {
        VL_DBG_MSGF("         'nba' region trigger index 104 is active: @(posedge soc_sram.sram.genblk1[2].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x69U)) {
        VL_DBG_MSGF("         'nba' region trigger index 105 is active: @(posedge soc_sram.sram.genblk1[2].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 106 is active: @(posedge soc_sram.sram.genblk1[3].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 107 is active: @(posedge soc_sram.sram.genblk1[3].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 108 is active: @(posedge soc_sram.sram.genblk1[4].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 109 is active: @(posedge soc_sram.sram.genblk1[4].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 110 is active: @(posedge soc_sram.sram.genblk1[5].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x6fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 111 is active: @(posedge soc_sram.sram.genblk1[5].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x70U)) {
        VL_DBG_MSGF("         'nba' region trigger index 112 is active: @(posedge soc_sram.sram.genblk1[6].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x71U)) {
        VL_DBG_MSGF("         'nba' region trigger index 113 is active: @(posedge soc_sram.sram.genblk1[6].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x72U)) {
        VL_DBG_MSGF("         'nba' region trigger index 114 is active: @(posedge soc_sram.sram.genblk1[7].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x73U)) {
        VL_DBG_MSGF("         'nba' region trigger index 115 is active: @(posedge soc_sram.sram.genblk1[7].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x74U)) {
        VL_DBG_MSGF("         'nba' region trigger index 116 is active: @(posedge soc_sram.sram.genblk1[8].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x75U)) {
        VL_DBG_MSGF("         'nba' region trigger index 117 is active: @(posedge soc_sram.sram.genblk1[8].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x76U)) {
        VL_DBG_MSGF("         'nba' region trigger index 118 is active: @(posedge soc_sram.sram.genblk1[9].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x77U)) {
        VL_DBG_MSGF("         'nba' region trigger index 119 is active: @(posedge soc_sram.sram.genblk1[9].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x78U)) {
        VL_DBG_MSGF("         'nba' region trigger index 120 is active: @(posedge soc_sram.sram.genblk1[10].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x79U)) {
        VL_DBG_MSGF("         'nba' region trigger index 121 is active: @(posedge soc_sram.sram.genblk1[10].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 122 is active: @(posedge soc_sram.sram.genblk1[11].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 123 is active: @(posedge soc_sram.sram.genblk1[11].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 124 is active: @(posedge soc_sram.sram.genblk1[12].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 125 is active: @(posedge soc_sram.sram.genblk1[12].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 126 is active: @(posedge soc_sram.sram.genblk1[13].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x7fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 127 is active: @(posedge soc_sram.sram.genblk1[13].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x80U)) {
        VL_DBG_MSGF("         'nba' region trigger index 128 is active: @(posedge soc_sram.sram.genblk1[14].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x81U)) {
        VL_DBG_MSGF("         'nba' region trigger index 129 is active: @(posedge soc_sram.sram.genblk1[14].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x82U)) {
        VL_DBG_MSGF("         'nba' region trigger index 130 is active: @(posedge soc_sram.sram.genblk1[15].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x83U)) {
        VL_DBG_MSGF("         'nba' region trigger index 131 is active: @(posedge soc_sram.sram.genblk1[15].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x84U)) {
        VL_DBG_MSGF("         'nba' region trigger index 132 is active: @(posedge soc_sram.sram.genblk1[16].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x85U)) {
        VL_DBG_MSGF("         'nba' region trigger index 133 is active: @(posedge soc_sram.sram.genblk1[16].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x86U)) {
        VL_DBG_MSGF("         'nba' region trigger index 134 is active: @(posedge soc_sram.sram.genblk1[17].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x87U)) {
        VL_DBG_MSGF("         'nba' region trigger index 135 is active: @(posedge soc_sram.sram.genblk1[17].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x88U)) {
        VL_DBG_MSGF("         'nba' region trigger index 136 is active: @(posedge soc_sram.sram.genblk1[18].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x89U)) {
        VL_DBG_MSGF("         'nba' region trigger index 137 is active: @(posedge soc_sram.sram.genblk1[18].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x8aU)) {
        VL_DBG_MSGF("         'nba' region trigger index 138 is active: @(posedge soc_sram.sram.genblk1[19].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x8bU)) {
        VL_DBG_MSGF("         'nba' region trigger index 139 is active: @(posedge soc_sram.sram.genblk1[19].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x8cU)) {
        VL_DBG_MSGF("         'nba' region trigger index 140 is active: @(posedge soc_sram.sram.genblk1[20].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x8dU)) {
        VL_DBG_MSGF("         'nba' region trigger index 141 is active: @(posedge soc_sram.sram.genblk1[20].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x8eU)) {
        VL_DBG_MSGF("         'nba' region trigger index 142 is active: @(posedge soc_sram.sram.genblk1[21].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x8fU)) {
        VL_DBG_MSGF("         'nba' region trigger index 143 is active: @(posedge soc_sram.sram.genblk1[21].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x90U)) {
        VL_DBG_MSGF("         'nba' region trigger index 144 is active: @(posedge soc_sram.sram.genblk1[22].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x91U)) {
        VL_DBG_MSGF("         'nba' region trigger index 145 is active: @(posedge soc_sram.sram.genblk1[22].sram1.clk1)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x92U)) {
        VL_DBG_MSGF("         'nba' region trigger index 146 is active: @(posedge soc_sram.sram.genblk1[23].sram1.clk0)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0x93U)) {
        VL_DBG_MSGF("         'nba' region trigger index 147 is active: @(posedge soc_sram.sram.genblk1[23].sram1.clk1)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->boot_sel_soft_i = VL_RAND_RESET_I(1);
    vlSelf->boot_sel_src_i = VL_RAND_RESET_I(1);
    vlSelf->sram_mux_sel_i = VL_RAND_RESET_I(1);
    vlSelf->caravel_wb_rst_i = VL_RAND_RESET_I(1);
    vlSelf->caravel_wbs_stb_i = VL_RAND_RESET_I(1);
    vlSelf->caravel_wbs_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->caravel_wbs_we_i = VL_RAND_RESET_I(1);
    vlSelf->caravel_wbs_sel_i = VL_RAND_RESET_I(4);
    vlSelf->caravel_wbs_dat_i = VL_RAND_RESET_I(32);
    vlSelf->caravel_wbs_adr_i = VL_RAND_RESET_I(32);
    vlSelf->caravel_wbs_ack_o = VL_RAND_RESET_I(1);
    vlSelf->caravel_wbs_dat_o = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->la_data_i);
    VL_RAND_RESET_W(128, vlSelf->la_data_o);
    VL_RAND_RESET_W(128, vlSelf->la_oe_no);
    vlSelf->gpio_i = VL_RAND_RESET_Q(38);
    vlSelf->gpio_o = VL_RAND_RESET_Q(38);
    vlSelf->gpio_oeb_no = VL_RAND_RESET_Q(38);
    vlSelf->caravel_interrupt_o = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__boot_sel_soft_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__boot_sel_src_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_mux_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_wb_rst_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_wbs_stb_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_wbs_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_wbs_we_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_wbs_sel_i = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__caravel_wbs_dat_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__caravel_wbs_adr_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__caravel_wbs_ack_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_wbs_dat_o = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->soc_sram__DOT__la_data_i);
    VL_RAND_RESET_W(128, vlSelf->soc_sram__DOT__la_data_o);
    VL_RAND_RESET_W(128, vlSelf->soc_sram__DOT__la_oe_no);
    vlSelf->soc_sram__DOT__gpio_i = VL_RAND_RESET_Q(38);
    vlSelf->soc_sram__DOT__gpio_o = VL_RAND_RESET_Q(38);
    vlSelf->soc_sram__DOT__gpio_oeb_no = VL_RAND_RESET_Q(38);
    vlSelf->soc_sram__DOT__caravel_interrupt_o = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__dmem_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__dmem_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__dmem_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__dmem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__dmem_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__imem_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__imem_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__imem_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__imem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__imem_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__sram_d_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_d_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_d_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_d_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__sram_i_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_i_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_i_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_i_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_i_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_i_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_i_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_i_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__peripheral_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__peripheral_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__peripheral_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__peripheral_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__peripheral_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__peripheral_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__peripheral_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__peripheral_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__flash_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__flash_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__flash_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__flash_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__flash_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__flash_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__flash_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__flash_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__caravel_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__caravel_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__caravel_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__caravel_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__caravel_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__sram_d_muxed_req = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_muxed_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_muxed_we = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_muxed_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram_d_muxed_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_d_muxed_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_d_muxed_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram_d_muxed_be = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__rf_port1_reg = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__rf_port2_reg = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__rf_wr_reg = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__rf_rs1 = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__rf_rs2 = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__rf_wr_data = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__rf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__timer_intr = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__m_ext_intr = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__p_int_read = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__csr_busy = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__mcause = VL_RAND_RESET_I(31);
    vlSelf->soc_sram__DOT__dmem_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__dmem_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__dmem_rvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__is_sram_wrap = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__is_sram_wrap_prev = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__unused = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->soc_sram__DOT__unused2);
    vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->soc_sram__DOT___unused);
    vlSelf->soc_sram__DOT__i_core__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__timer_intr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__m_ext_intr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__mcause_i = VL_RAND_RESET_I(31);
    vlSelf->soc_sram__DOT__i_core__DOT__p_int_read_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__csr_busy_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__boot_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_req_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_we_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_be_o = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_port1_reg_o = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_port2_reg_o = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_en_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_reg_o = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_data_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_req_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_we_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_be_o = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_state = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(266, vlSelf->soc_sram__DOT__i_core__DOT__decode_state);
    VL_RAND_RESET_W(103, vlSelf->soc_sram__DOT__i_core__DOT__exec_state);
    VL_RAND_RESET_W(135, vlSelf->soc_sram__DOT__i_core__DOT__mem_state);
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__wb_ctrl = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta);
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__decode_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__exec_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__load_use_stall = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__csr_hold = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__imem_stall = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_stall = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__pre_intr_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__csr_out = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__csr_flush = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__boot_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_addr_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_desync_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_taken_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__valid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__fetch_state_o = VL_RAND_RESET_Q(64);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4 = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_saved = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_ctrl_saved = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_saved = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT____Vcellinp__i_prog_cntr__stall_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__boot_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__next_pc_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__reset_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__last_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_raw = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__fetch_state_i = VL_RAND_RESET_Q(64);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__inst_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port1_reg_o = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port2_reg_o = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs1_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs2_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(266, vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__pc_src = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_a_src = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_b_src = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_src = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_sign = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_width = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs1_used = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs2_used = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_used = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_mret = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__s_immed = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__b_immed = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__u_immed = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__j_immed = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__pc_src_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs1_valid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs2_valid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rd_valid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_en_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_write_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_read_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_sign_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_width_o = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_wr_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_mret_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_en = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_unused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7_unused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__i_immed_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__s_immed_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__b_immed_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__u_immed_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__j_immed_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_unused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(266, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__csr_read_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__stage_ctrl_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_sel_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_addr_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(103, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read_ao = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write_ao = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb_ao = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_data_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_illegal = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__last_dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT_____05Funused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__op_i = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__a_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__b_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__op_i = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs1_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs2_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__taken_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__ltu = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_width_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_addr_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_read_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_word_addr_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_data_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_strobe_ao = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_illegal_ao = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_width = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_write_data = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(103, vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__stage_ctrl_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__dmem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(135, vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__pre_data = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__valid_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(135, vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__stage_ctrl_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_en_oa = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_reg_oa = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data_oa = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT___unused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_wr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__addr_i = VL_RAND_RESET_I(12);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mode_sel_i = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_sel_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__timer_intr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__m_ext_intr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__stall_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mret_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pcSource = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause_i = VL_RAND_RESET_I(31);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_hold_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_flush_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__p_int_read_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_busy_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(82, vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_lus = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_lus = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_updated = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_updated = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_used_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__load_use_hazard_ao = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_conflict = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_conflict = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_raw = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_raw = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__data_updated_mem = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT___unused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i = VL_RAND_RESET_Q(40);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_used_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__load_use_hazard_ao = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_conflict = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_conflict = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_raw = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_raw = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__data_updated_mem = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT___unused = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rd_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__wr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__NS = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__outstanding_read = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rd_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__wr_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__NS = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__outstanding_read = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__imem_stall_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__dmem_stall_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch_taken_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_flush_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_mret_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__load_use_stall_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__execute_ctrl_ao = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__memory_ctrl_ao = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__writeback_ctrl_ao = VL_RAND_RESET_I(2);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_hold_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__PS = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS = VL_RAND_RESET_I(3);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__read1_i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__read2_i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_reg_i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_en_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__data1_ao = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__data2_ao = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_sram__DOT__sram__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_req_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_addr_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_we_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_be_i = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_req_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_addr_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_we_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_be_i = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__sram__DOT__illegal_memory_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_sram__DOT__sram__DOT__cs_data = VL_RAND_RESET_I(24);
    vlSelf->soc_sram__DOT__sram__DOT__cs_inst = VL_RAND_RESET_I(24);
    vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev = VL_RAND_RESET_I(24);
    vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev = VL_RAND_RESET_I(24);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_cs_addr = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->soc_sram__DOT__i_memory__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_en_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_strobe_i = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_addr_i = VL_RAND_RESET_I(16);
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_en_i = VL_RAND_RESET_I(1);
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_strobe_i = VL_RAND_RESET_I(4);
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_addr_i = VL_RAND_RESET_I(16);
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_i = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_o = VL_RAND_RESET_I(32);
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->soc_sram__DOT__i_memory__DOT__ram_block[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_sram__DOT__i_memory__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__clk0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__clk1__0 = VL_RAND_RESET_I(1);
}
