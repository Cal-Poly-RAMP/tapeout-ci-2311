// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__48(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__48\n"); );
    // Body
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((1U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((2U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [1U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((4U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [2U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((8U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [3U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x10U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [4U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x20U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [5U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x40U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [6U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x80U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [7U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x100U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [8U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x200U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [9U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x400U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xaU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x800U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xbU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x1000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xcU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x2000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xdU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x4000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xeU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x8000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xfU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x10000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x10U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x20000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x11U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x40000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x12U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x80000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x13U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x100000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x14U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x200000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x15U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x400000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x16U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x800000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x17U];
    }
    vlSelf->soc_sram__DOT__unused2[0U] = vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o;
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__49(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__49\n"); );
    // Body
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((1U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((2U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [1U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((4U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [2U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((8U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [3U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x10U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [4U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x20U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [5U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x40U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [6U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x80U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [7U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x100U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [8U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x200U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [9U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x400U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xaU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x800U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xbU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x1000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xcU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x2000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xdU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x4000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xeU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x8000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xfU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x10000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x10U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x20000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x11U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x40000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x12U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x80000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x13U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x100000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x14U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x200000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x15U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x400000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x16U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x800000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x17U];
    }
    vlSelf->soc_sram__DOT__dmem_rdata_1 = vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o;
    vlSelf->soc_sram__DOT__dmem_rdata = ((IData)(vlSelf->soc_sram__DOT__is_sram_wrap_prev)
                                          ? vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o
                                          : vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_o);
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_rdata_i 
        = vlSelf->soc_sram__DOT__dmem_rdata;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[0U] 
        = (0xffffU & vlSelf->soc_sram__DOT__dmem_rdata);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[1U] 
        = (vlSelf->soc_sram__DOT__dmem_rdata >> 0x10U);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[0U] 
        = (0xffU & vlSelf->soc_sram__DOT__dmem_rdata);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[1U] 
        = (0xffU & (vlSelf->soc_sram__DOT__dmem_rdata 
                    >> 8U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[2U] 
        = (0xffU & (vlSelf->soc_sram__DOT__dmem_rdata 
                    >> 0x10U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[3U] 
        = (vlSelf->soc_sram__DOT__dmem_rdata >> 0x18U);
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__dmem_rdata_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rdata_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign 
        = (1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                    >> 2U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext = 0U;
    if ((0U == (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign) 
               & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes
                  [vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset] 
                  >> 7U));
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__pre_data 
            = (((- (IData)((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext))) 
                << 8U) | vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes
               [vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset]);
    } else if ((1U == (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign) 
               & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs
                  [(1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset) 
                          >> 1U))] >> 0xfU));
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__pre_data 
            = (((- (IData)((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext))) 
                << 0x10U) | vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs
               [(1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset) 
                       >> 1U))]);
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__pre_data 
            = ((2U == (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))
                ? vlSelf->soc_sram__DOT__dmem_rdata
                : 0U);
    }
}

void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__25(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__27(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__29(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__30(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__33(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__34(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__35(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__36(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__37(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__38(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__39(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__40(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__41(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__42(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__43(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__44(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__45(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__46(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__47(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x65U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x67U))) {
        Vtop___024root___act_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x69U))) {
        Vtop___024root___act_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x6bU))) {
        Vtop___024root___act_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x6dU))) {
        Vtop___024root___act_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x6fU))) {
        Vtop___024root___act_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x71U))) {
        Vtop___024root___act_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x73U))) {
        Vtop___024root___act_comb__TOP__7(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x75U))) {
        Vtop___024root___act_comb__TOP__8(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x77U))) {
        Vtop___024root___act_comb__TOP__9(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x79U))) {
        Vtop___024root___act_comb__TOP__10(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x7bU))) {
        Vtop___024root___act_comb__TOP__11(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x7dU))) {
        Vtop___024root___act_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x7fU))) {
        Vtop___024root___act_comb__TOP__13(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x81U))) {
        Vtop___024root___act_comb__TOP__14(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x83U))) {
        Vtop___024root___act_comb__TOP__15(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x85U))) {
        Vtop___024root___act_comb__TOP__16(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x87U))) {
        Vtop___024root___act_comb__TOP__17(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x89U))) {
        Vtop___024root___act_comb__TOP__18(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x8bU))) {
        Vtop___024root___act_comb__TOP__19(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x8dU))) {
        Vtop___024root___act_comb__TOP__20(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x8fU))) {
        Vtop___024root___act_comb__TOP__21(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x91U))) {
        Vtop___024root___act_comb__TOP__22(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x93U))) {
        Vtop___024root___act_comb__TOP__23(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x63U) | vlSelf->__VactTriggered.at(0x64U))) {
        Vtop___024root___act_comb__TOP__24(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x66U))) {
        Vtop___024root___act_comb__TOP__25(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x68U))) {
        Vtop___024root___act_comb__TOP__26(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x6aU))) {
        Vtop___024root___act_comb__TOP__27(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x6cU))) {
        Vtop___024root___act_comb__TOP__28(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x6eU))) {
        Vtop___024root___act_comb__TOP__29(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x70U))) {
        Vtop___024root___act_comb__TOP__30(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x72U))) {
        Vtop___024root___act_comb__TOP__31(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x74U))) {
        Vtop___024root___act_comb__TOP__32(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x76U))) {
        Vtop___024root___act_comb__TOP__33(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x78U))) {
        Vtop___024root___act_comb__TOP__34(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x7aU))) {
        Vtop___024root___act_comb__TOP__35(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x7cU))) {
        Vtop___024root___act_comb__TOP__36(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x7eU))) {
        Vtop___024root___act_comb__TOP__37(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x80U))) {
        Vtop___024root___act_comb__TOP__38(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x82U))) {
        Vtop___024root___act_comb__TOP__39(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x84U))) {
        Vtop___024root___act_comb__TOP__40(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x86U))) {
        Vtop___024root___act_comb__TOP__41(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x88U))) {
        Vtop___024root___act_comb__TOP__42(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x8aU))) {
        Vtop___024root___act_comb__TOP__43(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x8cU))) {
        Vtop___024root___act_comb__TOP__44(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x8eU))) {
        Vtop___024root___act_comb__TOP__45(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x90U))) {
        Vtop___024root___act_comb__TOP__46(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0x64U) | vlSelf->__VactTriggered.at(0x92U))) {
        Vtop___024root___act_comb__TOP__47(vlSelf);
    }
    if (((((((((((((((((((((((((vlSelf->__VactTriggered.at(0x64U) 
                                | vlSelf->__VactTriggered.at(0x65U)) 
                               | vlSelf->__VactTriggered.at(0x67U)) 
                              | vlSelf->__VactTriggered.at(0x69U)) 
                             | vlSelf->__VactTriggered.at(0x6bU)) 
                            | vlSelf->__VactTriggered.at(0x6dU)) 
                           | vlSelf->__VactTriggered.at(0x6fU)) 
                          | vlSelf->__VactTriggered.at(0x71U)) 
                         | vlSelf->__VactTriggered.at(0x73U)) 
                        | vlSelf->__VactTriggered.at(0x75U)) 
                       | vlSelf->__VactTriggered.at(0x77U)) 
                      | vlSelf->__VactTriggered.at(0x79U)) 
                     | vlSelf->__VactTriggered.at(0x7bU)) 
                    | vlSelf->__VactTriggered.at(0x7dU)) 
                   | vlSelf->__VactTriggered.at(0x7fU)) 
                  | vlSelf->__VactTriggered.at(0x81U)) 
                 | vlSelf->__VactTriggered.at(0x83U)) 
                | vlSelf->__VactTriggered.at(0x85U)) 
               | vlSelf->__VactTriggered.at(0x87U)) 
              | vlSelf->__VactTriggered.at(0x89U)) 
             | vlSelf->__VactTriggered.at(0x8bU)) | vlSelf->__VactTriggered.at(0x8dU)) 
           | vlSelf->__VactTriggered.at(0x8fU)) | vlSelf->__VactTriggered.at(0x91U)) 
         | vlSelf->__VactTriggered.at(0x93U))) {
        Vtop___024root___act_comb__TOP__48(vlSelf);
    }
    if (((((((((((((((((((((((((vlSelf->__VactTriggered.at(0x63U) 
                                | vlSelf->__VactTriggered.at(0x64U)) 
                               | vlSelf->__VactTriggered.at(0x66U)) 
                              | vlSelf->__VactTriggered.at(0x68U)) 
                             | vlSelf->__VactTriggered.at(0x6aU)) 
                            | vlSelf->__VactTriggered.at(0x6cU)) 
                           | vlSelf->__VactTriggered.at(0x6eU)) 
                          | vlSelf->__VactTriggered.at(0x70U)) 
                         | vlSelf->__VactTriggered.at(0x72U)) 
                        | vlSelf->__VactTriggered.at(0x74U)) 
                       | vlSelf->__VactTriggered.at(0x76U)) 
                      | vlSelf->__VactTriggered.at(0x78U)) 
                     | vlSelf->__VactTriggered.at(0x7aU)) 
                    | vlSelf->__VactTriggered.at(0x7cU)) 
                   | vlSelf->__VactTriggered.at(0x7eU)) 
                  | vlSelf->__VactTriggered.at(0x80U)) 
                 | vlSelf->__VactTriggered.at(0x82U)) 
                | vlSelf->__VactTriggered.at(0x84U)) 
               | vlSelf->__VactTriggered.at(0x86U)) 
              | vlSelf->__VactTriggered.at(0x88U)) 
             | vlSelf->__VactTriggered.at(0x8aU)) | vlSelf->__VactTriggered.at(0x8cU)) 
           | vlSelf->__VactTriggered.at(0x8eU)) | vlSelf->__VactTriggered.at(0x90U)) 
         | vlSelf->__VactTriggered.at(0x92U))) {
        Vtop___024root___act_comb__TOP__49(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___timing_commit(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___timing_resume(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<148> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/justfran/carp/clam-soc/tests/sram_wrap/soc_sram.sv", 24, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            Vtop___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/justfran/carp/clam-soc/tests/sram_wrap/soc_sram.sv", 24, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___timing_resume(vlSelf);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/justfran/carp/clam-soc/tests/sram_wrap/soc_sram.sv", 24, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x63U))))) {
        vlSelf->__VtrigSched_h67d39080__0.commit("@(posedge soc_sram.sram.genblk1[0].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x65U))))) {
        vlSelf->__VtrigSched_he9ec4173__0.commit("@(posedge soc_sram.sram.genblk1[0].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x66U))))) {
        vlSelf->__VtrigSched_h253e2db3__0.commit("@(posedge soc_sram.sram.genblk1[1].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x67U))))) {
        vlSelf->__VtrigSched_h97281d72__0.commit("@(posedge soc_sram.sram.genblk1[1].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x68U))))) {
        vlSelf->__VtrigSched_h3463749e__0.commit("@(posedge soc_sram.sram.genblk1[2].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x69U))))) {
        vlSelf->__VtrigSched_h5052b3d5__0.commit("@(posedge soc_sram.sram.genblk1[2].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x6aU))))) {
        vlSelf->__VtrigSched_hddcad66b__0.commit("@(posedge soc_sram.sram.genblk1[3].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x6bU))))) {
        vlSelf->__VtrigSched_h43c15422__0.commit("@(posedge soc_sram.sram.genblk1[3].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x6cU))))) {
        vlSelf->__VtrigSched_hd41dc089__0.commit("@(posedge soc_sram.sram.genblk1[4].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x6dU))))) {
        vlSelf->__VtrigSched_h333aa9a2__0.commit("@(posedge soc_sram.sram.genblk1[4].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x6eU))))) {
        vlSelf->__VtrigSched_h14eb4f87__0.commit("@(posedge soc_sram.sram.genblk1[5].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x6fU))))) {
        vlSelf->__VtrigSched_hca45ca3d__0.commit("@(posedge soc_sram.sram.genblk1[5].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x70U))))) {
        vlSelf->__VtrigSched_h961577d8__0.commit("@(posedge soc_sram.sram.genblk1[6].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x71U))))) {
        vlSelf->__VtrigSched_h2e11fceb__0.commit("@(posedge soc_sram.sram.genblk1[6].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x72U))))) {
        vlSelf->__VtrigSched_h311a0fdd__0.commit("@(posedge soc_sram.sram.genblk1[7].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x73U))))) {
        vlSelf->__VtrigSched_h40bbc52e__0.commit("@(posedge soc_sram.sram.genblk1[7].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x74U))))) {
        vlSelf->__VtrigSched_h75c42fb9__0.commit("@(posedge soc_sram.sram.genblk1[8].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x75U))))) {
        vlSelf->__VtrigSched_hd5e3f254__0.commit("@(posedge soc_sram.sram.genblk1[8].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x76U))))) {
        vlSelf->__VtrigSched_h1afec056__0.commit("@(posedge soc_sram.sram.genblk1[9].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x77U))))) {
        vlSelf->__VtrigSched_he5c16347__0.commit("@(posedge soc_sram.sram.genblk1[9].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x78U))))) {
        vlSelf->__VtrigSched_ha3460daa__0.commit("@(posedge soc_sram.sram.genblk1[10].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x79U))))) {
        vlSelf->__VtrigSched_h02a1e423__0.commit("@(posedge soc_sram.sram.genblk1[10].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x7aU))))) {
        vlSelf->__VtrigSched_h097ce1b6__0.commit("@(posedge soc_sram.sram.genblk1[11].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x7bU))))) {
        vlSelf->__VtrigSched_h1d2e6b6d__0.commit("@(posedge soc_sram.sram.genblk1[11].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x7cU))))) {
        vlSelf->__VtrigSched_h4b79150a__0.commit("@(posedge soc_sram.sram.genblk1[12].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x7dU))))) {
        vlSelf->__VtrigSched_h518d5809__0.commit("@(posedge soc_sram.sram.genblk1[12].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x7eU))))) {
        vlSelf->__VtrigSched_h5d309058__0.commit("@(posedge soc_sram.sram.genblk1[13].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x7fU))))) {
        vlSelf->__VtrigSched_hc22db79f__0.commit("@(posedge soc_sram.sram.genblk1[13].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x80U))))) {
        vlSelf->__VtrigSched_he19d1911__0.commit("@(posedge soc_sram.sram.genblk1[14].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x81U))))) {
        vlSelf->__VtrigSched_hfc479460__0.commit("@(posedge soc_sram.sram.genblk1[14].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x82U))))) {
        vlSelf->__VtrigSched_hf1352a5e__0.commit("@(posedge soc_sram.sram.genblk1[15].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x83U))))) {
        vlSelf->__VtrigSched_h219ec62d__0.commit("@(posedge soc_sram.sram.genblk1[15].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x84U))))) {
        vlSelf->__VtrigSched_h4caebb08__0.commit("@(posedge soc_sram.sram.genblk1[16].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x85U))))) {
        vlSelf->__VtrigSched_h9671842a__0.commit("@(posedge soc_sram.sram.genblk1[16].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x86U))))) {
        vlSelf->__VtrigSched_h18f65c64__0.commit("@(posedge soc_sram.sram.genblk1[17].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x87U))))) {
        vlSelf->__VtrigSched_h2eb7fd9f__0.commit("@(posedge soc_sram.sram.genblk1[17].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x88U))))) {
        vlSelf->__VtrigSched_h7854963a__0.commit("@(posedge soc_sram.sram.genblk1[18].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x89U))))) {
        vlSelf->__VtrigSched_hd3c35029__0.commit("@(posedge soc_sram.sram.genblk1[18].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x8aU))))) {
        vlSelf->__VtrigSched_h0627e790__0.commit("@(posedge soc_sram.sram.genblk1[19].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x8bU))))) {
        vlSelf->__VtrigSched_h6eb1b43b__0.commit("@(posedge soc_sram.sram.genblk1[19].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x8cU))))) {
        vlSelf->__VtrigSched_h5d812ed0__0.commit("@(posedge soc_sram.sram.genblk1[20].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x8dU))))) {
        vlSelf->__VtrigSched_h1f99dd53__0.commit("@(posedge soc_sram.sram.genblk1[20].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x8eU))))) {
        vlSelf->__VtrigSched_h87739dfb__0.commit("@(posedge soc_sram.sram.genblk1[21].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x8fU))))) {
        vlSelf->__VtrigSched_h73c08076__0.commit("@(posedge soc_sram.sram.genblk1[21].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x90U))))) {
        vlSelf->__VtrigSched_h89387e7a__0.commit("@(posedge soc_sram.sram.genblk1[22].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x91U))))) {
        vlSelf->__VtrigSched_h9f2f7633__0.commit("@(posedge soc_sram.sram.genblk1[22].sram1.clk1)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x92U))))) {
        vlSelf->__VtrigSched_h3b2f7714__0.commit("@(posedge soc_sram.sram.genblk1[23].sram1.clk0)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0x93U))))) {
        vlSelf->__VtrigSched_h0f93956f__0.commit("@(posedge soc_sram.sram.genblk1[23].sram1.clk1)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0x63U)) {
        vlSelf->__VtrigSched_h67d39080__0.resume("@(posedge soc_sram.sram.genblk1[0].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x64U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0x65U)) {
        vlSelf->__VtrigSched_he9ec4173__0.resume("@(posedge soc_sram.sram.genblk1[0].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x66U)) {
        vlSelf->__VtrigSched_h253e2db3__0.resume("@(posedge soc_sram.sram.genblk1[1].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x67U)) {
        vlSelf->__VtrigSched_h97281d72__0.resume("@(posedge soc_sram.sram.genblk1[1].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x68U)) {
        vlSelf->__VtrigSched_h3463749e__0.resume("@(posedge soc_sram.sram.genblk1[2].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x69U)) {
        vlSelf->__VtrigSched_h5052b3d5__0.resume("@(posedge soc_sram.sram.genblk1[2].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x6aU)) {
        vlSelf->__VtrigSched_hddcad66b__0.resume("@(posedge soc_sram.sram.genblk1[3].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x6bU)) {
        vlSelf->__VtrigSched_h43c15422__0.resume("@(posedge soc_sram.sram.genblk1[3].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x6cU)) {
        vlSelf->__VtrigSched_hd41dc089__0.resume("@(posedge soc_sram.sram.genblk1[4].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x6dU)) {
        vlSelf->__VtrigSched_h333aa9a2__0.resume("@(posedge soc_sram.sram.genblk1[4].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x6eU)) {
        vlSelf->__VtrigSched_h14eb4f87__0.resume("@(posedge soc_sram.sram.genblk1[5].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x6fU)) {
        vlSelf->__VtrigSched_hca45ca3d__0.resume("@(posedge soc_sram.sram.genblk1[5].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x70U)) {
        vlSelf->__VtrigSched_h961577d8__0.resume("@(posedge soc_sram.sram.genblk1[6].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x71U)) {
        vlSelf->__VtrigSched_h2e11fceb__0.resume("@(posedge soc_sram.sram.genblk1[6].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x72U)) {
        vlSelf->__VtrigSched_h311a0fdd__0.resume("@(posedge soc_sram.sram.genblk1[7].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x73U)) {
        vlSelf->__VtrigSched_h40bbc52e__0.resume("@(posedge soc_sram.sram.genblk1[7].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x74U)) {
        vlSelf->__VtrigSched_h75c42fb9__0.resume("@(posedge soc_sram.sram.genblk1[8].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x75U)) {
        vlSelf->__VtrigSched_hd5e3f254__0.resume("@(posedge soc_sram.sram.genblk1[8].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x76U)) {
        vlSelf->__VtrigSched_h1afec056__0.resume("@(posedge soc_sram.sram.genblk1[9].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x77U)) {
        vlSelf->__VtrigSched_he5c16347__0.resume("@(posedge soc_sram.sram.genblk1[9].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x78U)) {
        vlSelf->__VtrigSched_ha3460daa__0.resume("@(posedge soc_sram.sram.genblk1[10].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x79U)) {
        vlSelf->__VtrigSched_h02a1e423__0.resume("@(posedge soc_sram.sram.genblk1[10].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x7aU)) {
        vlSelf->__VtrigSched_h097ce1b6__0.resume("@(posedge soc_sram.sram.genblk1[11].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x7bU)) {
        vlSelf->__VtrigSched_h1d2e6b6d__0.resume("@(posedge soc_sram.sram.genblk1[11].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x7cU)) {
        vlSelf->__VtrigSched_h4b79150a__0.resume("@(posedge soc_sram.sram.genblk1[12].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x7dU)) {
        vlSelf->__VtrigSched_h518d5809__0.resume("@(posedge soc_sram.sram.genblk1[12].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x7eU)) {
        vlSelf->__VtrigSched_h5d309058__0.resume("@(posedge soc_sram.sram.genblk1[13].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x7fU)) {
        vlSelf->__VtrigSched_hc22db79f__0.resume("@(posedge soc_sram.sram.genblk1[13].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x80U)) {
        vlSelf->__VtrigSched_he19d1911__0.resume("@(posedge soc_sram.sram.genblk1[14].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x81U)) {
        vlSelf->__VtrigSched_hfc479460__0.resume("@(posedge soc_sram.sram.genblk1[14].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x82U)) {
        vlSelf->__VtrigSched_hf1352a5e__0.resume("@(posedge soc_sram.sram.genblk1[15].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x83U)) {
        vlSelf->__VtrigSched_h219ec62d__0.resume("@(posedge soc_sram.sram.genblk1[15].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x84U)) {
        vlSelf->__VtrigSched_h4caebb08__0.resume("@(posedge soc_sram.sram.genblk1[16].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x85U)) {
        vlSelf->__VtrigSched_h9671842a__0.resume("@(posedge soc_sram.sram.genblk1[16].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x86U)) {
        vlSelf->__VtrigSched_h18f65c64__0.resume("@(posedge soc_sram.sram.genblk1[17].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x87U)) {
        vlSelf->__VtrigSched_h2eb7fd9f__0.resume("@(posedge soc_sram.sram.genblk1[17].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x88U)) {
        vlSelf->__VtrigSched_h7854963a__0.resume("@(posedge soc_sram.sram.genblk1[18].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x89U)) {
        vlSelf->__VtrigSched_hd3c35029__0.resume("@(posedge soc_sram.sram.genblk1[18].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x8aU)) {
        vlSelf->__VtrigSched_h0627e790__0.resume("@(posedge soc_sram.sram.genblk1[19].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x8bU)) {
        vlSelf->__VtrigSched_h6eb1b43b__0.resume("@(posedge soc_sram.sram.genblk1[19].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x8cU)) {
        vlSelf->__VtrigSched_h5d812ed0__0.resume("@(posedge soc_sram.sram.genblk1[20].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x8dU)) {
        vlSelf->__VtrigSched_h1f99dd53__0.resume("@(posedge soc_sram.sram.genblk1[20].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x8eU)) {
        vlSelf->__VtrigSched_h87739dfb__0.resume("@(posedge soc_sram.sram.genblk1[21].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x8fU)) {
        vlSelf->__VtrigSched_h73c08076__0.resume("@(posedge soc_sram.sram.genblk1[21].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x90U)) {
        vlSelf->__VtrigSched_h89387e7a__0.resume("@(posedge soc_sram.sram.genblk1[22].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x91U)) {
        vlSelf->__VtrigSched_h9f2f7633__0.resume("@(posedge soc_sram.sram.genblk1[22].sram1.clk1)");
    }
    if (vlSelf->__VactTriggered.at(0x92U)) {
        vlSelf->__VtrigSched_h3b2f7714__0.resume("@(posedge soc_sram.sram.genblk1[23].sram1.clk0)");
    }
    if (vlSelf->__VactTriggered.at(0x93U)) {
        vlSelf->__VtrigSched_h0f93956f__0.resume("@(posedge soc_sram.sram.genblk1[23].sram1.clk1)");
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->boot_sel_soft_i & 0xfeU))) {
        Verilated::overWidthError("boot_sel_soft_i");}
    if (VL_UNLIKELY((vlSelf->boot_sel_src_i & 0xfeU))) {
        Verilated::overWidthError("boot_sel_src_i");}
    if (VL_UNLIKELY((vlSelf->sram_mux_sel_i & 0xfeU))) {
        Verilated::overWidthError("sram_mux_sel_i");}
    if (VL_UNLIKELY((vlSelf->caravel_wb_rst_i & 0xfeU))) {
        Verilated::overWidthError("caravel_wb_rst_i");}
    if (VL_UNLIKELY((vlSelf->caravel_wbs_stb_i & 0xfeU))) {
        Verilated::overWidthError("caravel_wbs_stb_i");}
    if (VL_UNLIKELY((vlSelf->caravel_wbs_cyc_i & 0xfeU))) {
        Verilated::overWidthError("caravel_wbs_cyc_i");}
    if (VL_UNLIKELY((vlSelf->caravel_wbs_we_i & 0xfeU))) {
        Verilated::overWidthError("caravel_wbs_we_i");}
    if (VL_UNLIKELY((vlSelf->caravel_wbs_sel_i & 0xf0U))) {
        Verilated::overWidthError("caravel_wbs_sel_i");}
    if (VL_UNLIKELY((vlSelf->gpio_i & 0ULL))) {
        Verilated::overWidthError("gpio_i");}
}
#endif  // VL_DEBUG
