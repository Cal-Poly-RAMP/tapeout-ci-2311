// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__soc_sram__DOT__i_reg_file__DOT__RF__v0;
    __Vdlyvdim0__soc_sram__DOT__i_reg_file__DOT__RF__v0 = 0;
    IData/*31:0*/ __Vdlyvval__soc_sram__DOT__i_reg_file__DOT__RF__v0;
    __Vdlyvval__soc_sram__DOT__i_reg_file__DOT__RF__v0 = 0;
    CData/*0:0*/ __Vdlyvset__soc_sram__DOT__i_reg_file__DOT__RF__v0;
    __Vdlyvset__soc_sram__DOT__i_reg_file__DOT__RF__v0 = 0;
    // Body
    vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ ((IData)(vlSelf->soc_sram__DOT__rf_wr_en) 
                  & (0U != (IData)(vlSelf->soc_sram__DOT__rf_wr_reg)))))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
    }
    __Vdlyvset__soc_sram__DOT__i_reg_file__DOT__RF__v0 = 0U;
    if (((IData)(vlSelf->soc_sram__DOT__rf_wr_en) & 
         (0U != (IData)(vlSelf->soc_sram__DOT__rf_wr_reg)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        __Vdlyvval__soc_sram__DOT__i_reg_file__DOT__RF__v0 
            = vlSelf->soc_sram__DOT__rf_wr_data;
        __Vdlyvset__soc_sram__DOT__i_reg_file__DOT__RF__v0 = 1U;
        __Vdlyvdim0__soc_sram__DOT__i_reg_file__DOT__RF__v0 
            = vlSelf->soc_sram__DOT__rf_wr_reg;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf 
        = vlSelf->soc_sram__DOT__imem_gnt;
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf 
        = vlSelf->soc_sram__DOT__imem_rvalid;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf 
        = vlSelf->soc_sram__DOT__dmem_gnt;
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf 
        = vlSelf->soc_sram__DOT__dmem_rvalid;
    if (__Vdlyvset__soc_sram__DOT__i_reg_file__DOT__RF__v0) {
        vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[__Vdlyvdim0__soc_sram__DOT__i_reg_file__DOT__RF__v0] 
            = __Vdlyvval__soc_sram__DOT__i_reg_file__DOT__RF__v0;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__outstanding_read 
        = ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf)) 
           & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
    vlSelf->soc_sram__DOT__sram__DOT__sram_i_rvalid_o = 0U;
    vlSelf->soc_sram__DOT__sram__DOT__sram_d_rvalid_o 
        = vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i;
    vlSelf->soc_sram__DOT__unused = ((0xbfU & (IData)(vlSelf->soc_sram__DOT__unused)) 
                                     | ((IData)(vlSelf->soc_sram__DOT__sram__DOT__sram_i_rvalid_o) 
                                        << 6U));
    vlSelf->soc_sram__DOT__dmem_rvalid_1 = vlSelf->soc_sram__DOT__sram__DOT__sram_d_rvalid_o;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0;
    soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0 = 0;
    // Body
    vlSelf->soc_sram__DOT__rf_rs1 = ((0U == (IData)(vlSelf->soc_sram__DOT__rf_port1_reg))
                                      ? 0U : vlSelf->soc_sram__DOT__i_reg_file__DOT__RF
                                     [vlSelf->soc_sram__DOT__rf_port1_reg]);
    vlSelf->soc_sram__DOT__rf_rs2 = ((0U == (IData)(vlSelf->soc_sram__DOT__rf_port2_reg))
                                      ? 0U : vlSelf->soc_sram__DOT__i_reg_file__DOT__RF
                                     [vlSelf->soc_sram__DOT__rf_port2_reg]);
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o 
            = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS) 
               & ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf)));
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__outstanding_read 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd) 
           & ((~ (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf)) 
              & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf)));
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS) {
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
    vlSelf->soc_sram__DOT__i_reg_file__DOT__data1_ao 
        = vlSelf->soc_sram__DOT__rf_rs1;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i = vlSelf->soc_sram__DOT__rf_rs1;
    vlSelf->soc_sram__DOT__i_reg_file__DOT__data2_ao 
        = vlSelf->soc_sram__DOT__rf_rs2;
    vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i = vlSelf->soc_sram__DOT__rf_rs2;
    vlSelf->soc_sram__DOT__imem_req = vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_stall 
        = vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o;
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs1_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i;
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs2_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i;
    vlSelf->soc_sram__DOT__i_core__DOT__imem_req_o 
        = vlSelf->soc_sram__DOT__imem_req;
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_desync_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_stall;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__imem_stall_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__imem_stall;
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
    vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl 
        = ((((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o) 
             | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch)) 
            << 1U) | (IData)(soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT____VdfgTmp_he65f224c__0));
    if (vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT____Vcellinp__i_prog_cntr__stall_i) {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i = 1U;
        vlSelf->soc_sram__DOT__imem_addr = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__last_pc;
    } else {
        vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i = 0U;
        vlSelf->soc_sram__DOT__imem_addr = vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_raw;
    }
    vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl 
        = ((((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch) 
             | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess)) 
            << 1U) | (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT____Vcellinp__i_prog_cntr__stall_i));
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl;
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i 
        = vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl;
    vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao 
        = vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl;
    vlSelf->soc_sram__DOT__i_memory__DOT__pA_en_i = 
        (1U & (~ (IData)(vlSelf->soc_sram__DOT__is_sram_wrap)));
    vlSelf->soc_sram__DOT____Vcellinp__sram__sram_d_req_i 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o) 
           & (IData)(vlSelf->soc_sram__DOT__is_sram_wrap));
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel)
            ? ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel)
                ? vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr
                : vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4)
            : vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4);
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
    vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next 
        = ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel)
            ? ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel)
                ? vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr
                : vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o)
            : vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o);
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__1(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
void Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8* vlSelf);
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
void Vtop___024root___act_comb__TOP__49(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__48(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x1fU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x21U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x23U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x25U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x27U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x29U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x2bU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x2dU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x2fU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x31U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x1eU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x20U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x22U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x24U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x26U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x28U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x2aU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x2cU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x2eU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x30U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x32U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__1((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x33U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x35U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x37U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x39U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x3bU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x3dU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x3fU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x41U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x43U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x45U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x47U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x49U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x4bU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x4dU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x4fU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x51U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x53U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x55U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x57U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x59U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x5bU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x5dU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x5fU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x61U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__2((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x34U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x36U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x38U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x3aU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x3cU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x3eU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x40U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x42U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x44U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x46U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x48U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x4aU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x4cU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x4eU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x50U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x52U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x54U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x56U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x58U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x5aU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x5cU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x5eU)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x60U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1));
    }
    if (vlSelf->__VnbaTriggered.at(0x62U)) {
        Vtop_sky130_sram_2kbyte_1rw1r_32x512_8___nba_sequent__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__3((&vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1));
    }
    if (((vlSelf->__VnbaTriggered.at(0x33U) | vlSelf->__VnbaTriggered.at(0x63U)) 
         | vlSelf->__VnbaTriggered.at(0x64U))) {
        Vtop___024root___act_comb__TOP__24(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x35U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x66U))) {
        Vtop___024root___act_comb__TOP__25(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x37U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x68U))) {
        Vtop___024root___act_comb__TOP__26(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x39U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x6aU))) {
        Vtop___024root___act_comb__TOP__27(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x3bU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x6cU))) {
        Vtop___024root___act_comb__TOP__28(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x3dU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x6eU))) {
        Vtop___024root___act_comb__TOP__29(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x3fU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x70U))) {
        Vtop___024root___act_comb__TOP__30(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x41U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x72U))) {
        Vtop___024root___act_comb__TOP__31(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x43U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x74U))) {
        Vtop___024root___act_comb__TOP__32(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x45U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x76U))) {
        Vtop___024root___act_comb__TOP__33(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x47U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x78U))) {
        Vtop___024root___act_comb__TOP__34(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x49U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x7aU))) {
        Vtop___024root___act_comb__TOP__35(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x4bU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x7cU))) {
        Vtop___024root___act_comb__TOP__36(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x4dU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x7eU))) {
        Vtop___024root___act_comb__TOP__37(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x4fU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x80U))) {
        Vtop___024root___act_comb__TOP__38(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x51U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x82U))) {
        Vtop___024root___act_comb__TOP__39(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x53U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x84U))) {
        Vtop___024root___act_comb__TOP__40(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x55U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x86U))) {
        Vtop___024root___act_comb__TOP__41(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x57U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x88U))) {
        Vtop___024root___act_comb__TOP__42(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x59U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x8aU))) {
        Vtop___024root___act_comb__TOP__43(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x5bU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x8cU))) {
        Vtop___024root___act_comb__TOP__44(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x5dU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x8eU))) {
        Vtop___024root___act_comb__TOP__45(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x5fU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x90U))) {
        Vtop___024root___act_comb__TOP__46(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x61U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x92U))) {
        Vtop___024root___act_comb__TOP__47(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x34U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x65U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x36U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x67U))) {
        Vtop___024root___act_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x38U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x69U))) {
        Vtop___024root___act_comb__TOP__2(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x3aU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x6bU))) {
        Vtop___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x3cU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x6dU))) {
        Vtop___024root___act_comb__TOP__4(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x3eU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x6fU))) {
        Vtop___024root___act_comb__TOP__5(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x40U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x71U))) {
        Vtop___024root___act_comb__TOP__6(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x42U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x73U))) {
        Vtop___024root___act_comb__TOP__7(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x44U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x75U))) {
        Vtop___024root___act_comb__TOP__8(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x46U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x77U))) {
        Vtop___024root___act_comb__TOP__9(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x48U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x79U))) {
        Vtop___024root___act_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x4aU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x7bU))) {
        Vtop___024root___act_comb__TOP__11(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x4cU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x7dU))) {
        Vtop___024root___act_comb__TOP__12(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x4eU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x7fU))) {
        Vtop___024root___act_comb__TOP__13(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x50U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x81U))) {
        Vtop___024root___act_comb__TOP__14(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x52U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x83U))) {
        Vtop___024root___act_comb__TOP__15(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x54U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x85U))) {
        Vtop___024root___act_comb__TOP__16(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x56U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x87U))) {
        Vtop___024root___act_comb__TOP__17(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x58U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x89U))) {
        Vtop___024root___act_comb__TOP__18(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x5aU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x8bU))) {
        Vtop___024root___act_comb__TOP__19(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x5cU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x8dU))) {
        Vtop___024root___act_comb__TOP__20(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x5eU) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x8fU))) {
        Vtop___024root___act_comb__TOP__21(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x60U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x91U))) {
        Vtop___024root___act_comb__TOP__22(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x62U) | vlSelf->__VnbaTriggered.at(0x64U)) 
         | vlSelf->__VnbaTriggered.at(0x93U))) {
        Vtop___024root___act_comb__TOP__23(vlSelf);
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   ((((((vlSelf->__VnbaTriggered.at(0U) 
                                                         | vlSelf->__VnbaTriggered.at(0x33U)) 
                                                        | vlSelf->__VnbaTriggered.at(0x35U)) 
                                                       | vlSelf->__VnbaTriggered.at(0x37U)) 
                                                      | vlSelf->__VnbaTriggered.at(0x39U)) 
                                                     | vlSelf->__VnbaTriggered.at(0x3bU)) 
                                                    | vlSelf->__VnbaTriggered.at(0x3dU)) 
                                                   | vlSelf->__VnbaTriggered.at(0x3fU)) 
                                                  | vlSelf->__VnbaTriggered.at(0x41U)) 
                                                 | vlSelf->__VnbaTriggered.at(0x43U)) 
                                                | vlSelf->__VnbaTriggered.at(0x45U)) 
                                               | vlSelf->__VnbaTriggered.at(0x47U)) 
                                              | vlSelf->__VnbaTriggered.at(0x49U)) 
                                             | vlSelf->__VnbaTriggered.at(0x4bU)) 
                                            | vlSelf->__VnbaTriggered.at(0x4dU)) 
                                           | vlSelf->__VnbaTriggered.at(0x4fU)) 
                                          | vlSelf->__VnbaTriggered.at(0x51U)) 
                                         | vlSelf->__VnbaTriggered.at(0x53U)) 
                                        | vlSelf->__VnbaTriggered.at(0x55U)) 
                                       | vlSelf->__VnbaTriggered.at(0x57U)) 
                                      | vlSelf->__VnbaTriggered.at(0x59U)) 
                                     | vlSelf->__VnbaTriggered.at(0x5bU)) 
                                    | vlSelf->__VnbaTriggered.at(0x5dU)) 
                                   | vlSelf->__VnbaTriggered.at(0x5fU)) 
                                  | vlSelf->__VnbaTriggered.at(0x61U)) 
                                 | vlSelf->__VnbaTriggered.at(0x63U)) 
                                | vlSelf->__VnbaTriggered.at(0x64U)) 
                               | vlSelf->__VnbaTriggered.at(0x66U)) 
                              | vlSelf->__VnbaTriggered.at(0x68U)) 
                             | vlSelf->__VnbaTriggered.at(0x6aU)) 
                            | vlSelf->__VnbaTriggered.at(0x6cU)) 
                           | vlSelf->__VnbaTriggered.at(0x6eU)) 
                          | vlSelf->__VnbaTriggered.at(0x70U)) 
                         | vlSelf->__VnbaTriggered.at(0x72U)) 
                        | vlSelf->__VnbaTriggered.at(0x74U)) 
                       | vlSelf->__VnbaTriggered.at(0x76U)) 
                      | vlSelf->__VnbaTriggered.at(0x78U)) 
                     | vlSelf->__VnbaTriggered.at(0x7aU)) 
                    | vlSelf->__VnbaTriggered.at(0x7cU)) 
                   | vlSelf->__VnbaTriggered.at(0x7eU)) 
                  | vlSelf->__VnbaTriggered.at(0x80U)) 
                 | vlSelf->__VnbaTriggered.at(0x82U)) 
                | vlSelf->__VnbaTriggered.at(0x84U)) 
               | vlSelf->__VnbaTriggered.at(0x86U)) 
              | vlSelf->__VnbaTriggered.at(0x88U)) 
             | vlSelf->__VnbaTriggered.at(0x8aU)) | vlSelf->__VnbaTriggered.at(0x8cU)) 
           | vlSelf->__VnbaTriggered.at(0x8eU)) | vlSelf->__VnbaTriggered.at(0x90U)) 
         | vlSelf->__VnbaTriggered.at(0x92U))) {
        Vtop___024root___act_comb__TOP__49(vlSelf);
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   ((((((vlSelf->__VnbaTriggered.at(0U) 
                                                         | vlSelf->__VnbaTriggered.at(0x34U)) 
                                                        | vlSelf->__VnbaTriggered.at(0x36U)) 
                                                       | vlSelf->__VnbaTriggered.at(0x38U)) 
                                                      | vlSelf->__VnbaTriggered.at(0x3aU)) 
                                                     | vlSelf->__VnbaTriggered.at(0x3cU)) 
                                                    | vlSelf->__VnbaTriggered.at(0x3eU)) 
                                                   | vlSelf->__VnbaTriggered.at(0x40U)) 
                                                  | vlSelf->__VnbaTriggered.at(0x42U)) 
                                                 | vlSelf->__VnbaTriggered.at(0x44U)) 
                                                | vlSelf->__VnbaTriggered.at(0x46U)) 
                                               | vlSelf->__VnbaTriggered.at(0x48U)) 
                                              | vlSelf->__VnbaTriggered.at(0x4aU)) 
                                             | vlSelf->__VnbaTriggered.at(0x4cU)) 
                                            | vlSelf->__VnbaTriggered.at(0x4eU)) 
                                           | vlSelf->__VnbaTriggered.at(0x50U)) 
                                          | vlSelf->__VnbaTriggered.at(0x52U)) 
                                         | vlSelf->__VnbaTriggered.at(0x54U)) 
                                        | vlSelf->__VnbaTriggered.at(0x56U)) 
                                       | vlSelf->__VnbaTriggered.at(0x58U)) 
                                      | vlSelf->__VnbaTriggered.at(0x5aU)) 
                                     | vlSelf->__VnbaTriggered.at(0x5cU)) 
                                    | vlSelf->__VnbaTriggered.at(0x5eU)) 
                                   | vlSelf->__VnbaTriggered.at(0x60U)) 
                                  | vlSelf->__VnbaTriggered.at(0x62U)) 
                                 | vlSelf->__VnbaTriggered.at(0x64U)) 
                                | vlSelf->__VnbaTriggered.at(0x65U)) 
                               | vlSelf->__VnbaTriggered.at(0x67U)) 
                              | vlSelf->__VnbaTriggered.at(0x69U)) 
                             | vlSelf->__VnbaTriggered.at(0x6bU)) 
                            | vlSelf->__VnbaTriggered.at(0x6dU)) 
                           | vlSelf->__VnbaTriggered.at(0x6fU)) 
                          | vlSelf->__VnbaTriggered.at(0x71U)) 
                         | vlSelf->__VnbaTriggered.at(0x73U)) 
                        | vlSelf->__VnbaTriggered.at(0x75U)) 
                       | vlSelf->__VnbaTriggered.at(0x77U)) 
                      | vlSelf->__VnbaTriggered.at(0x79U)) 
                     | vlSelf->__VnbaTriggered.at(0x7bU)) 
                    | vlSelf->__VnbaTriggered.at(0x7dU)) 
                   | vlSelf->__VnbaTriggered.at(0x7fU)) 
                  | vlSelf->__VnbaTriggered.at(0x81U)) 
                 | vlSelf->__VnbaTriggered.at(0x83U)) 
                | vlSelf->__VnbaTriggered.at(0x85U)) 
               | vlSelf->__VnbaTriggered.at(0x87U)) 
              | vlSelf->__VnbaTriggered.at(0x89U)) 
             | vlSelf->__VnbaTriggered.at(0x8bU)) | vlSelf->__VnbaTriggered.at(0x8dU)) 
           | vlSelf->__VnbaTriggered.at(0x8fU)) | vlSelf->__VnbaTriggered.at(0x91U)) 
         | vlSelf->__VnbaTriggered.at(0x93U))) {
        Vtop___024root___act_comb__TOP__48(vlSelf);
    }
}
