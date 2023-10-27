// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_unused = 0U;
    vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7_unused = 0U;
    vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_unused = 0U;
    vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state = 0U;
    vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_ha64ac484__0;
    // Body
    vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_gnt_o = 1U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_gnt_o = 1U;
    vlSelf->soc_sram__DOT__sram__DOT__illegal_memory_o = 0U;
    vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__sram__DOT__cs_inst = 0U;
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0xbU;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0xcU;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0xdU;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0xeU;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0xfU;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x11U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x12U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x13U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x14U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x15U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x16U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x17U;
    vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i = 0x18U;
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr1 = 0U;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr1 = 0U;
    vlSelf->soc_sram__DOT__imem_gnt = 1U;
    vlSelf->soc_sram__DOT__imem_gnt = 1U;
    vlSelf->soc_sram__DOT__dmem_rvalid = 1U;
    vlSelf->soc_sram__DOT__imem_rvalid = 1U;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_we_o = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_be_o = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_wdata_o = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT_____05Funused = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT___unused = 0U;
    __Vtemp_ha64ac484__0[0U] = 0x2e6d656dU;
    __Vtemp_ha64ac484__0[1U] = 0x6d6f7279U;
    __Vtemp_ha64ac484__0[2U] = 0x705f6d65U;
    __Vtemp_ha64ac484__0[3U] = 0x636172U;
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_ha64ac484__0)
                 ,  &(vlSelf->soc_sram__DOT__i_memory__DOT__ram_block)
                 , 0U, 0xffffU);
    vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__i_core__DOT__boot_sel_i = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__reset_addr = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rd_i = 1U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__wr_i = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_req_i = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_addr_i = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_we_i = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_be_i = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_wdata_i = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_cs_addr = 0U;
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_en_i = 1U;
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_strobe_i = 0U;
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_i = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0;
    soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0 = 0;
    // Body
    if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                  >> 5U)))) {
        if ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
                }
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
                }
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                  >> 8U)))) {
        if ((0x80U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
            vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                      >> 7U)))) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 6U)))) {
                vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x40U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0U != (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                      >> 0x16U)))) {
        if ((1U != (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                          >> 0x16U)))) {
            if ((2U != (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                              >> 0x16U)))) {
                vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                              >> 0x16U)))) {
                vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                          >> 0x16U)))) {
            vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x300U != (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                              >> 8U)))) {
        if ((0x304U != (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 8U)))) {
            if ((0x305U != (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                      >> 8U)))) {
                if ((0x341U != (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                          >> 8U)))) {
                    if ((0x342U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                              >> 8U)))) {
                        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x342U != (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                              >> 8U)))) {
                        if ((0xf14U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                                  >> 8U)))) {
                            vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0xf14U != (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                                  >> 8U)))) {
                            vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x341U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                          >> 8U)))) {
                    vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x305U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                      >> 8U)))) {
                vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x304U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 8U)))) {
            vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x300U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                              >> 8U)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_data_o 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mstatus;
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_data_o 
            = ((0x304U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                     >> 8U))) ? vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mie
                : ((0x305U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                         >> 8U))) ? vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mtvec
                    : ((0x341U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                             >> 8U)))
                        ? vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mepc
                        : ((0x342U == (0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                                 >> 8U)))
                            ? vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause
                            : 0U))));
    }
    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0xaU)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0xaU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 9U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 9U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 8U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 8U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0xdU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 7U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 2U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0xdU)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 7U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0xbU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 5U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0xeU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0xbU)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 5U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 3U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x17U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0xcU)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 6U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0xeU)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0xcU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 6U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 3U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0xfU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0xfU)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 4U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 4U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x10U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x10U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x11U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x11U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x12U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x12U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x13U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x13U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x14U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x14U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x15U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x15U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x16U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev 
                  >> 0x16U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev 
                  >> 0x17U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (3U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state) 
                      >> 3U)))) {
        if ((1U & (~ (IData)(((0x10U == (0x18U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))) 
                              & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                 >> 0x14U)))))) {
            vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        }
        if ((IData)(((0x10U == (0x18U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))) 
                     & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                        >> 0x14U)))) {
            vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->soc_sram__DOT__boot_sel_soft_i = vlSelf->boot_sel_soft_i;
    vlSelf->soc_sram__DOT__boot_sel_src_i = vlSelf->boot_sel_src_i;
    vlSelf->soc_sram__DOT__sram_mux_sel_i = vlSelf->sram_mux_sel_i;
    vlSelf->soc_sram__DOT__caravel_wb_rst_i = vlSelf->caravel_wb_rst_i;
    vlSelf->soc_sram__DOT__caravel_wbs_stb_i = vlSelf->caravel_wbs_stb_i;
    vlSelf->soc_sram__DOT__caravel_wbs_cyc_i = vlSelf->caravel_wbs_cyc_i;
    vlSelf->soc_sram__DOT__caravel_wbs_we_i = vlSelf->caravel_wbs_we_i;
    vlSelf->soc_sram__DOT__caravel_wbs_sel_i = vlSelf->caravel_wbs_sel_i;
    vlSelf->soc_sram__DOT__caravel_wbs_dat_i = vlSelf->caravel_wbs_dat_i;
    vlSelf->soc_sram__DOT__caravel_wbs_adr_i = vlSelf->caravel_wbs_adr_i;
    vlSelf->soc_sram__DOT__la_data_i[0U] = vlSelf->la_data_i[0U];
    vlSelf->soc_sram__DOT__la_data_i[1U] = vlSelf->la_data_i[1U];
    vlSelf->soc_sram__DOT__la_data_i[2U] = vlSelf->la_data_i[2U];
    vlSelf->soc_sram__DOT__la_data_i[3U] = vlSelf->la_data_i[3U];
    vlSelf->soc_sram__DOT__la_oe_no[0U] = vlSelf->la_oe_no[0U];
    vlSelf->soc_sram__DOT__la_oe_no[1U] = vlSelf->la_oe_no[1U];
    vlSelf->soc_sram__DOT__la_oe_no[2U] = vlSelf->la_oe_no[2U];
    vlSelf->soc_sram__DOT__la_oe_no[3U] = vlSelf->la_oe_no[3U];
    vlSelf->soc_sram__DOT__gpio_i = vlSelf->gpio_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__op_i 
        = (0xfU & (((0U == 2U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[
                                       (((IData)(3U) 
                                         + (IData)(0x102U)) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (IData)(2U)))) 
                   | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                      >> 2U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__op_i 
        = (7U & (((0U == 6U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[
                                     (((IData)(2U) 
                                       + (IData)(0x106U)) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - (IData)(6U)))) 
                 | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                    >> 6U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_width_i 
        = (3U & (((0U == 0x16U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[
                                        (((IData)(1U) 
                                          + (IData)(0x16U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(0x16U)))) 
                 | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                    >> 0x16U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_wr_i 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                 >> 0x15U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__addr_i 
        = (0xfffU & (((0U == 8U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[
                                         (((IData)(0xbU) 
                                           + (IData)(8U)) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (IData)(8U)))) 
                     | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                        >> 8U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mode_sel_i 
        = (3U & (((0U == 6U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[
                                     (((IData)(1U) 
                                       + (IData)(6U)) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - (IData)(6U)))) 
                 | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                    >> 6U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_i 
        = (0x1fU & (((0U == 1U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[
                                        (((IData)(4U) 
                                          + (IData)(1U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(1U)))) 
                    | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                       >> 1U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_sel_i 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                 >> 0U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mret_i 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                 >> 0x14U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_i 
        = (0x1fU & (((0U == 0xcU) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[
                                          (((IData)(4U) 
                                            + (IData)(0x4cU)) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (IData)(0xcU)))) 
                    | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                       >> 0xcU)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_i 
        = (((0U == 0xcU) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[
                                 (((IData)(0x1fU) + (IData)(0x2cU)) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (IData)(0xcU)))) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
              >> 0xcU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_used_i 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                 >> 0x11U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_i 
        = (0x1fU & (((0U == 6U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[
                                        (((IData)(4U) 
                                          + (IData)(0x26U)) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (IData)(6U)))) 
                    | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                       >> 6U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_i 
        = (((0U == 6U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[
                               (((IData)(0x1fU) + (IData)(6U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(6U)))) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U] 
              >> 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_used_i 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                 >> 0xbU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_mret_i 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                 >> 0x14U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb1 
        = (1U & (~ vlSelf->soc_sram__DOT__sram__DOT__cs_inst));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 1U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 2U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 3U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 4U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 5U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 6U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 7U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 8U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 9U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0xaU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0xbU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0xcU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0xdU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0xeU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0xfU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x10U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x11U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x12U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x13U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x14U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x15U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x16U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb1 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_inst 
                    >> 0x17U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.clk1 
        = vlSelf->clk_i;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.clk0 
        = vlSelf->clk_i;
    vlSelf->caravel_wbs_ack_o = vlSelf->soc_sram__DOT__caravel_wbs_ack_o;
    vlSelf->caravel_wbs_dat_o = vlSelf->soc_sram__DOT__caravel_wbs_dat_o;
    vlSelf->la_data_o[0U] = vlSelf->soc_sram__DOT__la_data_o[0U];
    vlSelf->la_data_o[1U] = vlSelf->soc_sram__DOT__la_data_o[1U];
    vlSelf->la_data_o[2U] = vlSelf->soc_sram__DOT__la_data_o[2U];
    vlSelf->la_data_o[3U] = vlSelf->soc_sram__DOT__la_data_o[3U];
    vlSelf->gpio_o = vlSelf->soc_sram__DOT__gpio_o;
    vlSelf->gpio_oeb_no = vlSelf->soc_sram__DOT__gpio_oeb_no;
    vlSelf->caravel_interrupt_o = vlSelf->soc_sram__DOT__caravel_interrupt_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_width 
        = (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                 >> 0x16U));
    vlSelf->soc_sram__DOT__dmem_rdata_2 = vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_o;
    vlSelf->soc_sram__DOT__imem_we = vlSelf->soc_sram__DOT__i_core__DOT__imem_we_o;
    vlSelf->soc_sram__DOT__imem_be = vlSelf->soc_sram__DOT__i_core__DOT__imem_be_o;
    vlSelf->soc_sram__DOT__imem_wdata = vlSelf->soc_sram__DOT__i_core__DOT__imem_wdata_o;
    vlSelf->soc_sram__DOT__dmem_rvalid_1 = vlSelf->soc_sram__DOT__sram__DOT__sram_d_rvalid_o;
    vlSelf->soc_sram__DOT__unused = ((0xfeU & (IData)(vlSelf->soc_sram__DOT__unused)) 
                                     | (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_i_gnt_o));
    vlSelf->soc_sram__DOT__unused = ((0xfbU & (IData)(vlSelf->soc_sram__DOT__unused)) 
                                     | ((IData)(vlSelf->soc_sram__DOT__sram__DOT__illegal_memory_o) 
                                        << 2U));
    vlSelf->soc_sram__DOT__unused = ((0xbfU & (IData)(vlSelf->soc_sram__DOT__unused)) 
                                     | ((IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_i_rvalid_o) 
                                        << 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__timer_intr_i 
        = vlSelf->soc_sram__DOT__timer_intr;
    vlSelf->soc_sram__DOT__i_core__DOT__m_ext_intr_i 
        = vlSelf->soc_sram__DOT__m_ext_intr;
    vlSelf->soc_sram__DOT__i_core__DOT__mcause_i = vlSelf->soc_sram__DOT__mcause;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_gnt_i 
        = vlSelf->soc_sram__DOT__imem_gnt;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_rvalid_i 
        = vlSelf->soc_sram__DOT__imem_rvalid;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_rvalid_i 
        = vlSelf->soc_sram__DOT__dmem_rvalid;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__boot_sel_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__boot_sel_i;
    vlSelf->soc_sram__DOT__i_core__DOT__decode_valid 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_o;
    vlSelf->soc_sram__DOT__i_core__DOT__mem_valid = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_o;
    vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U];
    vlSelf->soc_sram__DOT__p_int_read = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__p_int_read_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed 
        = VL_EXTENDS_II(32,12, (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                >> 0x14U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__b_immed 
        = VL_EXTENDS_II(32,13, ((0x1000U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                            >> 0x13U)) 
                                | ((0x800U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                              << 4U)) 
                                   | ((0x7e0U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                                  >> 7U))))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__u_immed 
        = (0xfffff000U & vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__j_immed 
        = VL_EXTENDS_II(32,21, ((0x100000U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                              >> 0xbU)) 
                                | ((0xff000U & vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o) 
                                   | ((0x800U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                                 >> 9U)) 
                                      | (0x7feU & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                                   >> 0x14U))))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_sign 
        = (1U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                 >> 0xeU));
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_valid 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__valid_o;
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_state 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__fetch_state_o;
    vlSelf->soc_sram__DOT__i_core__DOT__exec_valid 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_o;
    vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_busy_o 
        = (0U != (3U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state) 
                        >> 3U)));
    vlSelf->soc_sram__DOT__dmem_gnt = vlSelf->soc_sram__DOT__sram__DOT__sram_d_gnt_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_addr 
        = (0x1fU & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                    >> 7U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__outstanding_read 
        = ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf)) 
           & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf));
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS) {
        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS)))) {
            vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS) {
            vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o 
                = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf));
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o = 0U;
        }
        vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o 
            = (1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS) 
                     & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf))));
        vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__NS 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS) 
               & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf) 
                     & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf)))));
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o 
            = vlSelf->rst_ni;
        vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o 
            = (1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf)));
        vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__NS 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__outstanding_read;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset 
        = (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                 >> 7U));
    vlSelf->soc_sram__DOT__imem_rdata = vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr = 0U;
    vlSelf->soc_sram__DOT__rf_port1_reg = (0x1fU & 
                                           (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                            >> 0xfU));
    vlSelf->soc_sram__DOT__rf_port2_reg = (0x1fU & 
                                           (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                                            >> 0x14U));
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[1U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[2U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[3U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[4U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[5U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[6U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[7U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[8U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[9U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0xaU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0xbU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0xcU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0xdU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0xeU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0xfU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x10U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x11U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x12U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x13U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x14U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x15U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x16U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0x17U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.dout1;
    vlSelf->soc_sram__DOT__rst_ni = vlSelf->rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_width 
        = (3U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                 >> 0xcU));
    vlSelf->soc_sram__DOT__clk_i = vlSelf->clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_flush_o = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel = 0U;
    if ((1U == (3U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state) 
                      >> 3U)))) {
        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state)))) {
            vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))) {
            vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr 
                = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mtvec;
            vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel = 1U;
        }
        if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))) {
            vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_flush_o = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state) 
                      >> 2U)))) {
            vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
    } else if ((IData)(((0x10U == (0x18U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))) 
                        & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                           >> 0x14U)))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mepc;
        vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel = 1U;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7 
        = (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
           >> 0x19U);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3 
        = (7U & (vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o 
                 >> 0xcU));
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[1U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[2U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[3U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[4U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[5U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[6U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[7U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[8U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[9U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0xaU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0xbU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0xcU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0xdU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0xeU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0xfU] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x10U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x11U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x12U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x13U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x14U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x15U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x16U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0x17U] 
        = vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.dout0;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode 
        = (0x7fU & vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o);
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[3U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[4U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[5U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[6U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[7U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
        = ((0xffffffffULL & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa) 
           | ((QData)((IData)(((0x80U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                         << 1U)) | 
                               ((0x40U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                          << 3U)) | 
                                (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_o) 
                                  << 5U) | (0x1fU & 
                                            vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U])))))) 
              << 0x20U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT___unused 
        = (1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                 >> 3U));
    vlSelf->soc_sram__DOT__rf_wr_reg = (0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U]);
    vlSelf->soc_sram__DOT__i_core__DOT__exec_state[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__exec_state[3U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[3U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_state[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_state[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[3U];
    vlSelf->soc_sram__DOT__i_core__DOT__mem_state[4U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[4U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__timer_intr_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__timer_intr_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__m_ext_intr_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__m_ext_intr_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__mcause_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_gnt_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_rvalid_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rvalid_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__boot_sel_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__boot_sel_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_valid;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__valid_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_valid;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__p_int_read_o 
        = vlSelf->soc_sram__DOT__p_int_read;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__i_immed_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__b_immed_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__b_immed;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__u_immed_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__u_immed;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__j_immed_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__j_immed;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_sign_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_sign;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__fetch_valid;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__fetch_state_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__fetch_state;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_valid;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U];
    vlSelf->soc_sram__DOT__csr_busy = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_busy_o;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_gnt_i 
        = vlSelf->soc_sram__DOT__dmem_gnt;
    vlSelf->soc_sram__DOT__imem_req = vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o;
    vlSelf->soc_sram__DOT__i_core__DOT__csr_out = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_data_o;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_rdata_i 
        = vlSelf->soc_sram__DOT__imem_rdata;
    vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__read1_i 
        = vlSelf->soc_sram__DOT__rf_port1_reg;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_port1_reg_o 
        = vlSelf->soc_sram__DOT__rf_port1_reg;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port1_reg_o 
        = vlSelf->soc_sram__DOT__rf_port1_reg;
    vlSelf->soc_sram__DOT__rf_rs1 = ((0U == (IData)(vlSelf->soc_sram__DOT__rf_port1_reg))
                                      ? 0U : vlSelf->soc_sram__DOT__i_reg_file__DOT__RF
                                     [vlSelf->soc_sram__DOT__rf_port1_reg]);
    vlSelf->soc_sram__DOT__i_reg_file__DOT__read2_i 
        = vlSelf->soc_sram__DOT__rf_port2_reg;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_port2_reg_o 
        = vlSelf->soc_sram__DOT__rf_port2_reg;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port2_reg_o 
        = vlSelf->soc_sram__DOT__rf_port2_reg;
    vlSelf->soc_sram__DOT__rf_rs2 = ((0U == (IData)(vlSelf->soc_sram__DOT__rf_port2_reg))
                                      ? 0U : vlSelf->soc_sram__DOT__i_reg_file__DOT__RF
                                     [vlSelf->soc_sram__DOT__rf_port2_reg]);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((1U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((2U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [1U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((4U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [2U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((8U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [3U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x10U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [4U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x20U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [5U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x40U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [6U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x80U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [7U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x100U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [8U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x200U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [9U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x400U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xaU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x800U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xbU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x1000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xcU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x2000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xdU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x4000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xeU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x8000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0xfU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x10000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x10U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x20000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x11U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x40000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x12U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x80000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x13U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x100000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x14U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x200000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x15U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x400000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x16U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o = 0U;
    if ((0x800000U & vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev)) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec
            [0x17U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__rst_ni = vlSelf->soc_sram__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__rst_ni = vlSelf->soc_sram__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_width_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_width;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__clk_i = vlSelf->soc_sram__DOT__clk_i;
    vlSelf->soc_sram__DOT__sram__DOT__clk_i = vlSelf->soc_sram__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_memory__DOT__clk_i = vlSelf->soc_sram__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__clk_i = vlSelf->soc_sram__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__csr_flush = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_flush_o;
    vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_stall 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__s_immed 
        = VL_EXTENDS_II(32,12, (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7) 
                                 << 5U) | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_addr)));
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((1U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((2U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [1U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((4U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [2U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((8U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [3U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x10U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [4U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x20U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [5U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x40U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [6U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x80U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [7U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x100U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [8U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x200U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [9U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x400U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xaU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x800U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xbU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x1000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xcU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x2000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xdU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x4000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xeU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x8000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0xfU];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x10000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x10U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x20U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
                }
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 3U)))) {
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                if ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                    vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                              >> 2U)))) {
                    vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0x20000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x11U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x100U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                      >> 7U)))) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 6U)))) {
                vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x40U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x80U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
            if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                          >> 6U)))) {
                vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x40U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])) {
                vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0x40000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x12U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x80000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x13U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x100000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x14U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x200000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x15U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x400000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x16U];
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o = 0U;
    if ((0x800000U & vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev)) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o 
            = vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec
            [0x17U];
    }
    if ((0x6fU == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x6fU != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        if ((0x67U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x67U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x63U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
            if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                    vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o = 7U;
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o = 6U;
                }
            } else {
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o 
                    = ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                        ? 5U : 4U);
            }
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                    vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
                }
            }
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o 
                = ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                    ? 2U : ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                             ? 1U : 0U));
        }
        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                    vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
            }
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o = 2U;
    }
    if ((0x63U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x13U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((5U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)) 
                      & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7) 
                         >> 5U))))) {
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if (((5U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)) 
             & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7) 
                >> 5U))) {
            if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o = 0U;
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o 
                        = ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                            ? 0xdU : 0U);
                }
            } else {
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o 
                    = ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                        ? 0U : ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                 ? 0U : 8U));
            }
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o 
                = ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                    ? ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                        ? ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                            ? 7U : 6U) : ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                           ? 5U : 4U))
                    : ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                        ? ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                            ? 3U : 2U) : ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                           ? 1U : 0U)));
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o 
            = ((0x33U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                ? ((0x20U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7))
                    ? ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                        ? ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                            ? 0U : ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                     ? 0xdU : 0U)) : 
                       ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                         ? 0U : ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                  ? 0U : 8U))) : ((4U 
                                                   & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                     ? 5U
                                                     : 4U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))
                                                     ? 1U
                                                     : 0U))))
                : ((0x37U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                    ? 0xfU : 0U));
    }
    if ((0x13U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        if ((0x33U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
            if ((0x20U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7))) {
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                            vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                            vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                            vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                            vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7) 
                          >> 5U)))) {
                if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                    if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                            vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                            vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                            vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                            vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                            vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                            vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))) {
                            vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3)))) {
                            vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
        }
        if ((0x33U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            if ((0x37U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x37U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0x40U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o 
                        = ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                            ? 0U : ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                                     ? ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                                         ? 2U : 0U)
                                     : 0U));
                }
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
            } else if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 2U;
                            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 3U;
                            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 3U;
                        } else {
                            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
                        }
                    } else {
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
                    }
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
                }
            } else if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 1U;
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 3U;
                    } else {
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
                    }
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
                }
            } else {
                if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 3U;
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 3U;
                    } else {
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                    }
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                }
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
            }
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                      >> 5U)))) {
            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        }
    } else if ((0x20U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o 
                = ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                             ? ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                                 ? ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                                     ? 1U : 0U) : 0U)
                             : 0U));
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o 
                = ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                                      ? ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                                          ? 2U : 0U)
                                      : 0U)));
        }
        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
    } else if ((0x10U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
        } else if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 1U;
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 3U;
                } else {
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                }
            } else {
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
            }
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o 
                = ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                    ? ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))
                        ? 1U : 0U) : 0U);
        }
        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o = 0U;
        if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
        } else if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
        } else if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 1U;
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 1U;
            } else {
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
                vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
            }
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o = 0U;
            vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                          >> 4U)))) {
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x20U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                          >> 4U)))) {
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
                if ((8U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                    vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode) 
                                      >> 1U)))) {
                            vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((2U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                                vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) {
                                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))) {
                        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__pc_src_o 
        = ((0x6fU == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
           | (0x67U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_read 
        = (3U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_mret 
        = ((0x73U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
           & ((0x18U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7)) 
              & (0U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_write 
        = (0x23U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr 
        = ((0x73U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
           & (0U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_width)));
    if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                  >> 1U)))) {
        if ((1U & (~ vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U]))) {
            vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U])) {
            vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                      >> 0x1eU)))) {
            vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x40000000U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U])) {
            vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[3U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[4U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[5U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[6U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[7U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT___unused 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT___unused;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_reg_i 
        = vlSelf->soc_sram__DOT__rf_wr_reg;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_reg_o 
        = vlSelf->soc_sram__DOT__rf_wr_reg;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_reg_oa 
        = vlSelf->soc_sram__DOT__rf_wr_reg;
    if ((0U != (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
        if ((1U == (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
            vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
            if ((2U != (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
                vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U == (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
                vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                      >> 4U)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U != (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                      >> 4U)))) {
        if ((2U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                          >> 4U)))) {
            vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                          >> 4U)))) {
            if ((3U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                              >> 4U)))) {
                vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
            }
            if ((3U != (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                              >> 4U)))) {
                vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_state[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[3U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_state[3U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
        = ((0xff00000000ULL & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa) 
           | (IData)((IData)(((0U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                            >> 4U)))
                               ? ((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                                   << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                                >> 7U))
                               : ((2U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                                >> 4U)))
                                   ? vlSelf->soc_sram__DOT__i_core__DOT__exec_state[0U]
                                   : ((3U == (3U & 
                                              (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                               >> 4U)))
                                       ? ((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[3U] 
                                           << 0x19U) 
                                          | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                                             >> 7U))
                                       : ((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                                           << 0x19U) 
                                          | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                             >> 7U))))))));
    if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                  >> 5U)))) {
        if ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U])) {
            vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                      >> 4U)))) {
            vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_state[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_state[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[3U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[4U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_state[4U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data = 0U;
    if ((0x20U & vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U])) {
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                      >> 4U)))) {
            vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U])) {
            vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data 
                = ((vlSelf->soc_sram__DOT__i_core__DOT__mem_state[4U] 
                    << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
                                 >> 7U));
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data 
                = vlSelf->soc_sram__DOT__i_core__DOT__mem_state[0U];
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data 
            = ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U])
                ? vlSelf->soc_sram__DOT__i_core__DOT__mem_state[1U]
                : ((vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
                    << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                 >> 7U)));
    }
    vlSelf->soc_sram__DOT__i_core__DOT__csr_busy_o 
        = vlSelf->soc_sram__DOT__csr_busy;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_gnt_i;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_req_o 
        = vlSelf->soc_sram__DOT__imem_req;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__csr_read_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__csr_out;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__inst_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_rdata_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_addr_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__data1_ao 
        = vlSelf->soc_sram__DOT__rf_rs1;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i = vlSelf->soc_sram__DOT__rf_rs1;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__data2_ao 
        = vlSelf->soc_sram__DOT__rf_rs2;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i = vlSelf->soc_sram__DOT__rf_rs2;
    vlSelf->soc_sram__DOT__unused2[0U] = vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_flush_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__csr_flush;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS = 0U;
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__csr_flush)))) {
            vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->soc_sram__DOT__i_core__DOT__csr_flush) {
            vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS 
                = (2U | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS));
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS 
                = (7U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__PS) 
                         << 1U));
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS = 0U;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__csr_flush) 
           | (0U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__PS)));
    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_sel_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_desync_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_stall;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__imem_stall_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_stall;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__s_immed_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__s_immed;
    vlSelf->soc_sram__DOT__dmem_rdata_1 = vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o;
    vlSelf->soc_sram__DOT__dmem_rdata = ((IData)(vlSelf->soc_sram__DOT__is_sram_wrap_prev)
                                          ? vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o
                                          : vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__pc_src 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__pc_src_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_a_src 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_b_src 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_src 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_read_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_read;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__branch_op 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_op 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_mret_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_mret;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_write_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_write;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs2_used 
        = ((0x63U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
           | ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_write) 
              | (0x33U == (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_wr_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_en 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs1_used 
        = (((0x37U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
            & ((0x17U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
               & (0x6fU != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) 
           | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en 
        = (((0x23U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
            & ((0x63U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)) 
               & (0x73U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode)))) 
           | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr));
    vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa;
    vlSelf->soc_sram__DOT__rf_wr_data = vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data;
    vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
        = (((QData)((IData)((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                   >> 6U)))) << 0x27U) 
           | (((QData)((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT___unused)) 
               << 0x26U) | (((QData)((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_o)) 
                             << 0x25U) | (((QData)((IData)(vlSelf->soc_sram__DOT__rf_wr_reg)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data))))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__inst_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__inst_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs1_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs2_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__rst_ni 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__rst_ni;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__clk_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__clk_i;
    vlSelf->soc_sram__DOT__i_core__DOT__csr_hold = vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess;
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs2_valid_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs2_used;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs1_valid_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs1_used;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_used 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rd_valid_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_en_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_data_i 
        = vlSelf->soc_sram__DOT__rf_wr_data;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_data_o 
        = vlSelf->soc_sram__DOT__rf_wr_data;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data_oa 
        = vlSelf->soc_sram__DOT__rf_wr_data;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
        = vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_conflict 
        = ((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                     >> 0xcU)) == (0x1fU & (IData)(
                                                   (vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                                    >> 0x20U))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_conflict 
        = ((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                     >> 0xcU)) == (0x1fU & (IData)(
                                                   (vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                                    >> 0x20U))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_raw 
        = (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_conflict) 
            & (0xa000000000ULL == (0xa000000000ULL 
                                   & vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data))) 
           & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
              >> 0x11U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_raw 
        = (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_conflict) 
            & (0xa000000000ULL == (0xa000000000ULL 
                                   & vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data))) 
           & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
              >> 0x11U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__data_updated_mem 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_raw)
            ? (IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data)
            : ((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                             >> 0xcU)));
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_raw) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_ao 
            = (IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data);
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__load_use_hazard_ao 
            = (1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                             >> 0x26U)));
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_ao 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__data_updated_mem;
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__load_use_hazard_ao = 0U;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_conflict 
        = ((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                     >> 6U)) == (0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                                  >> 0x20U))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_conflict 
        = ((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                     >> 6U)) == (0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                                  >> 0x20U))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_raw 
        = (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_conflict) 
            & (0xa000000000ULL == (0xa000000000ULL 
                                   & vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data))) 
           & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
              >> 0xbU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_raw 
        = (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_conflict) 
            & (0xa000000000ULL == (0xa000000000ULL 
                                   & vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data))) 
           & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
              >> 0xbU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__data_updated_mem 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_raw)
            ? (IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data)
            : ((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U] 
                             >> 6U)));
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_raw) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_ao 
            = (IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data);
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__load_use_hazard_ao 
            = (1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                             >> 0x26U)));
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_ao 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__data_updated_mem;
        vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__load_use_hazard_ao = 0U;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_hold_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__csr_hold;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_hold_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__csr_hold;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__dmem_rdata_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rdata_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign 
        = (1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                    >> 2U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext = 0U;
    if ((0U == (3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U]))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_updated 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_ao;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_lus 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__load_use_hazard_ao;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_updated 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_ao;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_lus 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__load_use_hazard_ao;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
        = ((0xfffU & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U]) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_updated 
              << 0xcU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
        = ((0x3f000U & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U]) 
           | (0x3ffffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_updated 
                          >> 0x14U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
        = ((0x3fU & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U]) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_updated 
              << 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
        = ((0xffffffc0U & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U]) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_updated 
              >> 0x1aU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_lus) 
           | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_lus));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs1_data_i 
        = (((0U == 0xcU) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[
                                 (((IData)(0x1fU) + (IData)(0x2cU)) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (IData)(0xcU)))) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
              >> 0xcU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs2_data_i 
        = (((0U == 6U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[
                               (((IData)(0x1fU) + (IData)(6U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(6U)))) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
              >> 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_data_i 
        = (((0U == 6U) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[
                               (((IData)(0x1fU) + (IData)(6U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(6U)))) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
              >> 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rs1 
        = (((0U == 0xcU) ? 0U : (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[
                                 (((IData)(0x1fU) + (IData)(0x2cU)) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (IData)(0xcU)))) 
           | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
              >> 0xcU));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_write_data 
        = ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
            << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                         >> 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__write_data 
        = ((1U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U])
            ? (0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                        >> 1U)) : ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                                    << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                                 >> 0xcU)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__eq 
        = (((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
             << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                          >> 0xcU)) == ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                         << 0x1aU) 
                                        | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                           >> 6U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__lt 
        = VL_LTS_III(32, ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                           << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                        >> 0xcU)), 
                     ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                       << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                    >> 6U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__ltu 
        = (((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
             << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                          >> 0xcU)) < ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                        << 0x1aU) | 
                                       (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                        >> 6U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__taken_o 
        = (1U & ((0x100U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                  ? ((0x80U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                      ? ((0x40U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                          ? (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__ltu))
                          : (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__ltu))
                      : ((0x40U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                          ? (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__lt))
                          : (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__lt)))
                  : ((~ (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                         >> 7U)) & ((0x40U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                                     ? (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__eq))
                                     : (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__eq)))));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data 
        = ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
            << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                         >> 6U));
    vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U];
    if ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U])) {
            vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in 
                = ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
                    << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U] 
                              >> 0x1eU));
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in 
                = ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
                    << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
                              >> 0x1eU));
        }
        if ((1U & (~ (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                      >> 0x1eU)))) {
            vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in 
            = ((0x40000000U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U])
                ? ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                    << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
                              >> 0x1eU)) : ((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                             << 0x1aU) 
                                            | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U] 
                                               >> 6U)));
    }
    if ((2U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U])) {
        if ((1U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U])) {
            vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                = ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
                    << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
                              >> 0x1eU));
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                = ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
                    << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
                              >> 0x1eU));
        }
        if ((1U & (~ vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U]))) {
            vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
            = ((1U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U])
                ? ((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
                    << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
                              >> 0x1eU)) : ((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                                             << 0x14U) 
                                            | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                               >> 0xcU)));
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o 
        = ((0x20U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
            ? ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                ? ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                    ? ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                        ? vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in
                        : 0U) : ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                                  ? VL_SHIFTRS_III(32,32,5, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in, 
                                                   (0x1fU 
                                                    & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in))
                                  : 0U)) : ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                                             ? 0U : 
                                            ((4U & 
                                              vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                                              ? 0U : 
                                             (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                                              - vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in))))
            : ((0x10U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                ? ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                    ? ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                        ? (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                           & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in)
                        : (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                           | vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in))
                    : ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                        ? (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                           >> (0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in))
                        : (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                           ^ vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in)))
                : ((8U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                    ? ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                        ? ((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                            < vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in)
                            ? 1U : 0U) : (VL_LTS_III(32, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in, vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in)
                                           ? 1U : 0U))
                    : ((4U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])
                        ? (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                           << (0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in))
                        : (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in 
                           + vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in)))));
    vlSelf->soc_sram__DOT__i_core__DOT__load_use_stall 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid 
        = ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao)) 
           & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_o));
    if ((0U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                      >> 0x16U)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data 
            = ((0xff000000U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                               << 0x12U)) | ((0xff0000U 
                                              & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                                 << 0xaU)) 
                                             | ((0xff00U 
                                                 & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                                    << 2U)) 
                                                | (0xffU 
                                                   & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                                      >> 6U)))));
    } else if ((1U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                             >> 0x16U)))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data 
            = ((0xffff0000U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                               << 0xaU)) | (0xffffU 
                                            & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                               >> 6U)));
    } else if ((2U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                             >> 0x16U)))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data 
            = ((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                             >> 6U));
    }
    vlSelf->soc_sram__DOT__dmem_wdata = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U];
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__stall_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__load_use_stall;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__load_use_stall_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__load_use_stall;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd = (
                                                   (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                                    >> 0x1aU) 
                                                   & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid));
    vlSelf->soc_sram__DOT__dmem_we = ((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                       >> 0x19U) & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__branch_taken 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__taken_o;
    vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel 
        = (((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
             >> 9U) | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__taken_o)) 
           & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid));
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_wdata_i 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.din0 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_i 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_wdata_o 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_data_ao 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_wdata 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_data_ao 
        = vlSelf->soc_sram__DOT__dmem_wdata;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__a_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__b_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_read_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rd_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__outstanding_read 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
           & ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf)) 
              & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf)));
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS) {
        if (vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS) {
            vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS)))) {
            vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS) 
               & ((IData)(vlSelf->rst_ni) & (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
                                              | (IData)(vlSelf->soc_sram__DOT__dmem_we)) 
                                             & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf))));
        vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS) 
               & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf)));
        vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__NS 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS) 
               & (~ ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf) 
                     & ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd)) 
                        | ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
                           & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf)))))));
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o 
            = ((IData)(vlSelf->rst_ni) & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
                                          | (IData)(vlSelf->soc_sram__DOT__dmem_we)));
        vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o 
            = (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
                | (IData)(vlSelf->soc_sram__DOT__dmem_we)) 
               & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf)));
        vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__NS 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__outstanding_read;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_i 
        = vlSelf->soc_sram__DOT__dmem_we;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__wr_i 
        = vlSelf->soc_sram__DOT__dmem_we;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_we_i = vlSelf->soc_sram__DOT__dmem_we;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.web0 
        = (1U & (~ (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_we_o = vlSelf->soc_sram__DOT__dmem_we;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_wr = vlSelf->soc_sram__DOT__dmem_we;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write_ao 
        = vlSelf->soc_sram__DOT__dmem_we;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write 
        = vlSelf->soc_sram__DOT__dmem_we;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel;
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pcSource 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_sel_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel;
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_ctrl_saved) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_saved;
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_saved;
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel 
            = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel;
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx 
        = (3U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o);
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr 
        = (0xfffffffcU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o);
    vlSelf->soc_sram__DOT__dmem_req = vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_stall 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o;
    vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl = 
        (((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao) 
          << 1U) | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o));
    vlSelf->soc_sram__DOT__rf_wr_en = ((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                        >> 6U) & ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o)) 
                                                  & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_o)));
    vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl = vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o;
    soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o) 
           | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao));
    if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->soc_sram__DOT__i_core__DOT__branch_taken 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel) 
           | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_addr_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_addr_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_out 
        = vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr = 0U;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe = 0U;
    if ((0U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                      >> 0x16U)))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe 
            = (0xfU & ((IData)(1U) << (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx)));
    } else if ((1U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                             >> 0x16U)))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr 
            = (1U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o);
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr)
                ? 0U : (0xfU & ((IData)(3U) << (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx))));
    } else if ((2U == (3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                             >> 0x16U)))) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr 
            = (0U != (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx));
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr)
                ? 0U : 0xfU);
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr = 1U;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_word_addr_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_req_o 
        = vlSelf->soc_sram__DOT__dmem_req;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__dmem_stall_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__dmem_stall;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__execute_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_en_i 
        = vlSelf->soc_sram__DOT__rf_wr_en;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_en_o 
        = vlSelf->soc_sram__DOT__rf_wr_en;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_en_oa 
        = vlSelf->soc_sram__DOT__rf_wr_en;
    vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__wb_ctrl = vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__memory_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__writeback_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT____Vcellinp__i_prog_cntr__stall_i 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o) 
           | (IData)(soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0));
    vlSelf->soc_sram__DOT__dmem_addr = ((IData)(soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0)
                                         ? vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__last_dmem_addr
                                         : vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr);
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch_taken_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__branch_taken;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_taken_o 
        = vlSelf->soc_sram__DOT__i_core__DOT__branch_taken;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch 
        = (1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__branch_taken) 
                 | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                    >> 0x14U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_illegal 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr) 
           & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
              | (IData)(vlSelf->soc_sram__DOT__dmem_we)));
    vlSelf->soc_sram__DOT__dmem_be = ((IData)(vlSelf->soc_sram__DOT__dmem_we)
                                       ? (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe)
                                       : 0U);
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT____Vcellinp__i_prog_cntr__stall_i) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i = 1U;
        vlSelf->soc_sram__DOT__imem_addr = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__last_pc;
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i = 0U;
        vlSelf->soc_sram__DOT__imem_addr = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_raw;
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_addr_i 
        = vlSelf->soc_sram__DOT__dmem_addr;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr0 
        = (0x1ffU & (vlSelf->soc_sram__DOT__dmem_addr 
                     >> 2U));
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_addr_i 
        = (0xffffU & (vlSelf->soc_sram__DOT__dmem_addr 
                      >> 2U));
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_addr_o 
        = vlSelf->soc_sram__DOT__dmem_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr_ao 
        = vlSelf->soc_sram__DOT__dmem_addr;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr 
        = (0x1fU & (vlSelf->soc_sram__DOT__dmem_addr 
                    >> 0xbU));
    vlSelf->soc_sram__DOT__is_sram_wrap = ((0x80000000U 
                                            <= vlSelf->soc_sram__DOT__dmem_addr) 
                                           & (0x800c0000U 
                                              >= vlSelf->soc_sram__DOT__dmem_addr));
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl 
        = ((((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch) 
             | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess)) 
            << 1U) | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT____Vcellinp__i_prog_cntr__stall_i));
    vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl 
        = ((((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o) 
             | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch)) 
            << 1U) | (IData)(soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0));
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_illegal_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_illegal;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_be_i = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.wmask0 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_strobe_i 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSelf->soc_sram__DOT__i_core__DOT__dmem_be_o = vlSelf->soc_sram__DOT__dmem_be;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb_ao 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_strobe_ao 
        = vlSelf->soc_sram__DOT__dmem_be;
    vlSelf->soc_sram__DOT__i_memory__DOT__pB_addr_i 
        = (0xffffU & (vlSelf->soc_sram__DOT__imem_addr 
                      >> 2U));
    vlSelf->soc_sram__DOT__i_core__DOT__imem_addr_o 
        = vlSelf->soc_sram__DOT__imem_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__mem_addr_o 
        = vlSelf->soc_sram__DOT__imem_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_out 
        = vlSelf->soc_sram__DOT__imem_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_o 
        = vlSelf->soc_sram__DOT__imem_addr;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelf->soc_sram__DOT__imem_addr);
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel) {
        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel)))) {
            vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel) {
            vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o 
                = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr;
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o 
                = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4;
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4;
    }
    if (vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel) {
        if ((1U & (~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel)))) {
            vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel) {
            vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
            vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next 
                = vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr;
        } else {
            vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next 
                = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o;
        }
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next 
            = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o;
    }
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_en_i = 
        (1U & (~ (IData)(vlSelf->soc_sram__DOT__is_sram_wrap)));
    vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o) 
           & (IData)(vlSelf->soc_sram__DOT__is_sram_wrap));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl;
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x11U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x10U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0xfU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0xeU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0xdU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0xaU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (9U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (2U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (1U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0xbU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (5U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (3U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0xcU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (6U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (4U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (7U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (8U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x12U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x13U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x14U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x15U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x16U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
                  & (0x17U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_req_i 
        = vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i;
    vlSelf->soc_sram__DOT__sram__DOT__cs_data = 0U;
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (1U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (1U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (2U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (2U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (4U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (3U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (8U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (4U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x10U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (5U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x20U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (6U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x40U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (7U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x80U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (8U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x100U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (9U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x200U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0xaU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x400U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0xbU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x800U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0xcU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x1000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0xdU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x2000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0xeU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x4000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0xfU == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x8000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x10U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x10000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x11U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x20000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x12U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x40000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x13U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x80000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x14U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x100000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x15U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x200000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x16U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x400000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    if (((IData)(vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i) 
         & (0x17U == (IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->soc_sram__DOT__sram__DOT__cs_data = 
            (0x800000U | vlSelf->soc_sram__DOT__sram__DOT__cs_data);
    }
    vlSelf->soc_sram__DOT__i_core__DOT__pre_intr_pc 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o;
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb0 
        = (1U & (~ vlSelf->soc_sram__DOT__sram__DOT__cs_data));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 1U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 2U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 3U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 4U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 5U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 6U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 7U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 8U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 9U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0xaU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0xbU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0xcU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0xdU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0xeU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0xfU)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x10U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x11U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x12U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x13U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x14U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x15U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x16U)));
    vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb0 
        = (1U & (~ (vlSelf->soc_sram__DOT__sram__DOT__cs_data 
                    >> 0x17U)));
    vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__next_pc 
        = vlSelf->soc_sram__DOT__i_core__DOT__pre_intr_pc;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__next_pc_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next;
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/justfran/carp/clam-soc/tests/sram_wrap/soc_sram.sv", 255, 5, ".soc_sram", "v_line/soc_sram", "block", "255-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/justfran/carp/clam-soc/tests/sram_wrap/soc_sram.sv", 314, 5, ".soc_sram", "v_line/soc_sram", "block", "314");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 50, 19, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 51, 19, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 52, 13, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 48, 5, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "block", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 59, 19, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "case", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 60, 19, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "case", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 61, 13, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "case", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 57, 5, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "block", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 73, 18, ".soc_sram.i_core.i_fetch_stage", "v_branch/fetch_stage", "if", "73-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 73, 19, ".soc_sram.i_core.i_fetch_stage", "v_branch/fetch_stage", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 71, 18, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "elsif", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 67, 9, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "elsif", "67-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 66, 5, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 103, 18, ".soc_sram.i_core.i_fetch_stage", "v_branch/fetch_stage", "if", "103-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 103, 19, ".soc_sram.i_core.i_fetch_stage", "v_branch/fetch_stage", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 99, 9, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "elsif", "99-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/fetch_stage.sv", 98, 5, ".soc_sram.i_core.i_fetch_stage", "v_line/fetch_stage", "block", "98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/prog_cntr.sv", 53, 18, ".soc_sram.i_core.i_fetch_stage.i_prog_cntr", "v_branch/prog_cntr", "if", "53,55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/prog_cntr.sv", 53, 19, ".soc_sram.i_core.i_fetch_stage.i_prog_cntr", "v_branch/prog_cntr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/prog_cntr.sv", 50, 9, ".soc_sram.i_core.i_fetch_stage.i_prog_cntr", "v_line/prog_cntr", "elsif", "50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/prog_cntr.sv", 49, 5, ".soc_sram.i_core.i_fetch_stage.i_prog_cntr", "v_line/prog_cntr", "block", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/decode_stage.sv", 113, 18, ".soc_sram.i_core.i_decode_stage", "v_branch/decode_stage", "if", "113,115,118,120,122-124,126-130,132-133,135-136,138-141,143-148,151-153,155-157,159-160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/decode_stage.sv", 113, 19, ".soc_sram.i_core.i_decode_stage", "v_branch/decode_stage", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/decode_stage.sv", 110, 9, ".soc_sram.i_core.i_decode_stage", "v_line/decode_stage", "elsif", "110-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/decode_stage.sv", 109, 5, ".soc_sram.i_core.i_decode_stage", "v_line/decode_stage", "block", "109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 71, 16, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 72, 17, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 73, 13, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 69, 5, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 84, 27, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 85, 27, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 86, 27, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 87, 27, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 88, 27, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 89, 27, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 90, 21, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 82, 19, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "82-83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 93, 13, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 80, 5, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "80-81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 105, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 106, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 107, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 108, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 109, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 110, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 111, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 112, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 113, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 114, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 115, 21, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 103, 19, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 120, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 121, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 122, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 123, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 124, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 125, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 126, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 127, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 128, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 129, 28, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 130, 21, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 118, 15, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "118-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 133, 16, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 134, 13, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 101, 5, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 142, 16, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 143, 18, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 144, 16, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 145, 19, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 146, 13, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 140, 5, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "140-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 153, 18, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 154, 16, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 155, 17, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 156, 19, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 157, 17, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 158, 18, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 159, 19, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 160, 13, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 151, 5, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "151-152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 187, 16, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 188, 17, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 189, 17, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 190, 19, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 191, 13, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "case", "191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 185, 5, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "185-186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 227, 25, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "227-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/decoder.sv", 232, 26, ".soc_sram.i_core.i_decode_stage.i_decoder", "v_line/decoder", "block", "232-235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/immed_gen.sv", 27, 25, ".soc_sram.i_core.i_decode_stage.i_immed_gen", "v_line/immed_gen", "block", "27-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 50, 16, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 51, 20, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 52, 20, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 53, 20, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 54, 13, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 48, 5, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "block", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 62, 16, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 63, 20, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 64, 20, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 65, 15, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 66, 13, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 60, 5, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "block", "60-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 135, 18, ".soc_sram.i_core.i_exec_stage", "v_branch/exec_stage", "if", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 135, 19, ".soc_sram.i_core.i_exec_stage", "v_branch/exec_stage", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 133, 9, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "elsif", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 132, 5, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "block", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 158, 18, ".soc_sram.i_core.i_exec_stage", "v_branch/exec_stage", "if", "158,161,163,165,167-168,170-172,175-177,179-181,183-184,187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 158, 19, ".soc_sram.i_core.i_exec_stage", "v_branch/exec_stage", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 154, 9, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "elsif", "154-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/exec_stage.sv", 153, 5, ".soc_sram.i_core.i_exec_stage", "v_line/exec_stage", "block", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 34, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 35, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 36, 15, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 37, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 38, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 39, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 40, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 41, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 42, 16, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 43, 17, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 44, 17, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 45, 13, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "case", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/alu.sv", 32, 5, ".soc_sram.i_core.i_exec_stage.i_alu", "v_line/alu", "block", "32-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 21, 16, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 22, 16, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 23, 16, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 24, 16, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 25, 17, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 26, 17, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 27, 13, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/branch_gen.sv", 19, 5, ".soc_sram.i_core.i_exec_stage.i_branch_gen", "v_line/branch_gen", "block", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/mem_prep.sv", 49, 17, ".soc_sram.i_core.i_exec_stage.i_mem_prep", "v_line/mem_prep", "case", "49-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/mem_prep.sv", 53, 17, ".soc_sram.i_core.i_exec_stage.i_mem_prep", "v_line/mem_prep", "case", "53,55,57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/mem_prep.sv", 60, 17, ".soc_sram.i_core.i_exec_stage.i_mem_prep", "v_line/mem_prep", "case", "60-61,63-64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/mem_prep.sv", 66, 13, ".soc_sram.i_core.i_exec_stage.i_mem_prep", "v_line/mem_prep", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/mem_prep.sv", 43, 5, ".soc_sram.i_core.i_exec_stage.i_mem_prep", "v_line/mem_prep", "block", "43-46,48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 72, 17, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "72-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 76, 17, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "76-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 80, 17, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "80-81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 83, 13, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 68, 5, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "block", "68-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 97, 12, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 98, 12, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 100, 18, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 101, 9, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "case", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 95, 5, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "block", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 113, 18, ".soc_sram.i_core.i_mem_slice_stage", "v_branch/mem_slice_stage", "if", "113,115,118-119,121-122,124,126-128,130,133-135,137-139,141-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 113, 19, ".soc_sram.i_core.i_mem_slice_stage", "v_branch/mem_slice_stage", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 109, 9, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "elsif", "109-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/mem_slice_stage.sv", 108, 5, ".soc_sram.i_core.i_mem_slice_stage", "v_line/mem_slice_stage", "block", "108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/wb_stage.sv", 26, 16, ".soc_sram.i_core.i_wb_stage", "v_line/wb_stage", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/wb_stage.sv", 27, 16, ".soc_sram.i_core.i_wb_stage", "v_line/wb_stage", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/wb_stage.sv", 28, 16, ".soc_sram.i_core.i_wb_stage", "v_line/wb_stage", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/wb_stage.sv", 29, 22, ".soc_sram.i_core.i_wb_stage", "v_line/wb_stage", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/wb_stage.sv", 30, 13, ".soc_sram.i_core.i_wb_stage", "v_line/wb_stage", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "/home/justfran/carp/clam-soc/core/rtl/core/stages/wb_stage.sv", 23, 5, ".soc_sram.i_core.i_wb_stage", "v_line/wb_stage", "block", "23-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 82, 29, ".soc_sram.i_core.i_csr", "v_line/csr", "block", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 106, 13, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "106-108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 106, 14, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 112, 13, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "112-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 112, 14, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 120, 14, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "120-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 120, 15, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 104, 9, ".soc_sram.i_core.i_csr", "v_line/csr", "elsif", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 95, 5, ".soc_sram.i_core.i_csr", "v_line/csr", "block", "95-96,98-100,102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 160, 22, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "160,162,164-165,167-168,170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 160, 23, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 146, 17, ".soc_sram.i_core.i_csr", "v_line/csr", "elsif", "146-147,149,151-152,154-155,157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 181, 21, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 181, 22, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 183, 21, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 183, 22, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 185, 21, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 185, 22, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 197, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 197, 16, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 197, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 197, 13, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 196, 25, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "196-197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 200, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 200, 16, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 200, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 200, 13, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 199, 27, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "199-200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 202, 21, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 194, 22, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "194-195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 194, 23, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 187, 22, ".soc_sram.i_core.i_csr", "v_line/csr", "elsif", "187-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 178, 17, ".soc_sram.i_core.i_csr", "v_line/csr", "elsif", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 211, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 211, 16, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 211, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 211, 13, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 210, 28, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "210-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 214, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 214, 16, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 214, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 214, 13, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 213, 24, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 217, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 217, 16, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 217, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 217, 13, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 216, 26, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "216-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 219, 21, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "219");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 207, 17, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "207-208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 207, 18, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 140, 13, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "140,142,144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 140, 14, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "175-176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 129, 9, ".soc_sram.i_core.i_csr", "v_branch/csr", "if", "129-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 129, 10, ".soc_sram.i_core.i_csr", "v_branch/csr", "else", "138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 128, 5, ".soc_sram.i_core.i_csr", "v_line/csr", "block", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 231, 20, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 232, 16, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 233, 18, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "233");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 234, 17, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "234");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 235, 19, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 236, 20, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 237, 13, ".soc_sram.i_core.i_csr", "v_line/csr", "case", "237");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/csr.sv", 228, 5, ".soc_sram.i_core.i_csr", "v_line/csr", "block", "228-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/fwd_unit.sv", 59, 3, ".soc_sram.i_core.i_fwd_unit", "v_line/fwd_unit", "block", "59-60,62-64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/reg_forwarder.sv", 42, 3, ".soc_sram.i_core.i_fwd_unit.rs1_fwd_unit", "v_line/reg_forwarder", "block", "42-44,46-47,50,53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/reg_forwarder.sv", 42, 3, ".soc_sram.i_core.i_fwd_unit.rs2_fwd_unit", "v_line/reg_forwarder", "block", "42-44,46-47,50,53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 56, 3, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "block", "56-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 68, 14, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "case", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 71, 15, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "case", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 74, 7, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "case", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 65, 3, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "block", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 84, 5, ".soc_sram.i_core.i_imem_obi_driver", "v_branch/obi_req_driver", "if", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 84, 6, ".soc_sram.i_core.i_imem_obi_driver", "v_branch/obi_req_driver", "else", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 83, 3, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "block", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 99, 14, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "case", "99-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 104, 15, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "case", "104-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 109, 7, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "case", "109-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 97, 3, ".soc_sram.i_core.i_imem_obi_driver", "v_line/obi_req_driver", "block", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 56, 3, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "block", "56-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 68, 14, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "case", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 71, 15, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "case", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 74, 7, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "case", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 65, 3, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "block", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 84, 5, ".soc_sram.i_core.i_dmem_obi_driver", "v_branch/obi_req_driver", "if", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 84, 6, ".soc_sram.i_core.i_dmem_obi_driver", "v_branch/obi_req_driver", "else", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 83, 3, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "block", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 99, 14, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "case", "99-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 104, 15, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "case", "104-106");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 109, 7, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "case", "109-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/obi_req_driver.sv", 97, 3, ".soc_sram.i_core.i_dmem_obi_driver", "v_line/obi_req_driver", "block", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 104, 14, ".soc_sram.i_core.i_hazard_unit", "v_line/hazard_unit", "if", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 104, 15, ".soc_sram.i_core.i_hazard_unit", "v_line/hazard_unit", "else", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 102, 9, ".soc_sram.i_core.i_hazard_unit", "v_line/hazard_unit", "elsif", "102-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 100, 5, ".soc_sram.i_core.i_hazard_unit", "v_line/hazard_unit", "block", "100-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 111, 9, ".soc_sram.i_core.i_hazard_unit", "v_branch/hazard_unit", "if", "111-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 111, 10, ".soc_sram.i_core.i_hazard_unit", "v_branch/hazard_unit", "else", "114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 110, 5, ".soc_sram.i_core.i_hazard_unit", "v_line/hazard_unit", "block", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/hazard_unit.sv", 117, 5, ".soc_sram.i_core.i_hazard_unit", "v_line/hazard_unit", "block", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/reg_file.sv", 45, 9, ".soc_sram.i_reg_file", "v_branch/reg_file", "if", "45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/reg_file.sv", 45, 10, ".soc_sram.i_reg_file", "v_branch/reg_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "/home/justfran/carp/clam-soc/core/rtl/core/modules/reg_file.sv", 44, 5, ".soc_sram.i_reg_file", "v_line/reg_file", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 47, 5, ".soc_sram.sram", "v_line/sram_wrap", "block", "47-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 54, 5, ".soc_sram.sram", "v_line/sram_wrap", "block", "54-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 119, 13, ".soc_sram.sram", "v_branch/sram_wrap", "if", "119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 119, 14, ".soc_sram.sram", "v_branch/sram_wrap", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 120, 13, ".soc_sram.sram", "v_branch/sram_wrap", "if", "120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 120, 14, ".soc_sram.sram", "v_branch/sram_wrap", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 125, 13, ".soc_sram.sram", "v_branch/sram_wrap", "if", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 125, 14, ".soc_sram.sram", "v_branch/sram_wrap", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 126, 13, ".soc_sram.sram", "v_branch/sram_wrap", "if", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 126, 14, ".soc_sram.sram", "v_branch/sram_wrap", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 115, 9, ".soc_sram.sram", "v_line/sram_wrap", "block", "115-116,123-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 110, 5, ".soc_sram.sram", "v_line/sram_wrap", "block", "110-113,115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "/home/justfran/carp/clam-soc/rtl/soc/modules/sram_wrap.sv", 130, 5, ".soc_sram.sram", "v_line/sram_wrap", "block", "130-133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 35, 1, ".soc_sram.i_memory", "v_line/test_memory__A10_D20", "block", "35-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 45, 13, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "if", "45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 45, 14, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 44, 9, ".soc_sram.i_memory", "v_line/test_memory__A10_D20", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 43, 5, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "if", "43-44,49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 43, 6, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 42, 1, ".soc_sram.i_memory", "v_line/test_memory__A10_D20", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 57, 13, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "if", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 57, 14, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 56, 9, ".soc_sram.i_memory", "v_line/test_memory__A10_D20", "block", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 55, 5, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "if", "55-56,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 55, 6, ".soc_sram.i_memory", "v_branch/test_memory__A10_D20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "/home/justfran/carp/clam-soc/core/rtl/wrapper_modules/test_memory.sv", 54, 1, ".soc_sram.i_memory", "v_line/test_memory__A10_D20", "block", "54");
}
