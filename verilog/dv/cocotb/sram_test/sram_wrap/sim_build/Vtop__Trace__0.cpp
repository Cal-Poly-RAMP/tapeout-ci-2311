// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk_i));
    bufp->chgBit(oldp+1,(vlSelf->rst_ni));
    bufp->chgBit(oldp+2,(vlSelf->boot_sel_soft_i));
    bufp->chgBit(oldp+3,(vlSelf->boot_sel_src_i));
    bufp->chgBit(oldp+4,(vlSelf->sram_mux_sel_i));
    bufp->chgBit(oldp+5,(vlSelf->caravel_wb_rst_i));
    bufp->chgBit(oldp+6,(vlSelf->caravel_wbs_stb_i));
    bufp->chgBit(oldp+7,(vlSelf->caravel_wbs_cyc_i));
    bufp->chgBit(oldp+8,(vlSelf->caravel_wbs_we_i));
    bufp->chgCData(oldp+9,(vlSelf->caravel_wbs_sel_i),4);
    bufp->chgIData(oldp+10,(vlSelf->caravel_wbs_dat_i),32);
    bufp->chgIData(oldp+11,(vlSelf->caravel_wbs_adr_i),32);
    bufp->chgBit(oldp+12,(vlSelf->caravel_wbs_ack_o));
    bufp->chgIData(oldp+13,(vlSelf->caravel_wbs_dat_o),32);
    bufp->chgWData(oldp+14,(vlSelf->la_data_i),128);
    bufp->chgWData(oldp+18,(vlSelf->la_data_o),128);
    bufp->chgWData(oldp+22,(vlSelf->la_oe_no),128);
    bufp->chgQData(oldp+26,(vlSelf->gpio_i),38);
    bufp->chgQData(oldp+28,(vlSelf->gpio_o),38);
    bufp->chgQData(oldp+30,(vlSelf->gpio_oeb_no),38);
    bufp->chgCData(oldp+32,(vlSelf->caravel_interrupt_o),3);
    bufp->chgBit(oldp+33,(vlSelf->soc_sram__DOT__clk_i));
    bufp->chgBit(oldp+34,(vlSelf->soc_sram__DOT__rst_ni));
    bufp->chgBit(oldp+35,(vlSelf->soc_sram__DOT__boot_sel_soft_i));
    bufp->chgBit(oldp+36,(vlSelf->soc_sram__DOT__boot_sel_src_i));
    bufp->chgBit(oldp+37,(vlSelf->soc_sram__DOT__sram_mux_sel_i));
    bufp->chgBit(oldp+38,(vlSelf->soc_sram__DOT__caravel_wb_rst_i));
    bufp->chgBit(oldp+39,(vlSelf->soc_sram__DOT__caravel_wbs_stb_i));
    bufp->chgBit(oldp+40,(vlSelf->soc_sram__DOT__caravel_wbs_cyc_i));
    bufp->chgBit(oldp+41,(vlSelf->soc_sram__DOT__caravel_wbs_we_i));
    bufp->chgCData(oldp+42,(vlSelf->soc_sram__DOT__caravel_wbs_sel_i),4);
    bufp->chgIData(oldp+43,(vlSelf->soc_sram__DOT__caravel_wbs_dat_i),32);
    bufp->chgIData(oldp+44,(vlSelf->soc_sram__DOT__caravel_wbs_adr_i),32);
    bufp->chgBit(oldp+45,(vlSelf->soc_sram__DOT__caravel_wbs_ack_o));
    bufp->chgIData(oldp+46,(vlSelf->soc_sram__DOT__caravel_wbs_dat_o),32);
    bufp->chgWData(oldp+47,(vlSelf->soc_sram__DOT__la_data_i),128);
    bufp->chgWData(oldp+51,(vlSelf->soc_sram__DOT__la_data_o),128);
    bufp->chgWData(oldp+55,(vlSelf->soc_sram__DOT__la_oe_no),128);
    bufp->chgQData(oldp+59,(vlSelf->soc_sram__DOT__gpio_i),38);
    bufp->chgQData(oldp+61,(vlSelf->soc_sram__DOT__gpio_o),38);
    bufp->chgQData(oldp+63,(vlSelf->soc_sram__DOT__gpio_oeb_no),38);
    bufp->chgCData(oldp+65,(vlSelf->soc_sram__DOT__caravel_interrupt_o),3);
    bufp->chgBit(oldp+66,(vlSelf->soc_sram__DOT__dmem_req));
    bufp->chgBit(oldp+67,(vlSelf->soc_sram__DOT__dmem_gnt));
    bufp->chgBit(oldp+68,(vlSelf->soc_sram__DOT__dmem_we));
    bufp->chgBit(oldp+69,(vlSelf->soc_sram__DOT__dmem_rvalid));
    bufp->chgIData(oldp+70,(vlSelf->soc_sram__DOT__dmem_addr),32);
    bufp->chgIData(oldp+71,(vlSelf->soc_sram__DOT__dmem_wdata),32);
    bufp->chgIData(oldp+72,(vlSelf->soc_sram__DOT__dmem_rdata),32);
    bufp->chgCData(oldp+73,(vlSelf->soc_sram__DOT__dmem_be),4);
    bufp->chgBit(oldp+74,(vlSelf->soc_sram__DOT__imem_req));
    bufp->chgBit(oldp+75,(vlSelf->soc_sram__DOT__imem_gnt));
    bufp->chgBit(oldp+76,(vlSelf->soc_sram__DOT__imem_we));
    bufp->chgBit(oldp+77,(vlSelf->soc_sram__DOT__imem_rvalid));
    bufp->chgIData(oldp+78,(vlSelf->soc_sram__DOT__imem_addr),32);
    bufp->chgIData(oldp+79,(vlSelf->soc_sram__DOT__imem_wdata),32);
    bufp->chgIData(oldp+80,(vlSelf->soc_sram__DOT__imem_rdata),32);
    bufp->chgCData(oldp+81,(vlSelf->soc_sram__DOT__imem_be),4);
    bufp->chgBit(oldp+82,(vlSelf->soc_sram__DOT__sram_d_req));
    bufp->chgBit(oldp+83,(vlSelf->soc_sram__DOT__sram_d_gnt));
    bufp->chgBit(oldp+84,(vlSelf->soc_sram__DOT__sram_d_we));
    bufp->chgBit(oldp+85,(vlSelf->soc_sram__DOT__sram_d_rvalid));
    bufp->chgIData(oldp+86,(vlSelf->soc_sram__DOT__sram_d_addr),32);
    bufp->chgIData(oldp+87,(vlSelf->soc_sram__DOT__sram_d_wdata),32);
    bufp->chgIData(oldp+88,(vlSelf->soc_sram__DOT__sram_d_rdata),32);
    bufp->chgCData(oldp+89,(vlSelf->soc_sram__DOT__sram_d_be),4);
    bufp->chgBit(oldp+90,(vlSelf->soc_sram__DOT__sram_i_req));
    bufp->chgBit(oldp+91,(vlSelf->soc_sram__DOT__sram_i_gnt));
    bufp->chgBit(oldp+92,(vlSelf->soc_sram__DOT__sram_i_we));
    bufp->chgBit(oldp+93,(vlSelf->soc_sram__DOT__sram_i_rvalid));
    bufp->chgIData(oldp+94,(vlSelf->soc_sram__DOT__sram_i_addr),32);
    bufp->chgIData(oldp+95,(vlSelf->soc_sram__DOT__sram_i_wdata),32);
    bufp->chgIData(oldp+96,(vlSelf->soc_sram__DOT__sram_i_rdata),32);
    bufp->chgCData(oldp+97,(vlSelf->soc_sram__DOT__sram_i_be),4);
    bufp->chgBit(oldp+98,(vlSelf->soc_sram__DOT__peripheral_req));
    bufp->chgBit(oldp+99,(vlSelf->soc_sram__DOT__peripheral_gnt));
    bufp->chgBit(oldp+100,(vlSelf->soc_sram__DOT__peripheral_we));
    bufp->chgBit(oldp+101,(vlSelf->soc_sram__DOT__peripheral_rvalid));
    bufp->chgIData(oldp+102,(vlSelf->soc_sram__DOT__peripheral_addr),32);
    bufp->chgIData(oldp+103,(vlSelf->soc_sram__DOT__peripheral_wdata),32);
    bufp->chgIData(oldp+104,(vlSelf->soc_sram__DOT__peripheral_rdata),32);
    bufp->chgCData(oldp+105,(vlSelf->soc_sram__DOT__peripheral_be),4);
    bufp->chgBit(oldp+106,(vlSelf->soc_sram__DOT__flash_req));
    bufp->chgBit(oldp+107,(vlSelf->soc_sram__DOT__flash_gnt));
    bufp->chgBit(oldp+108,(vlSelf->soc_sram__DOT__flash_we));
    bufp->chgBit(oldp+109,(vlSelf->soc_sram__DOT__flash_rvalid));
    bufp->chgIData(oldp+110,(vlSelf->soc_sram__DOT__flash_addr),32);
    bufp->chgIData(oldp+111,(vlSelf->soc_sram__DOT__flash_wdata),32);
    bufp->chgIData(oldp+112,(vlSelf->soc_sram__DOT__flash_rdata),32);
    bufp->chgCData(oldp+113,(vlSelf->soc_sram__DOT__flash_be),4);
    bufp->chgBit(oldp+114,(vlSelf->soc_sram__DOT__caravel_req));
    bufp->chgBit(oldp+115,(vlSelf->soc_sram__DOT__caravel_gnt));
    bufp->chgBit(oldp+116,(vlSelf->soc_sram__DOT__caravel_we));
    bufp->chgBit(oldp+117,(vlSelf->soc_sram__DOT__caravel_rvalid));
    bufp->chgIData(oldp+118,(vlSelf->soc_sram__DOT__caravel_addr),32);
    bufp->chgIData(oldp+119,(vlSelf->soc_sram__DOT__caravel_wdata),32);
    bufp->chgIData(oldp+120,(vlSelf->soc_sram__DOT__caravel_rdata),32);
    bufp->chgCData(oldp+121,(vlSelf->soc_sram__DOT__caravel_be),4);
    bufp->chgBit(oldp+122,(vlSelf->soc_sram__DOT__sram_d_muxed_req));
    bufp->chgBit(oldp+123,(vlSelf->soc_sram__DOT__sram_d_muxed_gnt));
    bufp->chgBit(oldp+124,(vlSelf->soc_sram__DOT__sram_d_muxed_we));
    bufp->chgBit(oldp+125,(vlSelf->soc_sram__DOT__sram_d_muxed_rvalid));
    bufp->chgIData(oldp+126,(vlSelf->soc_sram__DOT__sram_d_muxed_addr),32);
    bufp->chgIData(oldp+127,(vlSelf->soc_sram__DOT__sram_d_muxed_wdata),32);
    bufp->chgIData(oldp+128,(vlSelf->soc_sram__DOT__sram_d_muxed_rdata),32);
    bufp->chgCData(oldp+129,(vlSelf->soc_sram__DOT__sram_d_muxed_be),4);
    bufp->chgCData(oldp+130,(vlSelf->soc_sram__DOT__rf_port1_reg),5);
    bufp->chgCData(oldp+131,(vlSelf->soc_sram__DOT__rf_port2_reg),5);
    bufp->chgCData(oldp+132,(vlSelf->soc_sram__DOT__rf_wr_reg),5);
    bufp->chgIData(oldp+133,(vlSelf->soc_sram__DOT__rf_rs1),32);
    bufp->chgIData(oldp+134,(vlSelf->soc_sram__DOT__rf_rs2),32);
    bufp->chgIData(oldp+135,(vlSelf->soc_sram__DOT__rf_wr_data),32);
    bufp->chgBit(oldp+136,(vlSelf->soc_sram__DOT__rf_wr_en));
    bufp->chgBit(oldp+137,(vlSelf->soc_sram__DOT__timer_intr));
    bufp->chgBit(oldp+138,(vlSelf->soc_sram__DOT__m_ext_intr));
    bufp->chgBit(oldp+139,(vlSelf->soc_sram__DOT__p_int_read));
    bufp->chgBit(oldp+140,(vlSelf->soc_sram__DOT__csr_busy));
    bufp->chgIData(oldp+141,(vlSelf->soc_sram__DOT__mcause),31);
    bufp->chgIData(oldp+142,(vlSelf->soc_sram__DOT__dmem_rdata_1),32);
    bufp->chgIData(oldp+143,(vlSelf->soc_sram__DOT__dmem_rdata_2),32);
    bufp->chgBit(oldp+144,(vlSelf->soc_sram__DOT__dmem_rvalid_1));
    bufp->chgBit(oldp+145,(vlSelf->soc_sram__DOT__is_sram_wrap));
    bufp->chgBit(oldp+146,(vlSelf->soc_sram__DOT__is_sram_wrap_prev));
    bufp->chgCData(oldp+147,(vlSelf->soc_sram__DOT__unused),8);
    bufp->chgIData(oldp+148,(vlSelf->soc_sram__DOT__unused2[0U]),32);
    bufp->chgIData(oldp+149,(vlSelf->soc_sram__DOT__unused2[1U]),32);
    bufp->chgIData(oldp+150,(vlSelf->soc_sram__DOT__unused2[2U]),32);
    bufp->chgIData(oldp+151,(vlSelf->soc_sram__DOT__unused2[3U]),32);
    bufp->chgBit(oldp+152,(vlSelf->soc_sram__DOT__i_core__DOT__clk_i));
    bufp->chgBit(oldp+153,(vlSelf->soc_sram__DOT__i_core__DOT__rst_ni));
    bufp->chgBit(oldp+154,(vlSelf->soc_sram__DOT__i_core__DOT__timer_intr_i));
    bufp->chgBit(oldp+155,(vlSelf->soc_sram__DOT__i_core__DOT__m_ext_intr_i));
    bufp->chgIData(oldp+156,(vlSelf->soc_sram__DOT__i_core__DOT__mcause_i),31);
    bufp->chgBit(oldp+157,(vlSelf->soc_sram__DOT__i_core__DOT__p_int_read_o));
    bufp->chgBit(oldp+158,(vlSelf->soc_sram__DOT__i_core__DOT__csr_busy_o));
    bufp->chgBit(oldp+159,(vlSelf->soc_sram__DOT__i_core__DOT__boot_sel_i));
    bufp->chgBit(oldp+160,(vlSelf->soc_sram__DOT__i_core__DOT__imem_req_o));
    bufp->chgBit(oldp+161,(vlSelf->soc_sram__DOT__i_core__DOT__imem_gnt_i));
    bufp->chgIData(oldp+162,(vlSelf->soc_sram__DOT__i_core__DOT__imem_addr_o),32);
    bufp->chgBit(oldp+163,(vlSelf->soc_sram__DOT__i_core__DOT__imem_we_o));
    bufp->chgCData(oldp+164,(vlSelf->soc_sram__DOT__i_core__DOT__imem_be_o),4);
    bufp->chgIData(oldp+165,(vlSelf->soc_sram__DOT__i_core__DOT__imem_wdata_o),32);
    bufp->chgBit(oldp+166,(vlSelf->soc_sram__DOT__i_core__DOT__imem_rvalid_i));
    bufp->chgIData(oldp+167,(vlSelf->soc_sram__DOT__i_core__DOT__imem_rdata_i),32);
    bufp->chgCData(oldp+168,(vlSelf->soc_sram__DOT__i_core__DOT__rf_port1_reg_o),5);
    bufp->chgCData(oldp+169,(vlSelf->soc_sram__DOT__i_core__DOT__rf_port2_reg_o),5);
    bufp->chgBit(oldp+170,(vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_en_o));
    bufp->chgCData(oldp+171,(vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_reg_o),5);
    bufp->chgIData(oldp+172,(vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_data_o),32);
    bufp->chgIData(oldp+173,(vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i),32);
    bufp->chgIData(oldp+174,(vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i),32);
    bufp->chgBit(oldp+175,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_req_o));
    bufp->chgBit(oldp+176,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_gnt_i));
    bufp->chgIData(oldp+177,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_addr_o),32);
    bufp->chgBit(oldp+178,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_we_o));
    bufp->chgCData(oldp+179,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_be_o),4);
    bufp->chgIData(oldp+180,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_wdata_o),32);
    bufp->chgBit(oldp+181,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rvalid_i));
    bufp->chgIData(oldp+182,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rdata_i),32);
    bufp->chgIData(oldp+183,((IData)((vlSelf->soc_sram__DOT__i_core__DOT__fetch_state 
                                      >> 0x20U))),32);
    bufp->chgIData(oldp+184,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__fetch_state)),32);
    bufp->chgBit(oldp+185,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                                  >> 9U))));
    bufp->chgCData(oldp+186,((7U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                                    >> 6U))),3);
    bufp->chgCData(oldp+187,((0xfU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                                      >> 2U))),4);
    bufp->chgCData(oldp+188,((3U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U])),2);
    bufp->chgCData(oldp+189,((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                              >> 0x1eU)),2);
    bufp->chgIData(oldp+190,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+191,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+192,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+193,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+194,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+195,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+196,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                         >> 0x1eU))),32);
    bufp->chgBit(oldp+197,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                  >> 0x1dU))));
    bufp->chgCData(oldp+198,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                    >> 0x1bU))),2);
    bufp->chgBit(oldp+199,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+200,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+201,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                  >> 0x18U))));
    bufp->chgCData(oldp+202,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                    >> 0x16U))),2);
    bufp->chgBit(oldp+203,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                  >> 0x15U))));
    bufp->chgBit(oldp+204,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                  >> 0x14U))));
    bufp->chgSData(oldp+205,((0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                        >> 8U))),12);
    bufp->chgCData(oldp+206,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                    >> 6U))),2);
    bufp->chgCData(oldp+207,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                       >> 1U))),5);
    bufp->chgBit(oldp+208,((1U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U])));
    bufp->chgIData(oldp+209,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[3U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                                            >> 7U))),32);
    bufp->chgIData(oldp+210,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                            >> 7U))),32);
    bufp->chgBit(oldp+211,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                  >> 6U))));
    bufp->chgCData(oldp+212,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                    >> 4U))),2);
    bufp->chgBit(oldp+213,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                  >> 3U))));
    bufp->chgBit(oldp+214,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                  >> 2U))));
    bufp->chgCData(oldp+215,((3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U])),2);
    bufp->chgIData(oldp+216,(vlSelf->soc_sram__DOT__i_core__DOT__exec_state[0U]),32);
    bufp->chgIData(oldp+217,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_state[4U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
                                            >> 7U))),32);
    bufp->chgIData(oldp+218,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                            >> 7U))),32);
    bufp->chgBit(oldp+219,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                  >> 6U))));
    bufp->chgCData(oldp+220,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                    >> 4U))),2);
    bufp->chgBit(oldp+221,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                  >> 3U))));
    bufp->chgBit(oldp+222,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                  >> 2U))));
    bufp->chgCData(oldp+223,((3U & vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U])),2);
    bufp->chgIData(oldp+224,(vlSelf->soc_sram__DOT__i_core__DOT__mem_state[1U]),32);
    bufp->chgIData(oldp+225,(vlSelf->soc_sram__DOT__i_core__DOT__mem_state[0U]),32);
    bufp->chgBit(oldp+226,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl) 
                                  >> 1U))));
    bufp->chgBit(oldp+227,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl))));
    bufp->chgBit(oldp+228,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl) 
                                  >> 1U))));
    bufp->chgBit(oldp+229,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl))));
    bufp->chgBit(oldp+230,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl) 
                                  >> 1U))));
    bufp->chgBit(oldp+231,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl))));
    bufp->chgBit(oldp+232,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl) 
                                  >> 1U))));
    bufp->chgBit(oldp+233,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl))));
    bufp->chgBit(oldp+234,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_ctrl) 
                                  >> 1U))));
    bufp->chgBit(oldp+235,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_ctrl))));
    bufp->chgBit(oldp+236,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+237,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+238,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+239,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+240,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+241,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+242,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+243,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U])),5);
    bufp->chgBit(oldp+244,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+245,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+246,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+247,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+248,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+249,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+250,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+251,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U])),5);
    bufp->chgBit(oldp+252,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+253,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+254,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+255,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+256,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+257,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+258,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+259,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U])),5);
    bufp->chgBit(oldp+260,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+261,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+262,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+263,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+264,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+265,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+266,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+267,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U])),5);
    bufp->chgBit(oldp+268,(vlSelf->soc_sram__DOT__i_core__DOT__fetch_valid));
    bufp->chgBit(oldp+269,(vlSelf->soc_sram__DOT__i_core__DOT__decode_valid));
    bufp->chgBit(oldp+270,(vlSelf->soc_sram__DOT__i_core__DOT__exec_valid));
    bufp->chgBit(oldp+271,(vlSelf->soc_sram__DOT__i_core__DOT__mem_valid));
    bufp->chgBit(oldp+272,(vlSelf->soc_sram__DOT__i_core__DOT__load_use_stall));
    bufp->chgBit(oldp+273,(vlSelf->soc_sram__DOT__i_core__DOT__csr_hold));
    bufp->chgBit(oldp+274,(vlSelf->soc_sram__DOT__i_core__DOT__imem_stall));
    bufp->chgBit(oldp+275,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_stall));
    bufp->chgBit(oldp+276,(vlSelf->soc_sram__DOT__i_core__DOT__branch_taken));
    bufp->chgBit(oldp+277,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+278,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+279,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+280,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+281,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data)),32);
    bufp->chgBit(oldp+282,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+283,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+284,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+285,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+286,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data)),32);
    bufp->chgBit(oldp+287,(vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel));
    bufp->chgBit(oldp+288,(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel));
    bufp->chgIData(oldp+289,(vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr),32);
    bufp->chgIData(oldp+290,(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr),32);
    bufp->chgIData(oldp+291,(vlSelf->soc_sram__DOT__i_core__DOT__pre_intr_pc),32);
    bufp->chgIData(oldp+292,(vlSelf->soc_sram__DOT__i_core__DOT__csr_out),32);
    bufp->chgBit(oldp+293,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd));
    bufp->chgBit(oldp+294,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_wr));
    bufp->chgBit(oldp+295,(vlSelf->soc_sram__DOT__i_core__DOT__csr_flush));
    bufp->chgBit(oldp+296,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__clk_i));
    bufp->chgBit(oldp+297,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rst_ni));
    bufp->chgBit(oldp+298,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_wr_i));
    bufp->chgSData(oldp+299,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__addr_i),12);
    bufp->chgCData(oldp+300,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mode_sel_i),2);
    bufp->chgCData(oldp+301,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_i),5);
    bufp->chgBit(oldp+302,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_sel_i));
    bufp->chgIData(oldp+303,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rs1),32);
    bufp->chgBit(oldp+304,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__timer_intr_i));
    bufp->chgBit(oldp+305,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__m_ext_intr_i));
    bufp->chgBit(oldp+306,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__stall_i));
    bufp->chgBit(oldp+307,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mret_i));
    bufp->chgBit(oldp+308,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pcSource));
    bufp->chgIData(oldp+309,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__next_pc),32);
    bufp->chgIData(oldp+310,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause_i),31);
    bufp->chgBit(oldp+311,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_hold_i));
    bufp->chgBit(oldp+312,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_flush_o));
    bufp->chgIData(oldp+313,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_data_o),32);
    bufp->chgIData(oldp+314,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr),32);
    bufp->chgBit(oldp+315,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel));
    bufp->chgBit(oldp+316,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__p_int_read_o));
    bufp->chgBit(oldp+317,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_busy_o));
    bufp->chgCData(oldp+318,((3U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state) 
                                    >> 3U))),2);
    bufp->chgCData(oldp+319,((7U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))),3);
    bufp->chgIData(oldp+320,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mstatus),32);
    bufp->chgIData(oldp+321,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mie),32);
    bufp->chgIData(oldp+322,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mtvec),32);
    bufp->chgIData(oldp+323,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mepc),32);
    bufp->chgIData(oldp+324,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause),32);
    bufp->chgIData(oldp+325,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__write_data),32);
    bufp->chgBit(oldp+326,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__clk_i));
    bufp->chgBit(oldp+327,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rst_ni));
    bufp->chgBit(oldp+328,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_i));
    bufp->chgIData(oldp+329,((IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__fetch_state_i 
                                      >> 0x20U))),32);
    bufp->chgIData(oldp+330,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__fetch_state_i)),32);
    bufp->chgIData(oldp+331,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__inst_i),32);
    bufp->chgBit(oldp+332,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i) 
                                  >> 1U))));
    bufp->chgBit(oldp+333,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i))));
    bufp->chgCData(oldp+334,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port1_reg_o),5);
    bufp->chgCData(oldp+335,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port2_reg_o),5);
    bufp->chgIData(oldp+336,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs1_i),32);
    bufp->chgIData(oldp+337,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs2_i),32);
    bufp->chgBit(oldp+338,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_o));
    bufp->chgBit(oldp+339,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                                  >> 9U))));
    bufp->chgCData(oldp+340,((7U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                                    >> 6U))),3);
    bufp->chgCData(oldp+341,((0xfU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                                      >> 2U))),4);
    bufp->chgCData(oldp+342,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])),2);
    bufp->chgCData(oldp+343,((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[7U] 
                              >> 0x1eU)),2);
    bufp->chgIData(oldp+344,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[7U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[6U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+345,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[6U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[5U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+346,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[5U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[4U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+347,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[4U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[3U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+348,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[3U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[2U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+349,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[2U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[1U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+350,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[1U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                         >> 0x1eU))),32);
    bufp->chgBit(oldp+351,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 0x1dU))));
    bufp->chgCData(oldp+352,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                    >> 0x1bU))),2);
    bufp->chgBit(oldp+353,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+354,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+355,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 0x18U))));
    bufp->chgCData(oldp+356,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                    >> 0x16U))),2);
    bufp->chgBit(oldp+357,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 0x15U))));
    bufp->chgBit(oldp+358,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                  >> 0x14U))));
    bufp->chgSData(oldp+359,((0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                        >> 8U))),12);
    bufp->chgCData(oldp+360,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                    >> 6U))),2);
    bufp->chgCData(oldp+361,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                       >> 1U))),5);
    bufp->chgBit(oldp+362,((1U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U])));
    bufp->chgBit(oldp+363,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+364,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+365,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+366,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+367,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+368,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+369,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+370,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U])),5);
    bufp->chgBit(oldp+371,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__pc_src));
    bufp->chgCData(oldp+372,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__branch_op),3);
    bufp->chgCData(oldp+373,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_op),4);
    bufp->chgCData(oldp+374,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_a_src),2);
    bufp->chgCData(oldp+375,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_b_src),2);
    bufp->chgBit(oldp+376,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en));
    bufp->chgCData(oldp+377,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_src),2);
    bufp->chgBit(oldp+378,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_write));
    bufp->chgBit(oldp+379,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_read));
    bufp->chgBit(oldp+380,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_sign));
    bufp->chgCData(oldp+381,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_width),2);
    bufp->chgBit(oldp+382,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs1_used));
    bufp->chgBit(oldp+383,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs2_used));
    bufp->chgBit(oldp+384,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_used));
    bufp->chgBit(oldp+385,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr));
    bufp->chgBit(oldp+386,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_mret));
    bufp->chgIData(oldp+387,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed),32);
    bufp->chgIData(oldp+388,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__s_immed),32);
    bufp->chgIData(oldp+389,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__b_immed),32);
    bufp->chgIData(oldp+390,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__u_immed),32);
    bufp->chgIData(oldp+391,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__j_immed),32);
    bufp->chgCData(oldp+392,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_addr),5);
    bufp->chgIData(oldp+393,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_i),32);
    bufp->chgBit(oldp+394,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__pc_src_o));
    bufp->chgCData(oldp+395,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o),3);
    bufp->chgCData(oldp+396,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o),4);
    bufp->chgCData(oldp+397,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o),2);
    bufp->chgCData(oldp+398,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o),2);
    bufp->chgBit(oldp+399,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs1_valid_o));
    bufp->chgBit(oldp+400,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs2_valid_o));
    bufp->chgBit(oldp+401,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rd_valid_o));
    bufp->chgBit(oldp+402,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_en_o));
    bufp->chgCData(oldp+403,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o),2);
    bufp->chgBit(oldp+404,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_write_o));
    bufp->chgBit(oldp+405,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_read_o));
    bufp->chgBit(oldp+406,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_sign_o));
    bufp->chgCData(oldp+407,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_width_o),2);
    bufp->chgBit(oldp+408,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_wr_o));
    bufp->chgBit(oldp+409,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_mret_o));
    bufp->chgCData(oldp+410,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode),7);
    bufp->chgCData(oldp+411,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3),3);
    bufp->chgCData(oldp+412,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7),7);
    bufp->chgBit(oldp+413,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_en));
    bufp->chgBit(oldp+414,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_unused));
    bufp->chgBit(oldp+415,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7_unused));
    bufp->chgIData(oldp+416,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_i),32);
    bufp->chgIData(oldp+417,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__i_immed_o),32);
    bufp->chgIData(oldp+418,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__s_immed_o),32);
    bufp->chgIData(oldp+419,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__b_immed_o),32);
    bufp->chgIData(oldp+420,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__u_immed_o),32);
    bufp->chgIData(oldp+421,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__j_immed_o),32);
    bufp->chgBit(oldp+422,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_unused));
    bufp->chgBit(oldp+423,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__clk_i));
    bufp->chgBit(oldp+424,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rst_ni));
    bufp->chgBit(oldp+425,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rd_i));
    bufp->chgBit(oldp+426,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__wr_i));
    bufp->chgBit(oldp+427,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_i));
    bufp->chgBit(oldp+428,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_i));
    bufp->chgBit(oldp+429,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o));
    bufp->chgBit(oldp+430,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o));
    bufp->chgBit(oldp+431,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__NS));
    bufp->chgBit(oldp+432,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS));
    bufp->chgBit(oldp+433,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf));
    bufp->chgBit(oldp+434,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf));
    bufp->chgBit(oldp+435,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__outstanding_read));
    bufp->chgBit(oldp+436,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__clk_i));
    bufp->chgBit(oldp+437,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__rst_ni));
    bufp->chgBit(oldp+438,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_i));
    bufp->chgBit(oldp+439,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
                                  >> 9U))));
    bufp->chgCData(oldp+440,((7U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
                                    >> 6U))),3);
    bufp->chgCData(oldp+441,((0xfU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
                                      >> 2U))),4);
    bufp->chgCData(oldp+442,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U])),2);
    bufp->chgCData(oldp+443,((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[7U] 
                              >> 0x1eU)),2);
    bufp->chgIData(oldp+444,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[7U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[6U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+445,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[6U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[5U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+446,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[5U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[4U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+447,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[4U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[3U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+448,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[3U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[2U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+449,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[2U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[1U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+450,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[1U] 
                               << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                         >> 0x1eU))),32);
    bufp->chgBit(oldp+451,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                  >> 0x1dU))));
    bufp->chgCData(oldp+452,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                    >> 0x1bU))),2);
    bufp->chgBit(oldp+453,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+454,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+455,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                  >> 0x18U))));
    bufp->chgCData(oldp+456,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                    >> 0x16U))),2);
    bufp->chgBit(oldp+457,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                  >> 0x15U))));
    bufp->chgBit(oldp+458,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                  >> 0x14U))));
    bufp->chgSData(oldp+459,((0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                        >> 8U))),12);
    bufp->chgCData(oldp+460,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                    >> 6U))),2);
    bufp->chgCData(oldp+461,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                       >> 1U))),5);
    bufp->chgBit(oldp+462,((1U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U])));
    bufp->chgBit(oldp+463,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+464,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+465,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+466,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+467,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+468,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+469,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+470,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U])),5);
    bufp->chgIData(oldp+471,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__csr_read_i),32);
    bufp->chgBit(oldp+472,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__stage_ctrl_i) 
                                  >> 1U))));
    bufp->chgBit(oldp+473,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__stage_ctrl_i))));
    bufp->chgBit(oldp+474,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_sel_o));
    bufp->chgIData(oldp+475,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_addr_o),32);
    bufp->chgBit(oldp+476,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_o));
    bufp->chgIData(oldp+477,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[3U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[2U] 
                                            >> 7U))),32);
    bufp->chgIData(oldp+478,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[2U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                            >> 7U))),32);
    bufp->chgBit(oldp+479,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                  >> 6U))));
    bufp->chgCData(oldp+480,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                    >> 4U))),2);
    bufp->chgBit(oldp+481,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                  >> 3U))));
    bufp->chgBit(oldp+482,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                  >> 2U))));
    bufp->chgCData(oldp+483,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U])),2);
    bufp->chgIData(oldp+484,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[0U]),32);
    bufp->chgBit(oldp+485,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+486,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+487,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+488,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+489,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+490,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+491,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+492,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U])),5);
    bufp->chgBit(oldp+493,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read_ao));
    bufp->chgBit(oldp+494,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write_ao));
    bufp->chgCData(oldp+495,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb_ao),4);
    bufp->chgIData(oldp+496,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr_ao),32);
    bufp->chgIData(oldp+497,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_data_ao),32);
    bufp->chgIData(oldp+498,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in),32);
    bufp->chgIData(oldp+499,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in),32);
    bufp->chgIData(oldp+500,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_out),32);
    bufp->chgBit(oldp+501,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__branch_taken));
    bufp->chgIData(oldp+502,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr),32);
    bufp->chgIData(oldp+503,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_wdata),32);
    bufp->chgCData(oldp+504,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb),4);
    bufp->chgBit(oldp+505,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read));
    bufp->chgBit(oldp+506,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write));
    bufp->chgBit(oldp+507,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_illegal));
    bufp->chgIData(oldp+508,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__last_dmem_addr),32);
    bufp->chgBit(oldp+509,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid));
    bufp->chgCData(oldp+510,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__op_i),4);
    bufp->chgIData(oldp+511,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__a_i),32);
    bufp->chgIData(oldp+512,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__b_i),32);
    bufp->chgIData(oldp+513,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o),32);
    bufp->chgCData(oldp+514,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__op_i),3);
    bufp->chgIData(oldp+515,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs1_data_i),32);
    bufp->chgIData(oldp+516,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs2_data_i),32);
    bufp->chgBit(oldp+517,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__taken_o));
    bufp->chgBit(oldp+518,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__eq));
    bufp->chgBit(oldp+519,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__lt));
    bufp->chgBit(oldp+520,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__ltu));
    bufp->chgCData(oldp+521,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_width_i),2);
    bufp->chgIData(oldp+522,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_data_i),32);
    bufp->chgIData(oldp+523,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_addr_i),32);
    bufp->chgBit(oldp+524,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_read_i));
    bufp->chgBit(oldp+525,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_i));
    bufp->chgIData(oldp+526,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_word_addr_ao),32);
    bufp->chgIData(oldp+527,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_data_ao),32);
    bufp->chgCData(oldp+528,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_strobe_ao),4);
    bufp->chgBit(oldp+529,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_illegal_ao));
    bufp->chgBit(oldp+530,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr));
    bufp->chgCData(oldp+531,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_width),2);
    bufp->chgIData(oldp+532,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_write_data),32);
    bufp->chgCData(oldp+533,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx),2);
    bufp->chgCData(oldp+534,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe),4);
    bufp->chgIData(oldp+535,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data),32);
    bufp->chgBit(oldp+536,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__clk_i));
    bufp->chgBit(oldp+537,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__rst_ni));
    bufp->chgBit(oldp+538,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__boot_sel_i));
    bufp->chgBit(oldp+539,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_i));
    bufp->chgBit(oldp+540,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_sel_i));
    bufp->chgIData(oldp+541,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr_i),32);
    bufp->chgIData(oldp+542,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_addr_i),32);
    bufp->chgBit(oldp+543,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_desync_i));
    bufp->chgBit(oldp+544,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_taken_o));
    bufp->chgBit(oldp+545,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i) 
                                  >> 1U))));
    bufp->chgBit(oldp+546,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i))));
    bufp->chgIData(oldp+547,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__mem_addr_o),32);
    bufp->chgBit(oldp+548,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__valid_o));
    bufp->chgIData(oldp+549,((IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__fetch_state_o 
                                      >> 0x20U))),32);
    bufp->chgIData(oldp+550,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__fetch_state_o)),32);
    bufp->chgIData(oldp+551,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o),32);
    bufp->chgIData(oldp+552,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next),32);
    bufp->chgIData(oldp+553,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_out),32);
    bufp->chgIData(oldp+554,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4),32);
    bufp->chgIData(oldp+555,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_saved),32);
    bufp->chgIData(oldp+556,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr),32);
    bufp->chgBit(oldp+557,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_ctrl_saved));
    bufp->chgBit(oldp+558,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_saved));
    bufp->chgBit(oldp+559,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel));
    bufp->chgBit(oldp+560,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__clk_i));
    bufp->chgBit(oldp+561,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__rst_ni));
    bufp->chgBit(oldp+562,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__boot_sel_i));
    bufp->chgBit(oldp+563,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i));
    bufp->chgIData(oldp+564,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__next_pc_i),32);
    bufp->chgIData(oldp+565,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_o),32);
    bufp->chgIData(oldp+566,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__reset_addr),32);
    bufp->chgIData(oldp+567,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__last_pc),32);
    bufp->chgIData(oldp+568,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_raw),32);
    bufp->chgBit(oldp+569,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+570,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+571,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+572,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+573,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i)),32);
    bufp->chgBit(oldp+574,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+575,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+576,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+577,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+578,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i)),32);
    bufp->chgBit(oldp+579,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+580,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+581,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+582,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+583,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+584,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+585,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+586,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U])),5);
    bufp->chgBit(oldp+587,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao));
    bufp->chgBit(oldp+588,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+589,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+590,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+591,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+592,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+593,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+594,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+595,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U])),5);
    bufp->chgBit(oldp+596,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_lus));
    bufp->chgBit(oldp+597,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_lus));
    bufp->chgIData(oldp+598,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_updated),32);
    bufp->chgIData(oldp+599,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_updated),32);
    bufp->chgBit(oldp+600,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+601,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+602,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+603,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+604,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i)),32);
    bufp->chgBit(oldp+605,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+606,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+607,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+608,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+609,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i)),32);
    bufp->chgCData(oldp+610,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_i),5);
    bufp->chgIData(oldp+611,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_i),32);
    bufp->chgBit(oldp+612,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_used_i));
    bufp->chgIData(oldp+613,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_ao),32);
    bufp->chgBit(oldp+614,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__load_use_hazard_ao));
    bufp->chgBit(oldp+615,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_conflict));
    bufp->chgBit(oldp+616,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_conflict));
    bufp->chgBit(oldp+617,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_raw));
    bufp->chgBit(oldp+618,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_raw));
    bufp->chgIData(oldp+619,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__data_updated_mem),32);
    bufp->chgBit(oldp+620,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+621,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+622,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+623,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+624,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i)),32);
    bufp->chgBit(oldp+625,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+626,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+627,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+628,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+629,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i)),32);
    bufp->chgCData(oldp+630,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_i),5);
    bufp->chgIData(oldp+631,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_i),32);
    bufp->chgBit(oldp+632,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_used_i));
    bufp->chgIData(oldp+633,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_ao),32);
    bufp->chgBit(oldp+634,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__load_use_hazard_ao));
    bufp->chgBit(oldp+635,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_conflict));
    bufp->chgBit(oldp+636,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_conflict));
    bufp->chgBit(oldp+637,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_raw));
    bufp->chgBit(oldp+638,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_raw));
    bufp->chgIData(oldp+639,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__data_updated_mem),32);
    bufp->chgBit(oldp+640,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__clk_i));
    bufp->chgBit(oldp+641,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__rst_ni));
    bufp->chgBit(oldp+642,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__imem_stall_i));
    bufp->chgBit(oldp+643,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__dmem_stall_i));
    bufp->chgBit(oldp+644,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch_taken_i));
    bufp->chgBit(oldp+645,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_flush_i));
    bufp->chgBit(oldp+646,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_mret_i));
    bufp->chgBit(oldp+647,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__load_use_stall_i));
    bufp->chgBit(oldp+648,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao) 
                                  >> 1U))));
    bufp->chgBit(oldp+649,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao))));
    bufp->chgBit(oldp+650,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao) 
                                  >> 1U))));
    bufp->chgBit(oldp+651,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao))));
    bufp->chgBit(oldp+652,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__execute_ctrl_ao) 
                                  >> 1U))));
    bufp->chgBit(oldp+653,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__execute_ctrl_ao))));
    bufp->chgBit(oldp+654,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__memory_ctrl_ao) 
                                  >> 1U))));
    bufp->chgBit(oldp+655,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__memory_ctrl_ao))));
    bufp->chgBit(oldp+656,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__writeback_ctrl_ao) 
                                  >> 1U))));
    bufp->chgBit(oldp+657,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__writeback_ctrl_ao))));
    bufp->chgBit(oldp+658,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_hold_o));
    bufp->chgBit(oldp+659,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess));
    bufp->chgBit(oldp+660,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch));
    bufp->chgCData(oldp+661,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__PS),3);
    bufp->chgCData(oldp+662,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS),3);
    bufp->chgBit(oldp+663,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__clk_i));
    bufp->chgBit(oldp+664,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rst_ni));
    bufp->chgBit(oldp+665,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rd_i));
    bufp->chgBit(oldp+666,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__wr_i));
    bufp->chgBit(oldp+667,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_i));
    bufp->chgBit(oldp+668,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_i));
    bufp->chgBit(oldp+669,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o));
    bufp->chgBit(oldp+670,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o));
    bufp->chgBit(oldp+671,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__NS));
    bufp->chgBit(oldp+672,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS));
    bufp->chgBit(oldp+673,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf));
    bufp->chgBit(oldp+674,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf));
    bufp->chgBit(oldp+675,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__outstanding_read));
    bufp->chgBit(oldp+676,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__clk_i));
    bufp->chgBit(oldp+677,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__rst_ni));
    bufp->chgBit(oldp+678,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_i));
    bufp->chgIData(oldp+679,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[3U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[2U] 
                                            >> 7U))),32);
    bufp->chgIData(oldp+680,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[2U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                            >> 7U))),32);
    bufp->chgBit(oldp+681,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                  >> 6U))));
    bufp->chgCData(oldp+682,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                    >> 4U))),2);
    bufp->chgBit(oldp+683,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                  >> 3U))));
    bufp->chgBit(oldp+684,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                  >> 2U))));
    bufp->chgCData(oldp+685,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U])),2);
    bufp->chgIData(oldp+686,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[0U]),32);
    bufp->chgBit(oldp+687,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+688,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+689,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+690,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+691,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+692,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+693,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+694,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U])),5);
    bufp->chgBit(oldp+695,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__stage_ctrl_i) 
                                  >> 1U))));
    bufp->chgBit(oldp+696,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__stage_ctrl_i))));
    bufp->chgIData(oldp+697,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__dmem_rdata_i),32);
    bufp->chgBit(oldp+698,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_o));
    bufp->chgIData(oldp+699,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[4U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[3U] 
                                            >> 7U))),32);
    bufp->chgIData(oldp+700,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[3U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                            >> 7U))),32);
    bufp->chgBit(oldp+701,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                  >> 6U))));
    bufp->chgCData(oldp+702,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                    >> 4U))),2);
    bufp->chgBit(oldp+703,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                  >> 3U))));
    bufp->chgBit(oldp+704,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                  >> 2U))));
    bufp->chgCData(oldp+705,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U])),2);
    bufp->chgIData(oldp+706,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[1U]),32);
    bufp->chgIData(oldp+707,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[0U]),32);
    bufp->chgBit(oldp+708,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+709,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+710,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+711,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+712,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+713,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+714,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+715,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U])),5);
    bufp->chgBit(oldp+716,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+717,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+718,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+719,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+720,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa)),32);
    bufp->chgCData(oldp+721,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset),2);
    bufp->chgIData(oldp+722,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__pre_data),32);
    bufp->chgBit(oldp+723,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign));
    bufp->chgBit(oldp+724,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext));
    bufp->chgCData(oldp+725,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[0]),8);
    bufp->chgCData(oldp+726,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[1]),8);
    bufp->chgCData(oldp+727,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[2]),8);
    bufp->chgCData(oldp+728,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[3]),8);
    bufp->chgSData(oldp+729,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[0]),16);
    bufp->chgSData(oldp+730,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[1]),16);
    bufp->chgBit(oldp+731,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__valid_i));
    bufp->chgIData(oldp+732,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[4U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[3U] 
                                            >> 7U))),32);
    bufp->chgIData(oldp+733,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[3U] 
                               << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                            >> 7U))),32);
    bufp->chgBit(oldp+734,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                  >> 6U))));
    bufp->chgCData(oldp+735,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                    >> 4U))),2);
    bufp->chgBit(oldp+736,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                  >> 3U))));
    bufp->chgBit(oldp+737,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                  >> 2U))));
    bufp->chgCData(oldp+738,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U])),2);
    bufp->chgIData(oldp+739,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[1U]),32);
    bufp->chgIData(oldp+740,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[0U]),32);
    bufp->chgBit(oldp+741,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+742,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
                                       >> 0xcU))),5);
    bufp->chgIData(oldp+743,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
                               << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                            >> 0xcU))),32);
    bufp->chgBit(oldp+744,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+745,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                       >> 6U))),5);
    bufp->chgIData(oldp+746,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                               << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U] 
                                            >> 6U))),32);
    bufp->chgBit(oldp+747,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U] 
                                  >> 5U))));
    bufp->chgCData(oldp+748,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U])),5);
    bufp->chgBit(oldp+749,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__stage_ctrl_i) 
                                  >> 1U))));
    bufp->chgBit(oldp+750,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__stage_ctrl_i))));
    bufp->chgBit(oldp+751,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+752,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+753,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                          >> 0x25U)))));
    bufp->chgCData(oldp+754,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                               >> 0x20U)))),5);
    bufp->chgIData(oldp+755,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa)),32);
    bufp->chgBit(oldp+756,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_en_oa));
    bufp->chgCData(oldp+757,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_reg_oa),5);
    bufp->chgIData(oldp+758,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data_oa),32);
    bufp->chgIData(oldp+759,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data),32);
    bufp->chgBit(oldp+760,(vlSelf->soc_sram__DOT__i_memory__DOT__clk_i));
    bufp->chgBit(oldp+761,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_en_i));
    bufp->chgCData(oldp+762,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_strobe_i),4);
    bufp->chgSData(oldp+763,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_addr_i),16);
    bufp->chgIData(oldp+764,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_i),32);
    bufp->chgBit(oldp+765,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_en_i));
    bufp->chgCData(oldp+766,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_strobe_i),4);
    bufp->chgSData(oldp+767,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_addr_i),16);
    bufp->chgIData(oldp+768,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_i),32);
    bufp->chgIData(oldp+769,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_o),32);
    bufp->chgIData(oldp+770,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o),32);
    bufp->chgIData(oldp+771,(vlSelf->soc_sram__DOT__i_memory__DOT__i),32);
    bufp->chgBit(oldp+772,(vlSelf->soc_sram__DOT__i_reg_file__DOT__clk_i));
    bufp->chgCData(oldp+773,(vlSelf->soc_sram__DOT__i_reg_file__DOT__read1_i),5);
    bufp->chgCData(oldp+774,(vlSelf->soc_sram__DOT__i_reg_file__DOT__read2_i),5);
    bufp->chgCData(oldp+775,(vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_reg_i),5);
    bufp->chgIData(oldp+776,(vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_data_i),32);
    bufp->chgBit(oldp+777,(vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_en_i));
    bufp->chgIData(oldp+778,(vlSelf->soc_sram__DOT__i_reg_file__DOT__data1_ao),32);
    bufp->chgIData(oldp+779,(vlSelf->soc_sram__DOT__i_reg_file__DOT__data2_ao),32);
    bufp->chgIData(oldp+780,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[0]),32);
    bufp->chgIData(oldp+781,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[1]),32);
    bufp->chgIData(oldp+782,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[2]),32);
    bufp->chgIData(oldp+783,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[3]),32);
    bufp->chgIData(oldp+784,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[4]),32);
    bufp->chgIData(oldp+785,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[5]),32);
    bufp->chgIData(oldp+786,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[6]),32);
    bufp->chgIData(oldp+787,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[7]),32);
    bufp->chgIData(oldp+788,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[8]),32);
    bufp->chgIData(oldp+789,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[9]),32);
    bufp->chgIData(oldp+790,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[10]),32);
    bufp->chgIData(oldp+791,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[11]),32);
    bufp->chgIData(oldp+792,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[12]),32);
    bufp->chgIData(oldp+793,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[13]),32);
    bufp->chgIData(oldp+794,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[14]),32);
    bufp->chgIData(oldp+795,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[15]),32);
    bufp->chgIData(oldp+796,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[16]),32);
    bufp->chgIData(oldp+797,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[17]),32);
    bufp->chgIData(oldp+798,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[18]),32);
    bufp->chgIData(oldp+799,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[19]),32);
    bufp->chgIData(oldp+800,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[20]),32);
    bufp->chgIData(oldp+801,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[21]),32);
    bufp->chgIData(oldp+802,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[22]),32);
    bufp->chgIData(oldp+803,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[23]),32);
    bufp->chgIData(oldp+804,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[24]),32);
    bufp->chgIData(oldp+805,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[25]),32);
    bufp->chgIData(oldp+806,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[26]),32);
    bufp->chgIData(oldp+807,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[27]),32);
    bufp->chgIData(oldp+808,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[28]),32);
    bufp->chgIData(oldp+809,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[29]),32);
    bufp->chgIData(oldp+810,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[30]),32);
    bufp->chgIData(oldp+811,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[31]),32);
    bufp->chgBit(oldp+812,(vlSelf->soc_sram__DOT__sram__DOT__clk_i));
    bufp->chgBit(oldp+813,(vlSelf->soc_sram__DOT__sram__DOT__rst_ni));
    bufp->chgBit(oldp+814,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_req_i));
    bufp->chgBit(oldp+815,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_gnt_o));
    bufp->chgIData(oldp+816,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_addr_i),32);
    bufp->chgBit(oldp+817,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_we_i));
    bufp->chgCData(oldp+818,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_be_i),4);
    bufp->chgIData(oldp+819,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_wdata_i),32);
    bufp->chgBit(oldp+820,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_rvalid_o));
    bufp->chgIData(oldp+821,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o),32);
    bufp->chgBit(oldp+822,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_req_i));
    bufp->chgBit(oldp+823,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_gnt_o));
    bufp->chgIData(oldp+824,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_addr_i),32);
    bufp->chgBit(oldp+825,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_we_i));
    bufp->chgCData(oldp+826,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_be_i),4);
    bufp->chgIData(oldp+827,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_wdata_i),32);
    bufp->chgBit(oldp+828,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_rvalid_o));
    bufp->chgIData(oldp+829,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o),32);
    bufp->chgBit(oldp+830,(vlSelf->soc_sram__DOT__sram__DOT__illegal_memory_o));
    bufp->chgIData(oldp+831,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0]),32);
    bufp->chgIData(oldp+832,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[1]),32);
    bufp->chgIData(oldp+833,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[2]),32);
    bufp->chgIData(oldp+834,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[3]),32);
    bufp->chgIData(oldp+835,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[4]),32);
    bufp->chgIData(oldp+836,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[5]),32);
    bufp->chgIData(oldp+837,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[6]),32);
    bufp->chgIData(oldp+838,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[7]),32);
    bufp->chgIData(oldp+839,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[8]),32);
    bufp->chgIData(oldp+840,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[9]),32);
    bufp->chgIData(oldp+841,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[10]),32);
    bufp->chgIData(oldp+842,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[11]),32);
    bufp->chgIData(oldp+843,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[12]),32);
    bufp->chgIData(oldp+844,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[13]),32);
    bufp->chgIData(oldp+845,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[14]),32);
    bufp->chgIData(oldp+846,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[15]),32);
    bufp->chgIData(oldp+847,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[16]),32);
    bufp->chgIData(oldp+848,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[17]),32);
    bufp->chgIData(oldp+849,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[18]),32);
    bufp->chgIData(oldp+850,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[19]),32);
    bufp->chgIData(oldp+851,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[20]),32);
    bufp->chgIData(oldp+852,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[21]),32);
    bufp->chgIData(oldp+853,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[22]),32);
    bufp->chgIData(oldp+854,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[23]),32);
    bufp->chgIData(oldp+855,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0]),32);
    bufp->chgIData(oldp+856,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[1]),32);
    bufp->chgIData(oldp+857,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[2]),32);
    bufp->chgIData(oldp+858,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[3]),32);
    bufp->chgIData(oldp+859,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[4]),32);
    bufp->chgIData(oldp+860,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[5]),32);
    bufp->chgIData(oldp+861,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[6]),32);
    bufp->chgIData(oldp+862,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[7]),32);
    bufp->chgIData(oldp+863,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[8]),32);
    bufp->chgIData(oldp+864,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[9]),32);
    bufp->chgIData(oldp+865,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[10]),32);
    bufp->chgIData(oldp+866,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[11]),32);
    bufp->chgIData(oldp+867,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[12]),32);
    bufp->chgIData(oldp+868,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[13]),32);
    bufp->chgIData(oldp+869,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[14]),32);
    bufp->chgIData(oldp+870,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[15]),32);
    bufp->chgIData(oldp+871,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[16]),32);
    bufp->chgIData(oldp+872,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[17]),32);
    bufp->chgIData(oldp+873,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[18]),32);
    bufp->chgIData(oldp+874,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[19]),32);
    bufp->chgIData(oldp+875,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[20]),32);
    bufp->chgIData(oldp+876,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[21]),32);
    bufp->chgIData(oldp+877,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[22]),32);
    bufp->chgIData(oldp+878,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[23]),32);
    bufp->chgIData(oldp+879,(vlSelf->soc_sram__DOT__sram__DOT__cs_data),24);
    bufp->chgIData(oldp+880,(vlSelf->soc_sram__DOT__sram__DOT__cs_inst),24);
    bufp->chgIData(oldp+881,(vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev),24);
    bufp->chgIData(oldp+882,(vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev),24);
    bufp->chgCData(oldp+883,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr),5);
    bufp->chgCData(oldp+884,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_cs_addr),5);
    bufp->chgCData(oldp+885,(vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i),5);
    bufp->chgBit(oldp+886,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+887,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+888,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+889,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+890,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+891,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+892,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+893,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+894,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+895,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+896,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+897,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+898,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+899,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+900,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+901,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+902,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+903,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+904,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+905,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+906,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+907,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+908,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+909,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+910,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+911,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+912,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+913,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+914,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+915,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+916,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+917,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+918,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+919,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+920,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+921,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+922,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+923,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+924,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+925,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+926,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+927,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+928,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+929,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+930,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+931,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+932,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+933,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+934,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+935,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+936,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+937,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+938,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+939,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+940,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+941,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+942,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+943,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+944,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+945,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+946,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+947,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+948,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+949,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+950,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+951,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+952,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+953,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+954,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+955,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+956,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+957,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+958,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+959,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+960,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+961,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+962,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+963,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+964,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+965,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+966,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+967,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+968,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+969,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+970,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+971,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+972,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+973,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+974,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+975,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+976,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+977,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+978,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+979,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+980,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+981,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+982,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+983,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+984,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+985,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+986,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+987,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+988,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+989,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+990,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+991,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+992,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+993,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+994,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+995,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+996,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+997,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+998,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+999,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1000,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1001,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1002,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1003,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1004,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1005,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1006,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1007,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1008,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1009,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1010,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1011,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1012,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1013,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1014,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1015,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1016,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1017,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1018,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1019,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1020,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1021,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1022,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1023,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1024,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1025,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1026,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1027,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1028,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1029,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1030,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1031,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1032,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1033,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1034,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1035,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1036,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1037,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1038,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1039,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1040,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1041,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1042,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1043,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1044,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1045,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1046,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1047,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1048,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1049,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1050,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1051,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1052,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1053,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1054,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1055,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1056,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1057,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1058,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1059,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1060,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1061,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1062,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1063,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1064,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1065,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1066,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1067,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1068,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1069,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1070,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1071,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1072,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1073,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1074,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1075,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1076,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1077,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1078,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1079,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1080,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1081,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1082,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1083,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1084,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1085,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1086,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1087,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1088,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1089,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1090,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1091,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1092,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1093,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1094,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1095,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1096,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1097,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1098,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1099,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1100,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1101,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1102,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1103,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1104,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1105,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1106,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1107,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1108,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1109,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1110,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1111,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1112,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1113,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1114,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1115,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1116,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1117,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1118,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1119,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1120,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1121,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1122,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1123,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1124,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1125,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1126,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1127,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1128,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1129,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1130,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1131,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1132,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1133,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1134,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1135,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1136,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1137,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1138,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1139,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1140,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1141,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1142,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1143,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1144,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1145,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1146,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1147,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1148,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1149,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1150,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1151,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1152,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1153,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1154,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1155,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1156,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1157,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1158,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1159,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1160,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1161,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1162,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1163,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1164,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1165,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1166,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1167,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1168,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1169,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1170,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1171,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1172,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1173,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1174,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1175,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1176,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1177,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1178,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1179,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1180,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1181,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1182,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1183,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1184,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1185,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1186,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1187,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1188,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1189,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1190,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1191,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1192,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1193,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1194,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1195,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1196,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1197,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1198,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1199,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1200,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1201,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1202,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1203,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1204,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1205,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1206,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1207,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1208,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1209,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1210,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1211,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1212,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1213,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1214,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1215,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1216,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1217,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1218,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1219,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1220,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1221,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1222,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1223,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1224,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1225,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1226,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1227,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1228,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1229,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1230,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1231,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1232,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1233,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1234,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1235,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1236,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1237,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1238,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1239,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1240,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1241,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1242,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1243,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1244,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1245,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1246,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1247,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1248,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1249,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1250,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1251,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1252,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1253,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1254,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1255,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1256,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1257,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1258,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1259,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1260,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1261,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1262,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1263,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1264,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1265,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1266,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1267,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1268,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1269,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1270,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1271,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1272,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1273,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1274,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1275,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1276,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1277,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1278,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1279,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1280,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1281,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1282,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1283,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1284,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1285,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1286,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1287,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1288,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1289,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1290,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1291,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1292,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1293,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1294,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1295,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1296,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1297,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1298,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1299,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr1_reg),9);
    bufp->chgBit(oldp+1300,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.clk0));
    bufp->chgBit(oldp+1301,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb0));
    bufp->chgBit(oldp+1302,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.web0));
    bufp->chgCData(oldp+1303,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.wmask0),4);
    bufp->chgSData(oldp+1304,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr0),9);
    bufp->chgIData(oldp+1305,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.din0),32);
    bufp->chgIData(oldp+1306,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.dout0),32);
    bufp->chgBit(oldp+1307,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.clk1));
    bufp->chgBit(oldp+1308,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb1));
    bufp->chgSData(oldp+1309,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr1),9);
    bufp->chgIData(oldp+1310,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.dout1),32);
    bufp->chgBit(oldp+1311,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb0_reg));
    bufp->chgBit(oldp+1312,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.web0_reg));
    bufp->chgCData(oldp+1313,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.wmask0_reg),4);
    bufp->chgSData(oldp+1314,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr0_reg),9);
    bufp->chgIData(oldp+1315,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.din0_reg),32);
    bufp->chgBit(oldp+1316,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb1_reg));
    bufp->chgSData(oldp+1317,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr1_reg),9);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
