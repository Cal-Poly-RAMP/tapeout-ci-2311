// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"rst_ni", false,-1);
    tracep->declBit(c+3,"boot_sel_soft_i", false,-1);
    tracep->declBit(c+4,"boot_sel_src_i", false,-1);
    tracep->declBit(c+5,"sram_mux_sel_i", false,-1);
    tracep->declBit(c+6,"caravel_wb_rst_i", false,-1);
    tracep->declBit(c+7,"caravel_wbs_stb_i", false,-1);
    tracep->declBit(c+8,"caravel_wbs_cyc_i", false,-1);
    tracep->declBit(c+9,"caravel_wbs_we_i", false,-1);
    tracep->declBus(c+10,"caravel_wbs_sel_i", false,-1, 3,0);
    tracep->declBus(c+11,"caravel_wbs_dat_i", false,-1, 31,0);
    tracep->declBus(c+12,"caravel_wbs_adr_i", false,-1, 31,0);
    tracep->declBit(c+13,"caravel_wbs_ack_o", false,-1);
    tracep->declBus(c+14,"caravel_wbs_dat_o", false,-1, 31,0);
    tracep->declArray(c+15,"la_data_i", false,-1, 127,0);
    tracep->declArray(c+19,"la_data_o", false,-1, 127,0);
    tracep->declArray(c+23,"la_oe_no", false,-1, 127,0);
    tracep->declQuad(c+27,"gpio_i", false,-1, 37,0);
    tracep->declQuad(c+29,"gpio_o", false,-1, 37,0);
    tracep->declQuad(c+31,"gpio_oeb_no", false,-1, 37,0);
    tracep->declBus(c+33,"caravel_interrupt_o", false,-1, 2,0);
    tracep->pushNamePrefix("soc_sram ");
    tracep->declBus(c+1319,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"clk_i", false,-1);
    tracep->declBit(c+35,"rst_ni", false,-1);
    tracep->declBit(c+36,"boot_sel_soft_i", false,-1);
    tracep->declBit(c+37,"boot_sel_src_i", false,-1);
    tracep->declBit(c+38,"sram_mux_sel_i", false,-1);
    tracep->declBit(c+39,"caravel_wb_rst_i", false,-1);
    tracep->declBit(c+40,"caravel_wbs_stb_i", false,-1);
    tracep->declBit(c+41,"caravel_wbs_cyc_i", false,-1);
    tracep->declBit(c+42,"caravel_wbs_we_i", false,-1);
    tracep->declBus(c+43,"caravel_wbs_sel_i", false,-1, 3,0);
    tracep->declBus(c+44,"caravel_wbs_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"caravel_wbs_adr_i", false,-1, 31,0);
    tracep->declBit(c+46,"caravel_wbs_ack_o", false,-1);
    tracep->declBus(c+47,"caravel_wbs_dat_o", false,-1, 31,0);
    tracep->declArray(c+48,"la_data_i", false,-1, 127,0);
    tracep->declArray(c+52,"la_data_o", false,-1, 127,0);
    tracep->declArray(c+56,"la_oe_no", false,-1, 127,0);
    tracep->declQuad(c+60,"gpio_i", false,-1, 37,0);
    tracep->declQuad(c+62,"gpio_o", false,-1, 37,0);
    tracep->declQuad(c+64,"gpio_oeb_no", false,-1, 37,0);
    tracep->declBus(c+66,"caravel_interrupt_o", false,-1, 2,0);
    tracep->declBit(c+67,"dmem_req", false,-1);
    tracep->declBit(c+68,"dmem_gnt", false,-1);
    tracep->declBit(c+69,"dmem_we", false,-1);
    tracep->declBit(c+70,"dmem_rvalid", false,-1);
    tracep->declBus(c+71,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+72,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+73,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+74,"dmem_be", false,-1, 3,0);
    tracep->declBit(c+75,"imem_req", false,-1);
    tracep->declBit(c+76,"imem_gnt", false,-1);
    tracep->declBit(c+77,"imem_we", false,-1);
    tracep->declBit(c+78,"imem_rvalid", false,-1);
    tracep->declBus(c+79,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+80,"imem_wdata", false,-1, 31,0);
    tracep->declBus(c+81,"imem_rdata", false,-1, 31,0);
    tracep->declBus(c+82,"imem_be", false,-1, 3,0);
    tracep->declBit(c+83,"sram_d_req", false,-1);
    tracep->declBit(c+84,"sram_d_gnt", false,-1);
    tracep->declBit(c+85,"sram_d_we", false,-1);
    tracep->declBit(c+86,"sram_d_rvalid", false,-1);
    tracep->declBus(c+87,"sram_d_addr", false,-1, 31,0);
    tracep->declBus(c+88,"sram_d_wdata", false,-1, 31,0);
    tracep->declBus(c+89,"sram_d_rdata", false,-1, 31,0);
    tracep->declBus(c+90,"sram_d_be", false,-1, 3,0);
    tracep->declBit(c+91,"sram_i_req", false,-1);
    tracep->declBit(c+92,"sram_i_gnt", false,-1);
    tracep->declBit(c+93,"sram_i_we", false,-1);
    tracep->declBit(c+94,"sram_i_rvalid", false,-1);
    tracep->declBus(c+95,"sram_i_addr", false,-1, 31,0);
    tracep->declBus(c+96,"sram_i_wdata", false,-1, 31,0);
    tracep->declBus(c+97,"sram_i_rdata", false,-1, 31,0);
    tracep->declBus(c+98,"sram_i_be", false,-1, 3,0);
    tracep->declBit(c+99,"peripheral_req", false,-1);
    tracep->declBit(c+100,"peripheral_gnt", false,-1);
    tracep->declBit(c+101,"peripheral_we", false,-1);
    tracep->declBit(c+102,"peripheral_rvalid", false,-1);
    tracep->declBus(c+103,"peripheral_addr", false,-1, 31,0);
    tracep->declBus(c+104,"peripheral_wdata", false,-1, 31,0);
    tracep->declBus(c+105,"peripheral_rdata", false,-1, 31,0);
    tracep->declBus(c+106,"peripheral_be", false,-1, 3,0);
    tracep->declBit(c+107,"flash_req", false,-1);
    tracep->declBit(c+108,"flash_gnt", false,-1);
    tracep->declBit(c+109,"flash_we", false,-1);
    tracep->declBit(c+110,"flash_rvalid", false,-1);
    tracep->declBus(c+111,"flash_addr", false,-1, 31,0);
    tracep->declBus(c+112,"flash_wdata", false,-1, 31,0);
    tracep->declBus(c+113,"flash_rdata", false,-1, 31,0);
    tracep->declBus(c+114,"flash_be", false,-1, 3,0);
    tracep->declBit(c+115,"caravel_req", false,-1);
    tracep->declBit(c+116,"caravel_gnt", false,-1);
    tracep->declBit(c+117,"caravel_we", false,-1);
    tracep->declBit(c+118,"caravel_rvalid", false,-1);
    tracep->declBus(c+119,"caravel_addr", false,-1, 31,0);
    tracep->declBus(c+120,"caravel_wdata", false,-1, 31,0);
    tracep->declBus(c+121,"caravel_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"caravel_be", false,-1, 3,0);
    tracep->declBit(c+123,"sram_d_muxed_req", false,-1);
    tracep->declBit(c+124,"sram_d_muxed_gnt", false,-1);
    tracep->declBit(c+125,"sram_d_muxed_we", false,-1);
    tracep->declBit(c+126,"sram_d_muxed_rvalid", false,-1);
    tracep->declBus(c+127,"sram_d_muxed_addr", false,-1, 31,0);
    tracep->declBus(c+128,"sram_d_muxed_wdata", false,-1, 31,0);
    tracep->declBus(c+129,"sram_d_muxed_rdata", false,-1, 31,0);
    tracep->declBus(c+130,"sram_d_muxed_be", false,-1, 3,0);
    tracep->declBus(c+131,"rf_port1_reg", false,-1, 4,0);
    tracep->declBus(c+132,"rf_port2_reg", false,-1, 4,0);
    tracep->declBus(c+133,"rf_wr_reg", false,-1, 4,0);
    tracep->declBus(c+134,"rf_rs1", false,-1, 31,0);
    tracep->declBus(c+135,"rf_rs2", false,-1, 31,0);
    tracep->declBus(c+136,"rf_wr_data", false,-1, 31,0);
    tracep->declBit(c+137,"rf_wr_en", false,-1);
    tracep->declBit(c+138,"timer_intr", false,-1);
    tracep->declBit(c+139,"m_ext_intr", false,-1);
    tracep->declBit(c+140,"p_int_read", false,-1);
    tracep->declBit(c+141,"csr_busy", false,-1);
    tracep->declBus(c+142,"mcause", false,-1, 30,0);
    tracep->declBus(c+143,"dmem_rdata_1", false,-1, 31,0);
    tracep->declBus(c+144,"dmem_rdata_2", false,-1, 31,0);
    tracep->declBit(c+145,"dmem_rvalid_1", false,-1);
    tracep->declBit(c+146,"is_sram_wrap", false,-1);
    tracep->declBit(c+147,"is_sram_wrap_prev", false,-1);
    tracep->declBus(c+148,"unused", false,-1, 7,0);
    tracep->pushNamePrefix("unused2");
    tracep->declBus(c+149,"[0]", false,-1, 31,0);
    tracep->declBus(c+150,"[1]", false,-1, 31,0);
    tracep->declBus(c+151,"[2]", false,-1, 31,0);
    tracep->declBus(c+152,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_core ");
    tracep->declBit(c+153,"clk_i", false,-1);
    tracep->declBit(c+154,"rst_ni", false,-1);
    tracep->declBit(c+155,"timer_intr_i", false,-1);
    tracep->declBit(c+156,"m_ext_intr_i", false,-1);
    tracep->declBus(c+157,"mcause_i", false,-1, 30,0);
    tracep->declBit(c+158,"p_int_read_o", false,-1);
    tracep->declBit(c+159,"csr_busy_o", false,-1);
    tracep->declBit(c+160,"boot_sel_i", false,-1);
    tracep->declBit(c+161,"imem_req_o", false,-1);
    tracep->declBit(c+162,"imem_gnt_i", false,-1);
    tracep->declBus(c+163,"imem_addr_o", false,-1, 31,0);
    tracep->declBit(c+164,"imem_we_o", false,-1);
    tracep->declBus(c+165,"imem_be_o", false,-1, 3,0);
    tracep->declBus(c+166,"imem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+167,"imem_rvalid_i", false,-1);
    tracep->declBus(c+168,"imem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+169,"rf_port1_reg_o", false,-1, 4,0);
    tracep->declBus(c+170,"rf_port2_reg_o", false,-1, 4,0);
    tracep->declBit(c+171,"rf_wr_en_o", false,-1);
    tracep->declBus(c+172,"rf_wr_reg_o", false,-1, 4,0);
    tracep->declBus(c+173,"rf_wr_data_o", false,-1, 31,0);
    tracep->declBus(c+174,"rf_rs1_i", false,-1, 31,0);
    tracep->declBus(c+175,"rf_rs2_i", false,-1, 31,0);
    tracep->declBit(c+176,"dmem_req_o", false,-1);
    tracep->declBit(c+177,"dmem_gnt_i", false,-1);
    tracep->declBus(c+178,"dmem_addr_o", false,-1, 31,0);
    tracep->declBit(c+179,"dmem_we_o", false,-1);
    tracep->declBus(c+180,"dmem_be_o", false,-1, 3,0);
    tracep->declBus(c+181,"dmem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+182,"dmem_rvalid_i", false,-1);
    tracep->declBus(c+183,"dmem_rdata_i", false,-1, 31,0);
    tracep->pushNamePrefix("fetch_state\206 ");
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    tracep->declBus(c+185,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_state\206 ");
    tracep->declBit(c+186,"pc_src", false,-1);
    tracep->declBus(c+187,"branch_op", false,-1, 2,0);
    tracep->declBus(c+188,"alu_op", false,-1, 3,0);
    tracep->declBus(c+189,"alu_a_src", false,-1, 1,0);
    tracep->declBus(c+190,"alu_b_src", false,-1, 1,0);
    tracep->declBus(c+191,"i_immed", false,-1, 31,0);
    tracep->declBus(c+192,"s_immed", false,-1, 31,0);
    tracep->declBus(c+193,"b_immed", false,-1, 31,0);
    tracep->declBus(c+194,"u_immed", false,-1, 31,0);
    tracep->declBus(c+195,"j_immed", false,-1, 31,0);
    tracep->declBus(c+196,"pc", false,-1, 31,0);
    tracep->declBus(c+197,"next_pc", false,-1, 31,0);
    tracep->declBit(c+198,"rf_wr_en", false,-1);
    tracep->declBus(c+199,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+200,"mem_read", false,-1);
    tracep->declBit(c+201,"mem_write", false,-1);
    tracep->declBit(c+202,"mem_sign", false,-1);
    tracep->declBus(c+203,"mem_width", false,-1, 1,0);
    tracep->declBit(c+204,"csr_wr", false,-1);
    tracep->declBit(c+205,"csr_mret", false,-1);
    tracep->declBus(c+206,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+207,"csr_mode", false,-1, 1,0);
    tracep->declBus(c+208,"csr_immed", false,-1, 4,0);
    tracep->declBit(c+209,"csr_immed_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exec_state\206 ");
    tracep->declBus(c+210,"next_pc", false,-1, 31,0);
    tracep->declBus(c+211,"alu_out", false,-1, 31,0);
    tracep->declBit(c+212,"rf_wr_en", false,-1);
    tracep->declBus(c+213,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+214,"mem_read", false,-1);
    tracep->declBit(c+215,"mem_sign", false,-1);
    tracep->declBus(c+216,"mem_width", false,-1, 1,0);
    tracep->declBus(c+217,"csr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_state\206 ");
    tracep->declBus(c+218,"next_pc", false,-1, 31,0);
    tracep->declBus(c+219,"alu_out", false,-1, 31,0);
    tracep->declBit(c+220,"rf_wr_en", false,-1);
    tracep->declBus(c+221,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+222,"mem_read", false,-1);
    tracep->declBit(c+223,"mem_sign", false,-1);
    tracep->declBus(c+224,"mem_width", false,-1, 1,0);
    tracep->declBus(c+225,"mem_dout", false,-1, 31,0);
    tracep->declBus(c+226,"csr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch_ctrl\206 ");
    tracep->declBit(c+227,"squash", false,-1);
    tracep->declBit(c+228,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_ctrl\206 ");
    tracep->declBit(c+229,"squash", false,-1);
    tracep->declBit(c+230,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exec_ctrl\206 ");
    tracep->declBit(c+231,"squash", false,-1);
    tracep->declBit(c+232,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_ctrl\206 ");
    tracep->declBit(c+233,"squash", false,-1);
    tracep->declBit(c+234,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_ctrl\206 ");
    tracep->declBit(c+235,"squash", false,-1);
    tracep->declBit(c+236,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_reg_meta\206 ");
    tracep->declBit(c+237,"rs1_used", false,-1);
    tracep->declBus(c+238,"rs1", false,-1, 4,0);
    tracep->declBus(c+239,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+240,"rs2_used", false,-1);
    tracep->declBus(c+241,"rs2", false,-1, 4,0);
    tracep->declBus(c+242,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+243,"rd_used", false,-1);
    tracep->declBus(c+244,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_reg_meta_updated\206 ");
    tracep->declBit(c+245,"rs1_used", false,-1);
    tracep->declBus(c+246,"rs1", false,-1, 4,0);
    tracep->declBus(c+247,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+248,"rs2_used", false,-1);
    tracep->declBus(c+249,"rs2", false,-1, 4,0);
    tracep->declBus(c+250,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+251,"rd_used", false,-1);
    tracep->declBus(c+252,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exec_reg_meta\206 ");
    tracep->declBit(c+253,"rs1_used", false,-1);
    tracep->declBus(c+254,"rs1", false,-1, 4,0);
    tracep->declBus(c+255,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+256,"rs2_used", false,-1);
    tracep->declBus(c+257,"rs2", false,-1, 4,0);
    tracep->declBus(c+258,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+259,"rd_used", false,-1);
    tracep->declBus(c+260,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_reg_meta\206 ");
    tracep->declBit(c+261,"rs1_used", false,-1);
    tracep->declBus(c+262,"rs1", false,-1, 4,0);
    tracep->declBus(c+263,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+264,"rs2_used", false,-1);
    tracep->declBus(c+265,"rs2", false,-1, 4,0);
    tracep->declBus(c+266,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+267,"rd_used", false,-1);
    tracep->declBus(c+268,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+269,"fetch_valid", false,-1);
    tracep->declBit(c+270,"decode_valid", false,-1);
    tracep->declBit(c+271,"exec_valid", false,-1);
    tracep->declBit(c+272,"mem_valid", false,-1);
    tracep->declBit(c+273,"load_use_stall", false,-1);
    tracep->declBit(c+274,"csr_hold", false,-1);
    tracep->declBit(c+275,"imem_stall", false,-1);
    tracep->declBit(c+276,"dmem_stall", false,-1);
    tracep->declBit(c+277,"branch_taken", false,-1);
    tracep->pushNamePrefix("mem_fwd_data\206 ");
    tracep->declBit(c+278,"rf_wr_en", false,-1);
    tracep->declBit(c+279,"mem_read", false,-1);
    tracep->declBit(c+280,"valid", false,-1);
    tracep->declBus(c+281,"rd", false,-1, 4,0);
    tracep->declBus(c+282,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_fwd_data\206 ");
    tracep->declBit(c+283,"rf_wr_en", false,-1);
    tracep->declBit(c+284,"mem_read", false,-1);
    tracep->declBit(c+285,"valid", false,-1);
    tracep->declBus(c+286,"rd", false,-1, 4,0);
    tracep->declBus(c+287,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+288,"pc_target_sel", false,-1);
    tracep->declBit(c+289,"pc_intr_sel", false,-1);
    tracep->declBus(c+290,"pc_target_addr", false,-1, 31,0);
    tracep->declBus(c+291,"pc_intr_addr", false,-1, 31,0);
    tracep->declBus(c+292,"pre_intr_pc", false,-1, 31,0);
    tracep->declBus(c+293,"csr_out", false,-1, 31,0);
    tracep->declBit(c+294,"dmem_rd", false,-1);
    tracep->declBit(c+295,"dmem_wr", false,-1);
    tracep->declBit(c+296,"csr_flush", false,-1);
    tracep->pushNamePrefix("i_csr ");
    tracep->declBit(c+297,"clk_i", false,-1);
    tracep->declBit(c+298,"rst_ni", false,-1);
    tracep->declBit(c+299,"csr_wr_i", false,-1);
    tracep->declBus(c+300,"addr_i", false,-1, 11,0);
    tracep->declBus(c+301,"mode_sel_i", false,-1, 1,0);
    tracep->declBus(c+302,"immed_i", false,-1, 4,0);
    tracep->declBit(c+303,"immed_sel_i", false,-1);
    tracep->declBus(c+304,"rs1", false,-1, 31,0);
    tracep->declBit(c+305,"timer_intr_i", false,-1);
    tracep->declBit(c+306,"m_ext_intr_i", false,-1);
    tracep->declBit(c+307,"stall_i", false,-1);
    tracep->declBit(c+308,"mret_i", false,-1);
    tracep->declBit(c+309,"pcSource", false,-1);
    tracep->declBus(c+310,"next_pc", false,-1, 31,0);
    tracep->declBus(c+311,"mcause_i", false,-1, 30,0);
    tracep->declBit(c+312,"csr_hold_i", false,-1);
    tracep->declBit(c+313,"csr_flush_o", false,-1);
    tracep->declBus(c+314,"csr_data_o", false,-1, 31,0);
    tracep->declBus(c+315,"pc_intr_addr", false,-1, 31,0);
    tracep->declBit(c+316,"pc_intr_sel", false,-1);
    tracep->declBit(c+317,"p_int_read_o", false,-1);
    tracep->declBit(c+318,"csr_busy_o", false,-1);
    tracep->pushNamePrefix("int_state\206 ");
    tracep->declBus(c+319,"state", false,-1, 1,0);
    tracep->declBus(c+320,"entry_count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+321,"mstatus", false,-1, 31,0);
    tracep->declBus(c+322,"mie", false,-1, 31,0);
    tracep->declBus(c+323,"mtvec", false,-1, 31,0);
    tracep->declBus(c+324,"mepc", false,-1, 31,0);
    tracep->declBus(c+325,"mcause", false,-1, 31,0);
    tracep->declBus(c+326,"write_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_decode_stage ");
    tracep->declBit(c+327,"clk_i", false,-1);
    tracep->declBit(c+328,"rst_ni", false,-1);
    tracep->declBit(c+329,"valid_i", false,-1);
    tracep->pushNamePrefix("fetch_state_i\206 ");
    tracep->declBus(c+330,"pc", false,-1, 31,0);
    tracep->declBus(c+331,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+332,"inst_i", false,-1, 31,0);
    tracep->pushNamePrefix("stage_ctrl_i\206 ");
    tracep->declBit(c+333,"squash", false,-1);
    tracep->declBit(c+334,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+335,"rf_port1_reg_o", false,-1, 4,0);
    tracep->declBus(c+336,"rf_port2_reg_o", false,-1, 4,0);
    tracep->declBus(c+337,"rf_rs1_i", false,-1, 31,0);
    tracep->declBus(c+338,"rf_rs2_i", false,-1, 31,0);
    tracep->declBit(c+339,"valid_o", false,-1);
    tracep->pushNamePrefix("decode_state_o\206 ");
    tracep->declBit(c+340,"pc_src", false,-1);
    tracep->declBus(c+341,"branch_op", false,-1, 2,0);
    tracep->declBus(c+342,"alu_op", false,-1, 3,0);
    tracep->declBus(c+343,"alu_a_src", false,-1, 1,0);
    tracep->declBus(c+344,"alu_b_src", false,-1, 1,0);
    tracep->declBus(c+345,"i_immed", false,-1, 31,0);
    tracep->declBus(c+346,"s_immed", false,-1, 31,0);
    tracep->declBus(c+347,"b_immed", false,-1, 31,0);
    tracep->declBus(c+348,"u_immed", false,-1, 31,0);
    tracep->declBus(c+349,"j_immed", false,-1, 31,0);
    tracep->declBus(c+350,"pc", false,-1, 31,0);
    tracep->declBus(c+351,"next_pc", false,-1, 31,0);
    tracep->declBit(c+352,"rf_wr_en", false,-1);
    tracep->declBus(c+353,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+354,"mem_read", false,-1);
    tracep->declBit(c+355,"mem_write", false,-1);
    tracep->declBit(c+356,"mem_sign", false,-1);
    tracep->declBus(c+357,"mem_width", false,-1, 1,0);
    tracep->declBit(c+358,"csr_wr", false,-1);
    tracep->declBit(c+359,"csr_mret", false,-1);
    tracep->declBus(c+360,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+361,"csr_mode", false,-1, 1,0);
    tracep->declBus(c+362,"csr_immed", false,-1, 4,0);
    tracep->declBit(c+363,"csr_immed_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_meta_o\206 ");
    tracep->declBit(c+364,"rs1_used", false,-1);
    tracep->declBus(c+365,"rs1", false,-1, 4,0);
    tracep->declBus(c+366,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+367,"rs2_used", false,-1);
    tracep->declBus(c+368,"rs2", false,-1, 4,0);
    tracep->declBus(c+369,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+370,"rd_used", false,-1);
    tracep->declBus(c+371,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+372,"pc_src", false,-1);
    tracep->declBus(c+373,"branch_op", false,-1, 2,0);
    tracep->declBus(c+374,"alu_op", false,-1, 3,0);
    tracep->declBus(c+375,"alu_a_src", false,-1, 1,0);
    tracep->declBus(c+376,"alu_b_src", false,-1, 1,0);
    tracep->declBit(c+377,"rf_wr_en", false,-1);
    tracep->declBus(c+378,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+379,"mem_write", false,-1);
    tracep->declBit(c+380,"mem_read", false,-1);
    tracep->declBit(c+381,"mem_sign", false,-1);
    tracep->declBus(c+382,"mem_width", false,-1, 1,0);
    tracep->declBit(c+383,"rs1_used", false,-1);
    tracep->declBit(c+384,"rs2_used", false,-1);
    tracep->declBit(c+385,"rd_used", false,-1);
    tracep->declBit(c+386,"csr_wr", false,-1);
    tracep->declBit(c+387,"csr_mret", false,-1);
    tracep->declBus(c+388,"i_immed", false,-1, 31,0);
    tracep->declBus(c+389,"s_immed", false,-1, 31,0);
    tracep->declBus(c+390,"b_immed", false,-1, 31,0);
    tracep->declBus(c+391,"u_immed", false,-1, 31,0);
    tracep->declBus(c+392,"j_immed", false,-1, 31,0);
    tracep->declBus(c+393,"rd_addr", false,-1, 4,0);
    tracep->pushNamePrefix("i_decoder ");
    tracep->declBus(c+394,"inst_i", false,-1, 31,0);
    tracep->declBit(c+395,"pc_src_o", false,-1);
    tracep->declBus(c+396,"branch_op_o", false,-1, 2,0);
    tracep->declBus(c+397,"alu_op_o", false,-1, 3,0);
    tracep->declBus(c+398,"alu_a_src_o", false,-1, 1,0);
    tracep->declBus(c+399,"alu_b_src_o", false,-1, 1,0);
    tracep->declBit(c+400,"rs1_valid_o", false,-1);
    tracep->declBit(c+401,"rs2_valid_o", false,-1);
    tracep->declBit(c+402,"rd_valid_o", false,-1);
    tracep->declBit(c+403,"rf_wr_en_o", false,-1);
    tracep->declBus(c+404,"rf_wr_src_o", false,-1, 1,0);
    tracep->declBit(c+405,"mem_write_o", false,-1);
    tracep->declBit(c+406,"mem_read_o", false,-1);
    tracep->declBit(c+407,"mem_sign_o", false,-1);
    tracep->declBus(c+408,"mem_width_o", false,-1, 1,0);
    tracep->declBit(c+409,"csr_wr_o", false,-1);
    tracep->declBit(c+410,"csr_mret_o", false,-1);
    tracep->declBus(c+411,"opcode", false,-1, 6,0);
    tracep->declBus(c+412,"func3", false,-1, 2,0);
    tracep->declBus(c+413,"func7", false,-1, 6,0);
    tracep->declBit(c+414,"csr_en", false,-1);
    tracep->declBit(c+415,"inst_unused", false,-1);
    tracep->declBit(c+416,"func7_unused", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_immed_gen ");
    tracep->declBus(c+417,"inst_i", false,-1, 31,0);
    tracep->declBus(c+418,"i_immed_o", false,-1, 31,0);
    tracep->declBus(c+419,"s_immed_o", false,-1, 31,0);
    tracep->declBus(c+420,"b_immed_o", false,-1, 31,0);
    tracep->declBus(c+421,"u_immed_o", false,-1, 31,0);
    tracep->declBus(c+422,"j_immed_o", false,-1, 31,0);
    tracep->declBit(c+423,"inst_unused", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_dmem_obi_driver ");
    tracep->declBit(c+424,"clk_i", false,-1);
    tracep->declBit(c+425,"rst_ni", false,-1);
    tracep->declBit(c+426,"rd_i", false,-1);
    tracep->declBit(c+427,"wr_i", false,-1);
    tracep->declBit(c+428,"gnt_i", false,-1);
    tracep->declBit(c+429,"rvalid_i", false,-1);
    tracep->declBit(c+430,"stall_o", false,-1);
    tracep->declBit(c+431,"req_o", false,-1);
    tracep->declBit(c+432,"NS", false,-1);
    tracep->declBit(c+433,"PS", false,-1);
    tracep->declBit(c+434,"gnt_buf", false,-1);
    tracep->declBit(c+435,"rvalid_buf", false,-1);
    tracep->declBit(c+436,"outstanding_read", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_exec_stage ");
    tracep->declBit(c+437,"clk_i", false,-1);
    tracep->declBit(c+438,"rst_ni", false,-1);
    tracep->declBit(c+439,"valid_i", false,-1);
    tracep->pushNamePrefix("decode_state_i\206 ");
    tracep->declBit(c+440,"pc_src", false,-1);
    tracep->declBus(c+441,"branch_op", false,-1, 2,0);
    tracep->declBus(c+442,"alu_op", false,-1, 3,0);
    tracep->declBus(c+443,"alu_a_src", false,-1, 1,0);
    tracep->declBus(c+444,"alu_b_src", false,-1, 1,0);
    tracep->declBus(c+445,"i_immed", false,-1, 31,0);
    tracep->declBus(c+446,"s_immed", false,-1, 31,0);
    tracep->declBus(c+447,"b_immed", false,-1, 31,0);
    tracep->declBus(c+448,"u_immed", false,-1, 31,0);
    tracep->declBus(c+449,"j_immed", false,-1, 31,0);
    tracep->declBus(c+450,"pc", false,-1, 31,0);
    tracep->declBus(c+451,"next_pc", false,-1, 31,0);
    tracep->declBit(c+452,"rf_wr_en", false,-1);
    tracep->declBus(c+453,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+454,"mem_read", false,-1);
    tracep->declBit(c+455,"mem_write", false,-1);
    tracep->declBit(c+456,"mem_sign", false,-1);
    tracep->declBus(c+457,"mem_width", false,-1, 1,0);
    tracep->declBit(c+458,"csr_wr", false,-1);
    tracep->declBit(c+459,"csr_mret", false,-1);
    tracep->declBus(c+460,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+461,"csr_mode", false,-1, 1,0);
    tracep->declBus(c+462,"csr_immed", false,-1, 4,0);
    tracep->declBit(c+463,"csr_immed_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_meta_i\206 ");
    tracep->declBit(c+464,"rs1_used", false,-1);
    tracep->declBus(c+465,"rs1", false,-1, 4,0);
    tracep->declBus(c+466,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+467,"rs2_used", false,-1);
    tracep->declBus(c+468,"rs2", false,-1, 4,0);
    tracep->declBus(c+469,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+470,"rd_used", false,-1);
    tracep->declBus(c+471,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+472,"csr_read_i", false,-1, 31,0);
    tracep->pushNamePrefix("stage_ctrl_i\206 ");
    tracep->declBit(c+473,"squash", false,-1);
    tracep->declBit(c+474,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+475,"target_sel_o", false,-1);
    tracep->declBus(c+476,"target_addr_o", false,-1, 31,0);
    tracep->declBit(c+477,"valid_o", false,-1);
    tracep->pushNamePrefix("exec_state_o\206 ");
    tracep->declBus(c+478,"next_pc", false,-1, 31,0);
    tracep->declBus(c+479,"alu_out", false,-1, 31,0);
    tracep->declBit(c+480,"rf_wr_en", false,-1);
    tracep->declBus(c+481,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+482,"mem_read", false,-1);
    tracep->declBit(c+483,"mem_sign", false,-1);
    tracep->declBus(c+484,"mem_width", false,-1, 1,0);
    tracep->declBus(c+485,"csr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_meta_o\206 ");
    tracep->declBit(c+486,"rs1_used", false,-1);
    tracep->declBus(c+487,"rs1", false,-1, 4,0);
    tracep->declBus(c+488,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+489,"rs2_used", false,-1);
    tracep->declBus(c+490,"rs2", false,-1, 4,0);
    tracep->declBus(c+491,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+492,"rd_used", false,-1);
    tracep->declBus(c+493,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+494,"mem_read_ao", false,-1);
    tracep->declBit(c+495,"mem_write_ao", false,-1);
    tracep->declBus(c+496,"mem_strb_ao", false,-1, 3,0);
    tracep->declBus(c+497,"mem_addr_ao", false,-1, 31,0);
    tracep->declBus(c+498,"mem_data_ao", false,-1, 31,0);
    tracep->declBus(c+499,"alu_a_in", false,-1, 31,0);
    tracep->declBus(c+500,"alu_b_in", false,-1, 31,0);
    tracep->declBus(c+501,"alu_out", false,-1, 31,0);
    tracep->declBit(c+502,"branch_taken", false,-1);
    tracep->declBus(c+503,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+504,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+505,"mem_strb", false,-1, 3,0);
    tracep->declBit(c+506,"mem_read", false,-1);
    tracep->declBit(c+507,"mem_write", false,-1);
    tracep->declBit(c+508,"mem_illegal", false,-1);
    tracep->declBus(c+509,"last_dmem_addr", false,-1, 31,0);
    tracep->declBit(c+510,"valid", false,-1);
    tracep->pushNamePrefix("i_alu ");
    tracep->declBus(c+1320,"Width", false,-1, 31,0);
    tracep->declBus(c+511,"op_i", false,-1, 3,0);
    tracep->declBus(c+512,"a_i", false,-1, 31,0);
    tracep->declBus(c+513,"b_i", false,-1, 31,0);
    tracep->declBus(c+514,"out_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_branch_gen ");
    tracep->declBus(c+515,"op_i", false,-1, 2,0);
    tracep->declBus(c+516,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+517,"rs2_data_i", false,-1, 31,0);
    tracep->declBit(c+518,"taken_o", false,-1);
    tracep->declBit(c+519,"eq", false,-1);
    tracep->declBit(c+520,"lt", false,-1);
    tracep->declBit(c+521,"ltu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_mem_prep ");
    tracep->declBus(c+522,"mem_width_i", false,-1, 1,0);
    tracep->declBus(c+523,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+524,"mem_addr_i", false,-1, 31,0);
    tracep->declBit(c+525,"mem_read_i", false,-1);
    tracep->declBit(c+526,"mem_write_i", false,-1);
    tracep->declBus(c+527,"mem_word_addr_ao", false,-1, 31,0);
    tracep->declBus(c+528,"mem_write_data_ao", false,-1, 31,0);
    tracep->declBus(c+529,"mem_strobe_ao", false,-1, 3,0);
    tracep->declBit(c+530,"mem_illegal_ao", false,-1);
    tracep->declBit(c+531,"illegal_addr", false,-1);
    tracep->declBus(c+532,"pre_width", false,-1, 1,0);
    tracep->declBus(c+533,"pre_write_data", false,-1, 31,0);
    tracep->declBus(c+534,"req_byte_idx", false,-1, 1,0);
    tracep->declBus(c+535,"req_strobe", false,-1, 3,0);
    tracep->declBus(c+536,"req_write_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_fetch_stage ");
    tracep->declBit(c+537,"clk_i", false,-1);
    tracep->declBit(c+538,"rst_ni", false,-1);
    tracep->declBit(c+539,"boot_sel_i", false,-1);
    tracep->declBit(c+540,"target_sel_i", false,-1);
    tracep->declBit(c+541,"intr_sel_i", false,-1);
    tracep->declBus(c+542,"target_addr_i", false,-1, 31,0);
    tracep->declBus(c+543,"intr_addr_i", false,-1, 31,0);
    tracep->declBit(c+544,"branch_desync_i", false,-1);
    tracep->declBit(c+545,"branch_taken_o", false,-1);
    tracep->pushNamePrefix("stage_ctrl_i\206 ");
    tracep->declBit(c+546,"squash", false,-1);
    tracep->declBit(c+547,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+548,"mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+549,"valid_o", false,-1);
    tracep->pushNamePrefix("fetch_state_o\206 ");
    tracep->declBus(c+550,"pc", false,-1, 31,0);
    tracep->declBus(c+551,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+552,"pre_intr_pc_o", false,-1, 31,0);
    tracep->declBus(c+553,"pc_next", false,-1, 31,0);
    tracep->declBus(c+554,"pc_out", false,-1, 31,0);
    tracep->declBus(c+555,"pc_plus_4", false,-1, 31,0);
    tracep->declBus(c+556,"target_saved", false,-1, 31,0);
    tracep->declBus(c+557,"target_addr", false,-1, 31,0);
    tracep->declBit(c+558,"branch_ctrl_saved", false,-1);
    tracep->declBit(c+559,"target_sel_saved", false,-1);
    tracep->declBit(c+560,"target_sel", false,-1);
    tracep->pushNamePrefix("i_prog_cntr ");
    tracep->declBit(c+561,"clk_i", false,-1);
    tracep->declBit(c+562,"rst_ni", false,-1);
    tracep->declBit(c+563,"boot_sel_i", false,-1);
    tracep->declBit(c+564,"stall_i", false,-1);
    tracep->declBus(c+565,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+566,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1321,"BOOTLOADER_ADDR", false,-1, 31,0);
    tracep->declBus(c+1322,"FAILSAFE_ADDR", false,-1, 31,0);
    tracep->declBus(c+567,"reset_addr", false,-1, 31,0);
    tracep->declBus(c+568,"last_pc", false,-1, 31,0);
    tracep->declBus(c+569,"pc_raw", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_fwd_unit ");
    tracep->pushNamePrefix("ex_stage_i\206 ");
    tracep->declBit(c+570,"rf_wr_en", false,-1);
    tracep->declBit(c+571,"mem_read", false,-1);
    tracep->declBit(c+572,"valid", false,-1);
    tracep->declBus(c+573,"rd", false,-1, 4,0);
    tracep->declBus(c+574,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage_i\206 ");
    tracep->declBit(c+575,"rf_wr_en", false,-1);
    tracep->declBit(c+576,"mem_read", false,-1);
    tracep->declBit(c+577,"valid", false,-1);
    tracep->declBus(c+578,"rd", false,-1, 4,0);
    tracep->declBus(c+579,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dest_meta_i\206 ");
    tracep->declBit(c+580,"rs1_used", false,-1);
    tracep->declBus(c+581,"rs1", false,-1, 4,0);
    tracep->declBus(c+582,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+583,"rs2_used", false,-1);
    tracep->declBus(c+584,"rs2", false,-1, 4,0);
    tracep->declBus(c+585,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+586,"rd_used", false,-1);
    tracep->declBus(c+587,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+588,"load_use_stall_ao", false,-1);
    tracep->pushNamePrefix("dest_meta_o\206 ");
    tracep->declBit(c+589,"rs1_used", false,-1);
    tracep->declBus(c+590,"rs1", false,-1, 4,0);
    tracep->declBus(c+591,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+592,"rs2_used", false,-1);
    tracep->declBus(c+593,"rs2", false,-1, 4,0);
    tracep->declBus(c+594,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+595,"rd_used", false,-1);
    tracep->declBus(c+596,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+597,"rs1_lus", false,-1);
    tracep->declBit(c+598,"rs2_lus", false,-1);
    tracep->declBus(c+599,"rs1_updated", false,-1, 31,0);
    tracep->declBus(c+600,"rs2_updated", false,-1, 31,0);
    tracep->pushNamePrefix("rs1_fwd_unit ");
    tracep->pushNamePrefix("ex_stage_i\206 ");
    tracep->declBit(c+601,"rf_wr_en", false,-1);
    tracep->declBit(c+602,"mem_read", false,-1);
    tracep->declBit(c+603,"valid", false,-1);
    tracep->declBus(c+604,"rd", false,-1, 4,0);
    tracep->declBus(c+605,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage_i\206 ");
    tracep->declBit(c+606,"rf_wr_en", false,-1);
    tracep->declBit(c+607,"mem_read", false,-1);
    tracep->declBit(c+608,"valid", false,-1);
    tracep->declBus(c+609,"rd", false,-1, 4,0);
    tracep->declBus(c+610,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+611,"rs_i", false,-1, 4,0);
    tracep->declBus(c+612,"rs_data_i", false,-1, 31,0);
    tracep->declBit(c+613,"rs_used_i", false,-1);
    tracep->declBus(c+614,"rs_data_ao", false,-1, 31,0);
    tracep->declBit(c+615,"load_use_hazard_ao", false,-1);
    tracep->declBit(c+616,"mem_conflict", false,-1);
    tracep->declBit(c+617,"ex_conflict", false,-1);
    tracep->declBit(c+618,"mem_raw", false,-1);
    tracep->declBit(c+619,"ex_raw", false,-1);
    tracep->declBus(c+620,"data_updated_mem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_fwd_unit ");
    tracep->pushNamePrefix("ex_stage_i\206 ");
    tracep->declBit(c+621,"rf_wr_en", false,-1);
    tracep->declBit(c+622,"mem_read", false,-1);
    tracep->declBit(c+623,"valid", false,-1);
    tracep->declBus(c+624,"rd", false,-1, 4,0);
    tracep->declBus(c+625,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_stage_i\206 ");
    tracep->declBit(c+626,"rf_wr_en", false,-1);
    tracep->declBit(c+627,"mem_read", false,-1);
    tracep->declBit(c+628,"valid", false,-1);
    tracep->declBus(c+629,"rd", false,-1, 4,0);
    tracep->declBus(c+630,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+631,"rs_i", false,-1, 4,0);
    tracep->declBus(c+632,"rs_data_i", false,-1, 31,0);
    tracep->declBit(c+633,"rs_used_i", false,-1);
    tracep->declBus(c+634,"rs_data_ao", false,-1, 31,0);
    tracep->declBit(c+635,"load_use_hazard_ao", false,-1);
    tracep->declBit(c+636,"mem_conflict", false,-1);
    tracep->declBit(c+637,"ex_conflict", false,-1);
    tracep->declBit(c+638,"mem_raw", false,-1);
    tracep->declBit(c+639,"ex_raw", false,-1);
    tracep->declBus(c+640,"data_updated_mem", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_hazard_unit ");
    tracep->declBit(c+641,"clk_i", false,-1);
    tracep->declBit(c+642,"rst_ni", false,-1);
    tracep->declBit(c+643,"imem_stall_i", false,-1);
    tracep->declBit(c+644,"dmem_stall_i", false,-1);
    tracep->declBit(c+645,"branch_taken_i", false,-1);
    tracep->declBit(c+646,"csr_flush_i", false,-1);
    tracep->declBit(c+647,"csr_mret_i", false,-1);
    tracep->declBit(c+648,"load_use_stall_i", false,-1);
    tracep->pushNamePrefix("fetch_ctrl_ao\206 ");
    tracep->declBit(c+649,"squash", false,-1);
    tracep->declBit(c+650,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_ctrl_ao\206 ");
    tracep->declBit(c+651,"squash", false,-1);
    tracep->declBit(c+652,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute_ctrl_ao\206 ");
    tracep->declBit(c+653,"squash", false,-1);
    tracep->declBit(c+654,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_ctrl_ao\206 ");
    tracep->declBit(c+655,"squash", false,-1);
    tracep->declBit(c+656,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback_ctrl_ao\206 ");
    tracep->declBit(c+657,"squash", false,-1);
    tracep->declBit(c+658,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+659,"csr_hold_o", false,-1);
    tracep->declBit(c+660,"flush_in_progess", false,-1);
    tracep->declBit(c+661,"branch", false,-1);
    tracep->declBus(c+662,"PS", false,-1, 2,0);
    tracep->declBus(c+663,"NS", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_imem_obi_driver ");
    tracep->declBit(c+664,"clk_i", false,-1);
    tracep->declBit(c+665,"rst_ni", false,-1);
    tracep->declBit(c+666,"rd_i", false,-1);
    tracep->declBit(c+667,"wr_i", false,-1);
    tracep->declBit(c+668,"gnt_i", false,-1);
    tracep->declBit(c+669,"rvalid_i", false,-1);
    tracep->declBit(c+670,"stall_o", false,-1);
    tracep->declBit(c+671,"req_o", false,-1);
    tracep->declBit(c+672,"NS", false,-1);
    tracep->declBit(c+673,"PS", false,-1);
    tracep->declBit(c+674,"gnt_buf", false,-1);
    tracep->declBit(c+675,"rvalid_buf", false,-1);
    tracep->declBit(c+676,"outstanding_read", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_mem_slice_stage ");
    tracep->declBit(c+677,"clk_i", false,-1);
    tracep->declBit(c+678,"rst_ni", false,-1);
    tracep->declBit(c+679,"valid_i", false,-1);
    tracep->pushNamePrefix("exec_state_i\206 ");
    tracep->declBus(c+680,"next_pc", false,-1, 31,0);
    tracep->declBus(c+681,"alu_out", false,-1, 31,0);
    tracep->declBit(c+682,"rf_wr_en", false,-1);
    tracep->declBus(c+683,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+684,"mem_read", false,-1);
    tracep->declBit(c+685,"mem_sign", false,-1);
    tracep->declBus(c+686,"mem_width", false,-1, 1,0);
    tracep->declBus(c+687,"csr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_meta_i\206 ");
    tracep->declBit(c+688,"rs1_used", false,-1);
    tracep->declBus(c+689,"rs1", false,-1, 4,0);
    tracep->declBus(c+690,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+691,"rs2_used", false,-1);
    tracep->declBus(c+692,"rs2", false,-1, 4,0);
    tracep->declBus(c+693,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+694,"rd_used", false,-1);
    tracep->declBus(c+695,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stage_ctrl_i\206 ");
    tracep->declBit(c+696,"squash", false,-1);
    tracep->declBit(c+697,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+698,"dmem_rdata_i", false,-1, 31,0);
    tracep->declBit(c+699,"valid_o", false,-1);
    tracep->pushNamePrefix("mem_state_o\206 ");
    tracep->declBus(c+700,"next_pc", false,-1, 31,0);
    tracep->declBus(c+701,"alu_out", false,-1, 31,0);
    tracep->declBit(c+702,"rf_wr_en", false,-1);
    tracep->declBus(c+703,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+704,"mem_read", false,-1);
    tracep->declBit(c+705,"mem_sign", false,-1);
    tracep->declBus(c+706,"mem_width", false,-1, 1,0);
    tracep->declBus(c+707,"mem_dout", false,-1, 31,0);
    tracep->declBus(c+708,"csr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_meta_o\206 ");
    tracep->declBit(c+709,"rs1_used", false,-1);
    tracep->declBus(c+710,"rs1", false,-1, 4,0);
    tracep->declBus(c+711,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+712,"rs2_used", false,-1);
    tracep->declBus(c+713,"rs2", false,-1, 4,0);
    tracep->declBus(c+714,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+715,"rd_used", false,-1);
    tracep->declBus(c+716,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fwd_oa\206 ");
    tracep->declBit(c+717,"rf_wr_en", false,-1);
    tracep->declBit(c+718,"mem_read", false,-1);
    tracep->declBit(c+719,"valid", false,-1);
    tracep->declBus(c+720,"rd", false,-1, 4,0);
    tracep->declBus(c+721,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+722,"byte_offset", false,-1, 1,0);
    tracep->declBus(c+723,"pre_data", false,-1, 31,0);
    tracep->declBit(c+724,"sign", false,-1);
    tracep->declBit(c+725,"sign_ext", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+726+i*1,"bytes", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+730+i*1,"halfs", true,(i+0), 15,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_wb_stage ");
    tracep->declBit(c+732,"valid_i", false,-1);
    tracep->pushNamePrefix("mem_state_i\206 ");
    tracep->declBus(c+733,"next_pc", false,-1, 31,0);
    tracep->declBus(c+734,"alu_out", false,-1, 31,0);
    tracep->declBit(c+735,"rf_wr_en", false,-1);
    tracep->declBus(c+736,"rf_wr_src", false,-1, 1,0);
    tracep->declBit(c+737,"mem_read", false,-1);
    tracep->declBit(c+738,"mem_sign", false,-1);
    tracep->declBus(c+739,"mem_width", false,-1, 1,0);
    tracep->declBus(c+740,"mem_dout", false,-1, 31,0);
    tracep->declBus(c+741,"csr_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_meta_i\206 ");
    tracep->declBit(c+742,"rs1_used", false,-1);
    tracep->declBus(c+743,"rs1", false,-1, 4,0);
    tracep->declBus(c+744,"rs1_data", false,-1, 31,0);
    tracep->declBit(c+745,"rs2_used", false,-1);
    tracep->declBus(c+746,"rs2", false,-1, 4,0);
    tracep->declBus(c+747,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+748,"rd_used", false,-1);
    tracep->declBus(c+749,"rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("stage_ctrl_i\206 ");
    tracep->declBit(c+750,"squash", false,-1);
    tracep->declBit(c+751,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_fwd_oa\206 ");
    tracep->declBit(c+752,"rf_wr_en", false,-1);
    tracep->declBit(c+753,"mem_read", false,-1);
    tracep->declBit(c+754,"valid", false,-1);
    tracep->declBus(c+755,"rd", false,-1, 4,0);
    tracep->declBus(c+756,"rd_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+757,"rf_wr_en_oa", false,-1);
    tracep->declBus(c+758,"rf_wr_reg_oa", false,-1, 4,0);
    tracep->declBus(c+759,"rf_wr_data_oa", false,-1, 31,0);
    tracep->declBus(c+760,"rf_wr_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_memory ");
    tracep->declBus(c+1323,"NUM_COL", false,-1, 31,0);
    tracep->declBus(c+1324,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1319,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+761,"clk_i", false,-1);
    tracep->declBit(c+762,"pA_en_i", false,-1);
    tracep->declBus(c+763,"pA_strobe_i", false,-1, 3,0);
    tracep->declBus(c+764,"pA_addr_i", false,-1, 15,0);
    tracep->declBus(c+765,"pA_data_i", false,-1, 31,0);
    tracep->declBit(c+766,"pB_en_i", false,-1);
    tracep->declBus(c+767,"pB_strobe_i", false,-1, 3,0);
    tracep->declBus(c+768,"pB_addr_i", false,-1, 15,0);
    tracep->declBus(c+769,"pB_data_i", false,-1, 31,0);
    tracep->declBus(c+770,"pA_data_o", false,-1, 31,0);
    tracep->declBus(c+771,"pB_data_o", false,-1, 31,0);
    tracep->declBus(c+772,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_reg_file ");
    tracep->declBit(c+773,"clk_i", false,-1);
    tracep->declBus(c+774,"read1_i", false,-1, 4,0);
    tracep->declBus(c+775,"read2_i", false,-1, 4,0);
    tracep->declBus(c+776,"wr_reg_i", false,-1, 4,0);
    tracep->declBus(c+777,"wr_data_i", false,-1, 31,0);
    tracep->declBit(c+778,"wr_en_i", false,-1);
    tracep->declBus(c+779,"data1_ao", false,-1, 31,0);
    tracep->declBus(c+780,"data2_ao", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+781+i*1,"RF", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram ");
    tracep->declBus(c+1322,"SRAM_BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1326,"SRAM_END_ADDR", false,-1, 31,0);
    tracep->declBus(c+1327,"SRAM_NUM_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1328,"SRAM_LOG_BLOCKS", false,-1, 31,0);
    tracep->declBus(c+1329,"SRAM_LOG_BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+813,"clk_i", false,-1);
    tracep->declBit(c+814,"rst_ni", false,-1);
    tracep->declBit(c+815,"sram_d_req_i", false,-1);
    tracep->declBit(c+816,"sram_d_gnt_o", false,-1);
    tracep->declBus(c+817,"sram_d_addr_i", false,-1, 31,0);
    tracep->declBit(c+818,"sram_d_we_i", false,-1);
    tracep->declBus(c+819,"sram_d_be_i", false,-1, 3,0);
    tracep->declBus(c+820,"sram_d_wdata_i", false,-1, 31,0);
    tracep->declBit(c+821,"sram_d_rvalid_o", false,-1);
    tracep->declBus(c+822,"sram_d_rdata_o", false,-1, 31,0);
    tracep->declBit(c+823,"sram_i_req_i", false,-1);
    tracep->declBit(c+824,"sram_i_gnt_o", false,-1);
    tracep->declBus(c+825,"sram_i_addr_i", false,-1, 31,0);
    tracep->declBit(c+826,"sram_i_we_i", false,-1);
    tracep->declBus(c+827,"sram_i_be_i", false,-1, 3,0);
    tracep->declBus(c+828,"sram_i_wdata_i", false,-1, 31,0);
    tracep->declBit(c+829,"sram_i_rvalid_o", false,-1);
    tracep->declBus(c+830,"sram_i_rdata_o", false,-1, 31,0);
    tracep->declBit(c+831,"illegal_memory_o", false,-1);
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+832+i*1,"sram_d_read_vec", true,(i+0), 31,0);
    }
    for (int i = 0; i < 24; ++i) {
        tracep->declBus(c+856+i*1,"sram_i_read_vec", true,(i+0), 31,0);
    }
    tracep->declBus(c+880,"cs_data", false,-1, 23,0);
    tracep->declBus(c+881,"cs_inst", false,-1, 23,0);
    tracep->declBus(c+882,"cs_data_prev", false,-1, 23,0);
    tracep->declBus(c+883,"cs_inst_prev", false,-1, 23,0);
    tracep->declBus(c+884,"sram_d_cs_addr", false,-1, 4,0);
    tracep->declBus(c+885,"sram_i_cs_addr", false,-1, 4,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+886,"i", false,-1, 4,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+887,"clk0", false,-1);
    tracep->declBit(c+888,"csb0", false,-1);
    tracep->declBit(c+889,"web0", false,-1);
    tracep->declBus(c+890,"wmask0", false,-1, 3,0);
    tracep->declBus(c+891,"addr0", false,-1, 8,0);
    tracep->declBus(c+892,"din0", false,-1, 31,0);
    tracep->declBus(c+893,"dout0", false,-1, 31,0);
    tracep->declBit(c+894,"clk1", false,-1);
    tracep->declBit(c+895,"csb1", false,-1);
    tracep->declBus(c+896,"addr1", false,-1, 8,0);
    tracep->declBus(c+897,"dout1", false,-1, 31,0);
    tracep->declBit(c+898,"csb0_reg", false,-1);
    tracep->declBit(c+899,"web0_reg", false,-1);
    tracep->declBus(c+900,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+901,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+902,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+903,"csb1_reg", false,-1);
    tracep->declBus(c+904,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+905,"clk0", false,-1);
    tracep->declBit(c+906,"csb0", false,-1);
    tracep->declBit(c+907,"web0", false,-1);
    tracep->declBus(c+908,"wmask0", false,-1, 3,0);
    tracep->declBus(c+909,"addr0", false,-1, 8,0);
    tracep->declBus(c+910,"din0", false,-1, 31,0);
    tracep->declBus(c+911,"dout0", false,-1, 31,0);
    tracep->declBit(c+912,"clk1", false,-1);
    tracep->declBit(c+913,"csb1", false,-1);
    tracep->declBus(c+914,"addr1", false,-1, 8,0);
    tracep->declBus(c+915,"dout1", false,-1, 31,0);
    tracep->declBit(c+916,"csb0_reg", false,-1);
    tracep->declBit(c+917,"web0_reg", false,-1);
    tracep->declBus(c+918,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+919,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+920,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+921,"csb1_reg", false,-1);
    tracep->declBus(c+922,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+923,"clk0", false,-1);
    tracep->declBit(c+924,"csb0", false,-1);
    tracep->declBit(c+925,"web0", false,-1);
    tracep->declBus(c+926,"wmask0", false,-1, 3,0);
    tracep->declBus(c+927,"addr0", false,-1, 8,0);
    tracep->declBus(c+928,"din0", false,-1, 31,0);
    tracep->declBus(c+929,"dout0", false,-1, 31,0);
    tracep->declBit(c+930,"clk1", false,-1);
    tracep->declBit(c+931,"csb1", false,-1);
    tracep->declBus(c+932,"addr1", false,-1, 8,0);
    tracep->declBus(c+933,"dout1", false,-1, 31,0);
    tracep->declBit(c+934,"csb0_reg", false,-1);
    tracep->declBit(c+935,"web0_reg", false,-1);
    tracep->declBus(c+936,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+937,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+938,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+939,"csb1_reg", false,-1);
    tracep->declBus(c+940,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+941,"clk0", false,-1);
    tracep->declBit(c+942,"csb0", false,-1);
    tracep->declBit(c+943,"web0", false,-1);
    tracep->declBus(c+944,"wmask0", false,-1, 3,0);
    tracep->declBus(c+945,"addr0", false,-1, 8,0);
    tracep->declBus(c+946,"din0", false,-1, 31,0);
    tracep->declBus(c+947,"dout0", false,-1, 31,0);
    tracep->declBit(c+948,"clk1", false,-1);
    tracep->declBit(c+949,"csb1", false,-1);
    tracep->declBus(c+950,"addr1", false,-1, 8,0);
    tracep->declBus(c+951,"dout1", false,-1, 31,0);
    tracep->declBit(c+952,"csb0_reg", false,-1);
    tracep->declBit(c+953,"web0_reg", false,-1);
    tracep->declBus(c+954,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+955,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+956,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+957,"csb1_reg", false,-1);
    tracep->declBus(c+958,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+959,"clk0", false,-1);
    tracep->declBit(c+960,"csb0", false,-1);
    tracep->declBit(c+961,"web0", false,-1);
    tracep->declBus(c+962,"wmask0", false,-1, 3,0);
    tracep->declBus(c+963,"addr0", false,-1, 8,0);
    tracep->declBus(c+964,"din0", false,-1, 31,0);
    tracep->declBus(c+965,"dout0", false,-1, 31,0);
    tracep->declBit(c+966,"clk1", false,-1);
    tracep->declBit(c+967,"csb1", false,-1);
    tracep->declBus(c+968,"addr1", false,-1, 8,0);
    tracep->declBus(c+969,"dout1", false,-1, 31,0);
    tracep->declBit(c+970,"csb0_reg", false,-1);
    tracep->declBit(c+971,"web0_reg", false,-1);
    tracep->declBus(c+972,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+973,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+974,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+975,"csb1_reg", false,-1);
    tracep->declBus(c+976,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+977,"clk0", false,-1);
    tracep->declBit(c+978,"csb0", false,-1);
    tracep->declBit(c+979,"web0", false,-1);
    tracep->declBus(c+980,"wmask0", false,-1, 3,0);
    tracep->declBus(c+981,"addr0", false,-1, 8,0);
    tracep->declBus(c+982,"din0", false,-1, 31,0);
    tracep->declBus(c+983,"dout0", false,-1, 31,0);
    tracep->declBit(c+984,"clk1", false,-1);
    tracep->declBit(c+985,"csb1", false,-1);
    tracep->declBus(c+986,"addr1", false,-1, 8,0);
    tracep->declBus(c+987,"dout1", false,-1, 31,0);
    tracep->declBit(c+988,"csb0_reg", false,-1);
    tracep->declBit(c+989,"web0_reg", false,-1);
    tracep->declBus(c+990,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+991,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+992,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+993,"csb1_reg", false,-1);
    tracep->declBus(c+994,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+995,"clk0", false,-1);
    tracep->declBit(c+996,"csb0", false,-1);
    tracep->declBit(c+997,"web0", false,-1);
    tracep->declBus(c+998,"wmask0", false,-1, 3,0);
    tracep->declBus(c+999,"addr0", false,-1, 8,0);
    tracep->declBus(c+1000,"din0", false,-1, 31,0);
    tracep->declBus(c+1001,"dout0", false,-1, 31,0);
    tracep->declBit(c+1002,"clk1", false,-1);
    tracep->declBit(c+1003,"csb1", false,-1);
    tracep->declBus(c+1004,"addr1", false,-1, 8,0);
    tracep->declBus(c+1005,"dout1", false,-1, 31,0);
    tracep->declBit(c+1006,"csb0_reg", false,-1);
    tracep->declBit(c+1007,"web0_reg", false,-1);
    tracep->declBus(c+1008,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1009,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1010,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1011,"csb1_reg", false,-1);
    tracep->declBus(c+1012,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1013,"clk0", false,-1);
    tracep->declBit(c+1014,"csb0", false,-1);
    tracep->declBit(c+1015,"web0", false,-1);
    tracep->declBus(c+1016,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1017,"addr0", false,-1, 8,0);
    tracep->declBus(c+1018,"din0", false,-1, 31,0);
    tracep->declBus(c+1019,"dout0", false,-1, 31,0);
    tracep->declBit(c+1020,"clk1", false,-1);
    tracep->declBit(c+1021,"csb1", false,-1);
    tracep->declBus(c+1022,"addr1", false,-1, 8,0);
    tracep->declBus(c+1023,"dout1", false,-1, 31,0);
    tracep->declBit(c+1024,"csb0_reg", false,-1);
    tracep->declBit(c+1025,"web0_reg", false,-1);
    tracep->declBus(c+1026,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1027,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1028,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1029,"csb1_reg", false,-1);
    tracep->declBus(c+1030,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1031,"clk0", false,-1);
    tracep->declBit(c+1032,"csb0", false,-1);
    tracep->declBit(c+1033,"web0", false,-1);
    tracep->declBus(c+1034,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1035,"addr0", false,-1, 8,0);
    tracep->declBus(c+1036,"din0", false,-1, 31,0);
    tracep->declBus(c+1037,"dout0", false,-1, 31,0);
    tracep->declBit(c+1038,"clk1", false,-1);
    tracep->declBit(c+1039,"csb1", false,-1);
    tracep->declBus(c+1040,"addr1", false,-1, 8,0);
    tracep->declBus(c+1041,"dout1", false,-1, 31,0);
    tracep->declBit(c+1042,"csb0_reg", false,-1);
    tracep->declBit(c+1043,"web0_reg", false,-1);
    tracep->declBus(c+1044,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1045,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1046,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1047,"csb1_reg", false,-1);
    tracep->declBus(c+1048,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1049,"clk0", false,-1);
    tracep->declBit(c+1050,"csb0", false,-1);
    tracep->declBit(c+1051,"web0", false,-1);
    tracep->declBus(c+1052,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1053,"addr0", false,-1, 8,0);
    tracep->declBus(c+1054,"din0", false,-1, 31,0);
    tracep->declBus(c+1055,"dout0", false,-1, 31,0);
    tracep->declBit(c+1056,"clk1", false,-1);
    tracep->declBit(c+1057,"csb1", false,-1);
    tracep->declBus(c+1058,"addr1", false,-1, 8,0);
    tracep->declBus(c+1059,"dout1", false,-1, 31,0);
    tracep->declBit(c+1060,"csb0_reg", false,-1);
    tracep->declBit(c+1061,"web0_reg", false,-1);
    tracep->declBus(c+1062,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1063,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1064,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1065,"csb1_reg", false,-1);
    tracep->declBus(c+1066,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1067,"clk0", false,-1);
    tracep->declBit(c+1068,"csb0", false,-1);
    tracep->declBit(c+1069,"web0", false,-1);
    tracep->declBus(c+1070,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1071,"addr0", false,-1, 8,0);
    tracep->declBus(c+1072,"din0", false,-1, 31,0);
    tracep->declBus(c+1073,"dout0", false,-1, 31,0);
    tracep->declBit(c+1074,"clk1", false,-1);
    tracep->declBit(c+1075,"csb1", false,-1);
    tracep->declBus(c+1076,"addr1", false,-1, 8,0);
    tracep->declBus(c+1077,"dout1", false,-1, 31,0);
    tracep->declBit(c+1078,"csb0_reg", false,-1);
    tracep->declBit(c+1079,"web0_reg", false,-1);
    tracep->declBus(c+1080,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1081,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1082,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1083,"csb1_reg", false,-1);
    tracep->declBus(c+1084,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1085,"clk0", false,-1);
    tracep->declBit(c+1086,"csb0", false,-1);
    tracep->declBit(c+1087,"web0", false,-1);
    tracep->declBus(c+1088,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1089,"addr0", false,-1, 8,0);
    tracep->declBus(c+1090,"din0", false,-1, 31,0);
    tracep->declBus(c+1091,"dout0", false,-1, 31,0);
    tracep->declBit(c+1092,"clk1", false,-1);
    tracep->declBit(c+1093,"csb1", false,-1);
    tracep->declBus(c+1094,"addr1", false,-1, 8,0);
    tracep->declBus(c+1095,"dout1", false,-1, 31,0);
    tracep->declBit(c+1096,"csb0_reg", false,-1);
    tracep->declBit(c+1097,"web0_reg", false,-1);
    tracep->declBus(c+1098,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1099,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1100,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1101,"csb1_reg", false,-1);
    tracep->declBus(c+1102,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1103,"clk0", false,-1);
    tracep->declBit(c+1104,"csb0", false,-1);
    tracep->declBit(c+1105,"web0", false,-1);
    tracep->declBus(c+1106,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1107,"addr0", false,-1, 8,0);
    tracep->declBus(c+1108,"din0", false,-1, 31,0);
    tracep->declBus(c+1109,"dout0", false,-1, 31,0);
    tracep->declBit(c+1110,"clk1", false,-1);
    tracep->declBit(c+1111,"csb1", false,-1);
    tracep->declBus(c+1112,"addr1", false,-1, 8,0);
    tracep->declBus(c+1113,"dout1", false,-1, 31,0);
    tracep->declBit(c+1114,"csb0_reg", false,-1);
    tracep->declBit(c+1115,"web0_reg", false,-1);
    tracep->declBus(c+1116,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1117,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1118,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1119,"csb1_reg", false,-1);
    tracep->declBus(c+1120,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1121,"clk0", false,-1);
    tracep->declBit(c+1122,"csb0", false,-1);
    tracep->declBit(c+1123,"web0", false,-1);
    tracep->declBus(c+1124,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1125,"addr0", false,-1, 8,0);
    tracep->declBus(c+1126,"din0", false,-1, 31,0);
    tracep->declBus(c+1127,"dout0", false,-1, 31,0);
    tracep->declBit(c+1128,"clk1", false,-1);
    tracep->declBit(c+1129,"csb1", false,-1);
    tracep->declBus(c+1130,"addr1", false,-1, 8,0);
    tracep->declBus(c+1131,"dout1", false,-1, 31,0);
    tracep->declBit(c+1132,"csb0_reg", false,-1);
    tracep->declBit(c+1133,"web0_reg", false,-1);
    tracep->declBus(c+1134,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1135,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1136,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1137,"csb1_reg", false,-1);
    tracep->declBus(c+1138,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1139,"clk0", false,-1);
    tracep->declBit(c+1140,"csb0", false,-1);
    tracep->declBit(c+1141,"web0", false,-1);
    tracep->declBus(c+1142,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1143,"addr0", false,-1, 8,0);
    tracep->declBus(c+1144,"din0", false,-1, 31,0);
    tracep->declBus(c+1145,"dout0", false,-1, 31,0);
    tracep->declBit(c+1146,"clk1", false,-1);
    tracep->declBit(c+1147,"csb1", false,-1);
    tracep->declBus(c+1148,"addr1", false,-1, 8,0);
    tracep->declBus(c+1149,"dout1", false,-1, 31,0);
    tracep->declBit(c+1150,"csb0_reg", false,-1);
    tracep->declBit(c+1151,"web0_reg", false,-1);
    tracep->declBus(c+1152,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1153,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1154,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1155,"csb1_reg", false,-1);
    tracep->declBus(c+1156,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1157,"clk0", false,-1);
    tracep->declBit(c+1158,"csb0", false,-1);
    tracep->declBit(c+1159,"web0", false,-1);
    tracep->declBus(c+1160,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1161,"addr0", false,-1, 8,0);
    tracep->declBus(c+1162,"din0", false,-1, 31,0);
    tracep->declBus(c+1163,"dout0", false,-1, 31,0);
    tracep->declBit(c+1164,"clk1", false,-1);
    tracep->declBit(c+1165,"csb1", false,-1);
    tracep->declBus(c+1166,"addr1", false,-1, 8,0);
    tracep->declBus(c+1167,"dout1", false,-1, 31,0);
    tracep->declBit(c+1168,"csb0_reg", false,-1);
    tracep->declBit(c+1169,"web0_reg", false,-1);
    tracep->declBus(c+1170,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1171,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1172,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1173,"csb1_reg", false,-1);
    tracep->declBus(c+1174,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1175,"clk0", false,-1);
    tracep->declBit(c+1176,"csb0", false,-1);
    tracep->declBit(c+1177,"web0", false,-1);
    tracep->declBus(c+1178,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1179,"addr0", false,-1, 8,0);
    tracep->declBus(c+1180,"din0", false,-1, 31,0);
    tracep->declBus(c+1181,"dout0", false,-1, 31,0);
    tracep->declBit(c+1182,"clk1", false,-1);
    tracep->declBit(c+1183,"csb1", false,-1);
    tracep->declBus(c+1184,"addr1", false,-1, 8,0);
    tracep->declBus(c+1185,"dout1", false,-1, 31,0);
    tracep->declBit(c+1186,"csb0_reg", false,-1);
    tracep->declBit(c+1187,"web0_reg", false,-1);
    tracep->declBus(c+1188,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1189,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1190,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1191,"csb1_reg", false,-1);
    tracep->declBus(c+1192,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1193,"clk0", false,-1);
    tracep->declBit(c+1194,"csb0", false,-1);
    tracep->declBit(c+1195,"web0", false,-1);
    tracep->declBus(c+1196,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1197,"addr0", false,-1, 8,0);
    tracep->declBus(c+1198,"din0", false,-1, 31,0);
    tracep->declBus(c+1199,"dout0", false,-1, 31,0);
    tracep->declBit(c+1200,"clk1", false,-1);
    tracep->declBit(c+1201,"csb1", false,-1);
    tracep->declBus(c+1202,"addr1", false,-1, 8,0);
    tracep->declBus(c+1203,"dout1", false,-1, 31,0);
    tracep->declBit(c+1204,"csb0_reg", false,-1);
    tracep->declBit(c+1205,"web0_reg", false,-1);
    tracep->declBus(c+1206,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1207,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1208,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1209,"csb1_reg", false,-1);
    tracep->declBus(c+1210,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1211,"clk0", false,-1);
    tracep->declBit(c+1212,"csb0", false,-1);
    tracep->declBit(c+1213,"web0", false,-1);
    tracep->declBus(c+1214,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1215,"addr0", false,-1, 8,0);
    tracep->declBus(c+1216,"din0", false,-1, 31,0);
    tracep->declBus(c+1217,"dout0", false,-1, 31,0);
    tracep->declBit(c+1218,"clk1", false,-1);
    tracep->declBit(c+1219,"csb1", false,-1);
    tracep->declBus(c+1220,"addr1", false,-1, 8,0);
    tracep->declBus(c+1221,"dout1", false,-1, 31,0);
    tracep->declBit(c+1222,"csb0_reg", false,-1);
    tracep->declBit(c+1223,"web0_reg", false,-1);
    tracep->declBus(c+1224,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1225,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1226,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1227,"csb1_reg", false,-1);
    tracep->declBus(c+1228,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1229,"clk0", false,-1);
    tracep->declBit(c+1230,"csb0", false,-1);
    tracep->declBit(c+1231,"web0", false,-1);
    tracep->declBus(c+1232,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1233,"addr0", false,-1, 8,0);
    tracep->declBus(c+1234,"din0", false,-1, 31,0);
    tracep->declBus(c+1235,"dout0", false,-1, 31,0);
    tracep->declBit(c+1236,"clk1", false,-1);
    tracep->declBit(c+1237,"csb1", false,-1);
    tracep->declBus(c+1238,"addr1", false,-1, 8,0);
    tracep->declBus(c+1239,"dout1", false,-1, 31,0);
    tracep->declBit(c+1240,"csb0_reg", false,-1);
    tracep->declBit(c+1241,"web0_reg", false,-1);
    tracep->declBus(c+1242,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1243,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1244,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1245,"csb1_reg", false,-1);
    tracep->declBus(c+1246,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1247,"clk0", false,-1);
    tracep->declBit(c+1248,"csb0", false,-1);
    tracep->declBit(c+1249,"web0", false,-1);
    tracep->declBus(c+1250,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1251,"addr0", false,-1, 8,0);
    tracep->declBus(c+1252,"din0", false,-1, 31,0);
    tracep->declBus(c+1253,"dout0", false,-1, 31,0);
    tracep->declBit(c+1254,"clk1", false,-1);
    tracep->declBit(c+1255,"csb1", false,-1);
    tracep->declBus(c+1256,"addr1", false,-1, 8,0);
    tracep->declBus(c+1257,"dout1", false,-1, 31,0);
    tracep->declBit(c+1258,"csb0_reg", false,-1);
    tracep->declBit(c+1259,"web0_reg", false,-1);
    tracep->declBus(c+1260,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1261,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1262,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1263,"csb1_reg", false,-1);
    tracep->declBus(c+1264,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1265,"clk0", false,-1);
    tracep->declBit(c+1266,"csb0", false,-1);
    tracep->declBit(c+1267,"web0", false,-1);
    tracep->declBus(c+1268,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1269,"addr0", false,-1, 8,0);
    tracep->declBus(c+1270,"din0", false,-1, 31,0);
    tracep->declBus(c+1271,"dout0", false,-1, 31,0);
    tracep->declBit(c+1272,"clk1", false,-1);
    tracep->declBit(c+1273,"csb1", false,-1);
    tracep->declBus(c+1274,"addr1", false,-1, 8,0);
    tracep->declBus(c+1275,"dout1", false,-1, 31,0);
    tracep->declBit(c+1276,"csb0_reg", false,-1);
    tracep->declBit(c+1277,"web0_reg", false,-1);
    tracep->declBus(c+1278,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1279,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1280,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1281,"csb1_reg", false,-1);
    tracep->declBus(c+1282,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1283,"clk0", false,-1);
    tracep->declBit(c+1284,"csb0", false,-1);
    tracep->declBit(c+1285,"web0", false,-1);
    tracep->declBus(c+1286,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1287,"addr0", false,-1, 8,0);
    tracep->declBus(c+1288,"din0", false,-1, 31,0);
    tracep->declBus(c+1289,"dout0", false,-1, 31,0);
    tracep->declBit(c+1290,"clk1", false,-1);
    tracep->declBit(c+1291,"csb1", false,-1);
    tracep->declBus(c+1292,"addr1", false,-1, 8,0);
    tracep->declBus(c+1293,"dout1", false,-1, 31,0);
    tracep->declBit(c+1294,"csb0_reg", false,-1);
    tracep->declBit(c+1295,"web0_reg", false,-1);
    tracep->declBus(c+1296,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1297,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1298,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1299,"csb1_reg", false,-1);
    tracep->declBus(c+1300,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1323,"NUM_WMASKS", false,-1, 31,0);
    tracep->declBus(c+1325,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1330,"RAM_DEPTH", false,-1, 31,0);
    tracep->declBus(c+1331,"DELAY", false,-1, 31,0);
    tracep->declBus(c+1332,"VERBOSE", false,-1, 31,0);
    tracep->declBus(c+1332,"T_HOLD", false,-1, 31,0);
    tracep->declBit(c+1301,"clk0", false,-1);
    tracep->declBit(c+1302,"csb0", false,-1);
    tracep->declBit(c+1303,"web0", false,-1);
    tracep->declBus(c+1304,"wmask0", false,-1, 3,0);
    tracep->declBus(c+1305,"addr0", false,-1, 8,0);
    tracep->declBus(c+1306,"din0", false,-1, 31,0);
    tracep->declBus(c+1307,"dout0", false,-1, 31,0);
    tracep->declBit(c+1308,"clk1", false,-1);
    tracep->declBit(c+1309,"csb1", false,-1);
    tracep->declBus(c+1310,"addr1", false,-1, 8,0);
    tracep->declBus(c+1311,"dout1", false,-1, 31,0);
    tracep->declBit(c+1312,"csb0_reg", false,-1);
    tracep->declBit(c+1313,"web0_reg", false,-1);
    tracep->declBus(c+1314,"wmask0_reg", false,-1, 3,0);
    tracep->declBus(c+1315,"addr0_reg", false,-1, 8,0);
    tracep->declBus(c+1316,"din0_reg", false,-1, 31,0);
    tracep->declBit(c+1317,"csb1_reg", false,-1);
    tracep->declBus(c+1318,"addr1_reg", false,-1, 8,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("soc_sram ");
    tracep->pushNamePrefix("sram ");
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[10] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[11] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[13] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[14] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[15] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[17] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[18] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[19] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[21] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[22] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[23] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[5] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[6] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[7] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[9] ");
    tracep->pushNamePrefix("sram1 ");
    Vtop___024root__trace_init_sub__TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->rst_ni));
    bufp->fullBit(oldp+3,(vlSelf->boot_sel_soft_i));
    bufp->fullBit(oldp+4,(vlSelf->boot_sel_src_i));
    bufp->fullBit(oldp+5,(vlSelf->sram_mux_sel_i));
    bufp->fullBit(oldp+6,(vlSelf->caravel_wb_rst_i));
    bufp->fullBit(oldp+7,(vlSelf->caravel_wbs_stb_i));
    bufp->fullBit(oldp+8,(vlSelf->caravel_wbs_cyc_i));
    bufp->fullBit(oldp+9,(vlSelf->caravel_wbs_we_i));
    bufp->fullCData(oldp+10,(vlSelf->caravel_wbs_sel_i),4);
    bufp->fullIData(oldp+11,(vlSelf->caravel_wbs_dat_i),32);
    bufp->fullIData(oldp+12,(vlSelf->caravel_wbs_adr_i),32);
    bufp->fullBit(oldp+13,(vlSelf->caravel_wbs_ack_o));
    bufp->fullIData(oldp+14,(vlSelf->caravel_wbs_dat_o),32);
    bufp->fullWData(oldp+15,(vlSelf->la_data_i),128);
    bufp->fullWData(oldp+19,(vlSelf->la_data_o),128);
    bufp->fullWData(oldp+23,(vlSelf->la_oe_no),128);
    bufp->fullQData(oldp+27,(vlSelf->gpio_i),38);
    bufp->fullQData(oldp+29,(vlSelf->gpio_o),38);
    bufp->fullQData(oldp+31,(vlSelf->gpio_oeb_no),38);
    bufp->fullCData(oldp+33,(vlSelf->caravel_interrupt_o),3);
    bufp->fullBit(oldp+34,(vlSelf->soc_sram__DOT__clk_i));
    bufp->fullBit(oldp+35,(vlSelf->soc_sram__DOT__rst_ni));
    bufp->fullBit(oldp+36,(vlSelf->soc_sram__DOT__boot_sel_soft_i));
    bufp->fullBit(oldp+37,(vlSelf->soc_sram__DOT__boot_sel_src_i));
    bufp->fullBit(oldp+38,(vlSelf->soc_sram__DOT__sram_mux_sel_i));
    bufp->fullBit(oldp+39,(vlSelf->soc_sram__DOT__caravel_wb_rst_i));
    bufp->fullBit(oldp+40,(vlSelf->soc_sram__DOT__caravel_wbs_stb_i));
    bufp->fullBit(oldp+41,(vlSelf->soc_sram__DOT__caravel_wbs_cyc_i));
    bufp->fullBit(oldp+42,(vlSelf->soc_sram__DOT__caravel_wbs_we_i));
    bufp->fullCData(oldp+43,(vlSelf->soc_sram__DOT__caravel_wbs_sel_i),4);
    bufp->fullIData(oldp+44,(vlSelf->soc_sram__DOT__caravel_wbs_dat_i),32);
    bufp->fullIData(oldp+45,(vlSelf->soc_sram__DOT__caravel_wbs_adr_i),32);
    bufp->fullBit(oldp+46,(vlSelf->soc_sram__DOT__caravel_wbs_ack_o));
    bufp->fullIData(oldp+47,(vlSelf->soc_sram__DOT__caravel_wbs_dat_o),32);
    bufp->fullWData(oldp+48,(vlSelf->soc_sram__DOT__la_data_i),128);
    bufp->fullWData(oldp+52,(vlSelf->soc_sram__DOT__la_data_o),128);
    bufp->fullWData(oldp+56,(vlSelf->soc_sram__DOT__la_oe_no),128);
    bufp->fullQData(oldp+60,(vlSelf->soc_sram__DOT__gpio_i),38);
    bufp->fullQData(oldp+62,(vlSelf->soc_sram__DOT__gpio_o),38);
    bufp->fullQData(oldp+64,(vlSelf->soc_sram__DOT__gpio_oeb_no),38);
    bufp->fullCData(oldp+66,(vlSelf->soc_sram__DOT__caravel_interrupt_o),3);
    bufp->fullBit(oldp+67,(vlSelf->soc_sram__DOT__dmem_req));
    bufp->fullBit(oldp+68,(vlSelf->soc_sram__DOT__dmem_gnt));
    bufp->fullBit(oldp+69,(vlSelf->soc_sram__DOT__dmem_we));
    bufp->fullBit(oldp+70,(vlSelf->soc_sram__DOT__dmem_rvalid));
    bufp->fullIData(oldp+71,(vlSelf->soc_sram__DOT__dmem_addr),32);
    bufp->fullIData(oldp+72,(vlSelf->soc_sram__DOT__dmem_wdata),32);
    bufp->fullIData(oldp+73,(vlSelf->soc_sram__DOT__dmem_rdata),32);
    bufp->fullCData(oldp+74,(vlSelf->soc_sram__DOT__dmem_be),4);
    bufp->fullBit(oldp+75,(vlSelf->soc_sram__DOT__imem_req));
    bufp->fullBit(oldp+76,(vlSelf->soc_sram__DOT__imem_gnt));
    bufp->fullBit(oldp+77,(vlSelf->soc_sram__DOT__imem_we));
    bufp->fullBit(oldp+78,(vlSelf->soc_sram__DOT__imem_rvalid));
    bufp->fullIData(oldp+79,(vlSelf->soc_sram__DOT__imem_addr),32);
    bufp->fullIData(oldp+80,(vlSelf->soc_sram__DOT__imem_wdata),32);
    bufp->fullIData(oldp+81,(vlSelf->soc_sram__DOT__imem_rdata),32);
    bufp->fullCData(oldp+82,(vlSelf->soc_sram__DOT__imem_be),4);
    bufp->fullBit(oldp+83,(vlSelf->soc_sram__DOT__sram_d_req));
    bufp->fullBit(oldp+84,(vlSelf->soc_sram__DOT__sram_d_gnt));
    bufp->fullBit(oldp+85,(vlSelf->soc_sram__DOT__sram_d_we));
    bufp->fullBit(oldp+86,(vlSelf->soc_sram__DOT__sram_d_rvalid));
    bufp->fullIData(oldp+87,(vlSelf->soc_sram__DOT__sram_d_addr),32);
    bufp->fullIData(oldp+88,(vlSelf->soc_sram__DOT__sram_d_wdata),32);
    bufp->fullIData(oldp+89,(vlSelf->soc_sram__DOT__sram_d_rdata),32);
    bufp->fullCData(oldp+90,(vlSelf->soc_sram__DOT__sram_d_be),4);
    bufp->fullBit(oldp+91,(vlSelf->soc_sram__DOT__sram_i_req));
    bufp->fullBit(oldp+92,(vlSelf->soc_sram__DOT__sram_i_gnt));
    bufp->fullBit(oldp+93,(vlSelf->soc_sram__DOT__sram_i_we));
    bufp->fullBit(oldp+94,(vlSelf->soc_sram__DOT__sram_i_rvalid));
    bufp->fullIData(oldp+95,(vlSelf->soc_sram__DOT__sram_i_addr),32);
    bufp->fullIData(oldp+96,(vlSelf->soc_sram__DOT__sram_i_wdata),32);
    bufp->fullIData(oldp+97,(vlSelf->soc_sram__DOT__sram_i_rdata),32);
    bufp->fullCData(oldp+98,(vlSelf->soc_sram__DOT__sram_i_be),4);
    bufp->fullBit(oldp+99,(vlSelf->soc_sram__DOT__peripheral_req));
    bufp->fullBit(oldp+100,(vlSelf->soc_sram__DOT__peripheral_gnt));
    bufp->fullBit(oldp+101,(vlSelf->soc_sram__DOT__peripheral_we));
    bufp->fullBit(oldp+102,(vlSelf->soc_sram__DOT__peripheral_rvalid));
    bufp->fullIData(oldp+103,(vlSelf->soc_sram__DOT__peripheral_addr),32);
    bufp->fullIData(oldp+104,(vlSelf->soc_sram__DOT__peripheral_wdata),32);
    bufp->fullIData(oldp+105,(vlSelf->soc_sram__DOT__peripheral_rdata),32);
    bufp->fullCData(oldp+106,(vlSelf->soc_sram__DOT__peripheral_be),4);
    bufp->fullBit(oldp+107,(vlSelf->soc_sram__DOT__flash_req));
    bufp->fullBit(oldp+108,(vlSelf->soc_sram__DOT__flash_gnt));
    bufp->fullBit(oldp+109,(vlSelf->soc_sram__DOT__flash_we));
    bufp->fullBit(oldp+110,(vlSelf->soc_sram__DOT__flash_rvalid));
    bufp->fullIData(oldp+111,(vlSelf->soc_sram__DOT__flash_addr),32);
    bufp->fullIData(oldp+112,(vlSelf->soc_sram__DOT__flash_wdata),32);
    bufp->fullIData(oldp+113,(vlSelf->soc_sram__DOT__flash_rdata),32);
    bufp->fullCData(oldp+114,(vlSelf->soc_sram__DOT__flash_be),4);
    bufp->fullBit(oldp+115,(vlSelf->soc_sram__DOT__caravel_req));
    bufp->fullBit(oldp+116,(vlSelf->soc_sram__DOT__caravel_gnt));
    bufp->fullBit(oldp+117,(vlSelf->soc_sram__DOT__caravel_we));
    bufp->fullBit(oldp+118,(vlSelf->soc_sram__DOT__caravel_rvalid));
    bufp->fullIData(oldp+119,(vlSelf->soc_sram__DOT__caravel_addr),32);
    bufp->fullIData(oldp+120,(vlSelf->soc_sram__DOT__caravel_wdata),32);
    bufp->fullIData(oldp+121,(vlSelf->soc_sram__DOT__caravel_rdata),32);
    bufp->fullCData(oldp+122,(vlSelf->soc_sram__DOT__caravel_be),4);
    bufp->fullBit(oldp+123,(vlSelf->soc_sram__DOT__sram_d_muxed_req));
    bufp->fullBit(oldp+124,(vlSelf->soc_sram__DOT__sram_d_muxed_gnt));
    bufp->fullBit(oldp+125,(vlSelf->soc_sram__DOT__sram_d_muxed_we));
    bufp->fullBit(oldp+126,(vlSelf->soc_sram__DOT__sram_d_muxed_rvalid));
    bufp->fullIData(oldp+127,(vlSelf->soc_sram__DOT__sram_d_muxed_addr),32);
    bufp->fullIData(oldp+128,(vlSelf->soc_sram__DOT__sram_d_muxed_wdata),32);
    bufp->fullIData(oldp+129,(vlSelf->soc_sram__DOT__sram_d_muxed_rdata),32);
    bufp->fullCData(oldp+130,(vlSelf->soc_sram__DOT__sram_d_muxed_be),4);
    bufp->fullCData(oldp+131,(vlSelf->soc_sram__DOT__rf_port1_reg),5);
    bufp->fullCData(oldp+132,(vlSelf->soc_sram__DOT__rf_port2_reg),5);
    bufp->fullCData(oldp+133,(vlSelf->soc_sram__DOT__rf_wr_reg),5);
    bufp->fullIData(oldp+134,(vlSelf->soc_sram__DOT__rf_rs1),32);
    bufp->fullIData(oldp+135,(vlSelf->soc_sram__DOT__rf_rs2),32);
    bufp->fullIData(oldp+136,(vlSelf->soc_sram__DOT__rf_wr_data),32);
    bufp->fullBit(oldp+137,(vlSelf->soc_sram__DOT__rf_wr_en));
    bufp->fullBit(oldp+138,(vlSelf->soc_sram__DOT__timer_intr));
    bufp->fullBit(oldp+139,(vlSelf->soc_sram__DOT__m_ext_intr));
    bufp->fullBit(oldp+140,(vlSelf->soc_sram__DOT__p_int_read));
    bufp->fullBit(oldp+141,(vlSelf->soc_sram__DOT__csr_busy));
    bufp->fullIData(oldp+142,(vlSelf->soc_sram__DOT__mcause),31);
    bufp->fullIData(oldp+143,(vlSelf->soc_sram__DOT__dmem_rdata_1),32);
    bufp->fullIData(oldp+144,(vlSelf->soc_sram__DOT__dmem_rdata_2),32);
    bufp->fullBit(oldp+145,(vlSelf->soc_sram__DOT__dmem_rvalid_1));
    bufp->fullBit(oldp+146,(vlSelf->soc_sram__DOT__is_sram_wrap));
    bufp->fullBit(oldp+147,(vlSelf->soc_sram__DOT__is_sram_wrap_prev));
    bufp->fullCData(oldp+148,(vlSelf->soc_sram__DOT__unused),8);
    bufp->fullIData(oldp+149,(vlSelf->soc_sram__DOT__unused2[0U]),32);
    bufp->fullIData(oldp+150,(vlSelf->soc_sram__DOT__unused2[1U]),32);
    bufp->fullIData(oldp+151,(vlSelf->soc_sram__DOT__unused2[2U]),32);
    bufp->fullIData(oldp+152,(vlSelf->soc_sram__DOT__unused2[3U]),32);
    bufp->fullBit(oldp+153,(vlSelf->soc_sram__DOT__i_core__DOT__clk_i));
    bufp->fullBit(oldp+154,(vlSelf->soc_sram__DOT__i_core__DOT__rst_ni));
    bufp->fullBit(oldp+155,(vlSelf->soc_sram__DOT__i_core__DOT__timer_intr_i));
    bufp->fullBit(oldp+156,(vlSelf->soc_sram__DOT__i_core__DOT__m_ext_intr_i));
    bufp->fullIData(oldp+157,(vlSelf->soc_sram__DOT__i_core__DOT__mcause_i),31);
    bufp->fullBit(oldp+158,(vlSelf->soc_sram__DOT__i_core__DOT__p_int_read_o));
    bufp->fullBit(oldp+159,(vlSelf->soc_sram__DOT__i_core__DOT__csr_busy_o));
    bufp->fullBit(oldp+160,(vlSelf->soc_sram__DOT__i_core__DOT__boot_sel_i));
    bufp->fullBit(oldp+161,(vlSelf->soc_sram__DOT__i_core__DOT__imem_req_o));
    bufp->fullBit(oldp+162,(vlSelf->soc_sram__DOT__i_core__DOT__imem_gnt_i));
    bufp->fullIData(oldp+163,(vlSelf->soc_sram__DOT__i_core__DOT__imem_addr_o),32);
    bufp->fullBit(oldp+164,(vlSelf->soc_sram__DOT__i_core__DOT__imem_we_o));
    bufp->fullCData(oldp+165,(vlSelf->soc_sram__DOT__i_core__DOT__imem_be_o),4);
    bufp->fullIData(oldp+166,(vlSelf->soc_sram__DOT__i_core__DOT__imem_wdata_o),32);
    bufp->fullBit(oldp+167,(vlSelf->soc_sram__DOT__i_core__DOT__imem_rvalid_i));
    bufp->fullIData(oldp+168,(vlSelf->soc_sram__DOT__i_core__DOT__imem_rdata_i),32);
    bufp->fullCData(oldp+169,(vlSelf->soc_sram__DOT__i_core__DOT__rf_port1_reg_o),5);
    bufp->fullCData(oldp+170,(vlSelf->soc_sram__DOT__i_core__DOT__rf_port2_reg_o),5);
    bufp->fullBit(oldp+171,(vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_en_o));
    bufp->fullCData(oldp+172,(vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_reg_o),5);
    bufp->fullIData(oldp+173,(vlSelf->soc_sram__DOT__i_core__DOT__rf_wr_data_o),32);
    bufp->fullIData(oldp+174,(vlSelf->soc_sram__DOT__i_core__DOT__rf_rs1_i),32);
    bufp->fullIData(oldp+175,(vlSelf->soc_sram__DOT__i_core__DOT__rf_rs2_i),32);
    bufp->fullBit(oldp+176,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_req_o));
    bufp->fullBit(oldp+177,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_gnt_i));
    bufp->fullIData(oldp+178,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_addr_o),32);
    bufp->fullBit(oldp+179,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_we_o));
    bufp->fullCData(oldp+180,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_be_o),4);
    bufp->fullIData(oldp+181,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_wdata_o),32);
    bufp->fullBit(oldp+182,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rvalid_i));
    bufp->fullIData(oldp+183,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rdata_i),32);
    bufp->fullIData(oldp+184,((IData)((vlSelf->soc_sram__DOT__i_core__DOT__fetch_state 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+185,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__fetch_state)),32);
    bufp->fullBit(oldp+186,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                                   >> 9U))));
    bufp->fullCData(oldp+187,((7U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                                     >> 6U))),3);
    bufp->fullCData(oldp+188,((0xfU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U] 
                                       >> 2U))),4);
    bufp->fullCData(oldp+189,((3U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[8U])),2);
    bufp->fullCData(oldp+190,((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                               >> 0x1eU)),2);
    bufp->fullIData(oldp+191,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[7U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+192,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[6U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+193,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[5U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+194,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[4U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+195,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[3U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+196,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[2U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+197,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_state[1U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                          >> 0x1eU))),32);
    bufp->fullBit(oldp+198,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                   >> 0x1dU))));
    bufp->fullCData(oldp+199,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                     >> 0x1bU))),2);
    bufp->fullBit(oldp+200,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+202,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                   >> 0x18U))));
    bufp->fullCData(oldp+203,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+204,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+205,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                   >> 0x14U))));
    bufp->fullSData(oldp+206,((0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                         >> 8U))),12);
    bufp->fullCData(oldp+207,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+208,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U] 
                                        >> 1U))),5);
    bufp->fullBit(oldp+209,((1U & vlSelf->soc_sram__DOT__i_core__DOT__decode_state[0U])));
    bufp->fullIData(oldp+210,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[3U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+211,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_state[2U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+212,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                   >> 6U))));
    bufp->fullCData(oldp+213,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+214,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+215,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U] 
                                   >> 2U))));
    bufp->fullCData(oldp+216,((3U & vlSelf->soc_sram__DOT__i_core__DOT__exec_state[1U])),2);
    bufp->fullIData(oldp+217,(vlSelf->soc_sram__DOT__i_core__DOT__exec_state[0U]),32);
    bufp->fullIData(oldp+218,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_state[4U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+219,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_state[3U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+220,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                   >> 6U))));
    bufp->fullCData(oldp+221,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+222,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                   >> 3U))));
    bufp->fullBit(oldp+223,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U] 
                                   >> 2U))));
    bufp->fullCData(oldp+224,((3U & vlSelf->soc_sram__DOT__i_core__DOT__mem_state[2U])),2);
    bufp->fullIData(oldp+225,(vlSelf->soc_sram__DOT__i_core__DOT__mem_state[1U]),32);
    bufp->fullIData(oldp+226,(vlSelf->soc_sram__DOT__i_core__DOT__mem_state[0U]),32);
    bufp->fullBit(oldp+227,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+228,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__fetch_ctrl))));
    bufp->fullBit(oldp+229,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+230,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__decode_ctrl))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+232,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__exec_ctrl))));
    bufp->fullBit(oldp+233,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+234,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_ctrl))));
    bufp->fullBit(oldp+235,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+236,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_ctrl))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+238,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+239,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+240,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+241,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+242,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+243,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+244,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta[0U])),5);
    bufp->fullBit(oldp+245,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+246,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+247,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+248,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+249,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+250,(((vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+251,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+252,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__decode_reg_meta_updated[0U])),5);
    bufp->fullBit(oldp+253,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+254,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+255,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+256,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+257,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+258,(((vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+259,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+260,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__exec_reg_meta[0U])),5);
    bufp->fullBit(oldp+261,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+262,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+263,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+264,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+265,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+266,(((vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+267,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+268,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__mem_reg_meta[0U])),5);
    bufp->fullBit(oldp+269,(vlSelf->soc_sram__DOT__i_core__DOT__fetch_valid));
    bufp->fullBit(oldp+270,(vlSelf->soc_sram__DOT__i_core__DOT__decode_valid));
    bufp->fullBit(oldp+271,(vlSelf->soc_sram__DOT__i_core__DOT__exec_valid));
    bufp->fullBit(oldp+272,(vlSelf->soc_sram__DOT__i_core__DOT__mem_valid));
    bufp->fullBit(oldp+273,(vlSelf->soc_sram__DOT__i_core__DOT__load_use_stall));
    bufp->fullBit(oldp+274,(vlSelf->soc_sram__DOT__i_core__DOT__csr_hold));
    bufp->fullBit(oldp+275,(vlSelf->soc_sram__DOT__i_core__DOT__imem_stall));
    bufp->fullBit(oldp+276,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_stall));
    bufp->fullBit(oldp+277,(vlSelf->soc_sram__DOT__i_core__DOT__branch_taken));
    bufp->fullBit(oldp+278,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+279,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+280,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+281,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+282,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__mem_fwd_data)),32);
    bufp->fullBit(oldp+283,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+284,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+285,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+286,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+287,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__wb_fwd_data)),32);
    bufp->fullBit(oldp+288,(vlSelf->soc_sram__DOT__i_core__DOT__pc_target_sel));
    bufp->fullBit(oldp+289,(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_sel));
    bufp->fullIData(oldp+290,(vlSelf->soc_sram__DOT__i_core__DOT__pc_target_addr),32);
    bufp->fullIData(oldp+291,(vlSelf->soc_sram__DOT__i_core__DOT__pc_intr_addr),32);
    bufp->fullIData(oldp+292,(vlSelf->soc_sram__DOT__i_core__DOT__pre_intr_pc),32);
    bufp->fullIData(oldp+293,(vlSelf->soc_sram__DOT__i_core__DOT__csr_out),32);
    bufp->fullBit(oldp+294,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_rd));
    bufp->fullBit(oldp+295,(vlSelf->soc_sram__DOT__i_core__DOT__dmem_wr));
    bufp->fullBit(oldp+296,(vlSelf->soc_sram__DOT__i_core__DOT__csr_flush));
    bufp->fullBit(oldp+297,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__clk_i));
    bufp->fullBit(oldp+298,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rst_ni));
    bufp->fullBit(oldp+299,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_wr_i));
    bufp->fullSData(oldp+300,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__addr_i),12);
    bufp->fullCData(oldp+301,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mode_sel_i),2);
    bufp->fullCData(oldp+302,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_i),5);
    bufp->fullBit(oldp+303,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__immed_sel_i));
    bufp->fullIData(oldp+304,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__rs1),32);
    bufp->fullBit(oldp+305,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__timer_intr_i));
    bufp->fullBit(oldp+306,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__m_ext_intr_i));
    bufp->fullBit(oldp+307,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__stall_i));
    bufp->fullBit(oldp+308,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mret_i));
    bufp->fullBit(oldp+309,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pcSource));
    bufp->fullIData(oldp+310,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__next_pc),32);
    bufp->fullIData(oldp+311,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause_i),31);
    bufp->fullBit(oldp+312,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_hold_i));
    bufp->fullBit(oldp+313,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_flush_o));
    bufp->fullIData(oldp+314,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_data_o),32);
    bufp->fullIData(oldp+315,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_addr),32);
    bufp->fullBit(oldp+316,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__pc_intr_sel));
    bufp->fullBit(oldp+317,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__p_int_read_o));
    bufp->fullBit(oldp+318,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__csr_busy_o));
    bufp->fullCData(oldp+319,((3U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state) 
                                     >> 3U))),2);
    bufp->fullCData(oldp+320,((7U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__int_state))),3);
    bufp->fullIData(oldp+321,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+322,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mie),32);
    bufp->fullIData(oldp+323,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mtvec),32);
    bufp->fullIData(oldp+324,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mepc),32);
    bufp->fullIData(oldp+325,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__mcause),32);
    bufp->fullIData(oldp+326,(vlSelf->soc_sram__DOT__i_core__DOT__i_csr__DOT__write_data),32);
    bufp->fullBit(oldp+327,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__clk_i));
    bufp->fullBit(oldp+328,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rst_ni));
    bufp->fullBit(oldp+329,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_i));
    bufp->fullIData(oldp+330,((IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__fetch_state_i 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+331,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__fetch_state_i)),32);
    bufp->fullIData(oldp+332,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__inst_i),32);
    bufp->fullBit(oldp+333,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i) 
                                   >> 1U))));
    bufp->fullBit(oldp+334,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__stage_ctrl_i))));
    bufp->fullCData(oldp+335,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port1_reg_o),5);
    bufp->fullCData(oldp+336,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_port2_reg_o),5);
    bufp->fullIData(oldp+337,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs1_i),32);
    bufp->fullIData(oldp+338,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_rs2_i),32);
    bufp->fullBit(oldp+339,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__valid_o));
    bufp->fullBit(oldp+340,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                                   >> 9U))));
    bufp->fullCData(oldp+341,((7U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                                     >> 6U))),3);
    bufp->fullCData(oldp+342,((0xfU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U] 
                                       >> 2U))),4);
    bufp->fullCData(oldp+343,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[8U])),2);
    bufp->fullCData(oldp+344,((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[7U] 
                               >> 0x1eU)),2);
    bufp->fullIData(oldp+345,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[7U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[6U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+346,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[6U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[5U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+347,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[5U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[4U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+348,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[4U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[3U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+349,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[3U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[2U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+350,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[2U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[1U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+351,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[1U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                          >> 0x1eU))),32);
    bufp->fullBit(oldp+352,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                   >> 0x1dU))));
    bufp->fullCData(oldp+353,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                     >> 0x1bU))),2);
    bufp->fullBit(oldp+354,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+355,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+356,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                   >> 0x18U))));
    bufp->fullCData(oldp+357,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+358,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+359,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                   >> 0x14U))));
    bufp->fullSData(oldp+360,((0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                         >> 8U))),12);
    bufp->fullCData(oldp+361,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+362,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U] 
                                        >> 1U))),5);
    bufp->fullBit(oldp+363,((1U & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__decode_state_o[0U])));
    bufp->fullBit(oldp+364,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+365,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+366,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+367,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+368,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+369,(((vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+370,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+371,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__reg_meta_o[0U])),5);
    bufp->fullBit(oldp+372,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__pc_src));
    bufp->fullCData(oldp+373,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__branch_op),3);
    bufp->fullCData(oldp+374,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_op),4);
    bufp->fullCData(oldp+375,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_a_src),2);
    bufp->fullCData(oldp+376,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__alu_b_src),2);
    bufp->fullBit(oldp+377,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_en));
    bufp->fullCData(oldp+378,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rf_wr_src),2);
    bufp->fullBit(oldp+379,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_write));
    bufp->fullBit(oldp+380,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_read));
    bufp->fullBit(oldp+381,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_sign));
    bufp->fullCData(oldp+382,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__mem_width),2);
    bufp->fullBit(oldp+383,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs1_used));
    bufp->fullBit(oldp+384,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rs2_used));
    bufp->fullBit(oldp+385,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_used));
    bufp->fullBit(oldp+386,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_wr));
    bufp->fullBit(oldp+387,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__csr_mret));
    bufp->fullIData(oldp+388,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed),32);
    bufp->fullIData(oldp+389,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__s_immed),32);
    bufp->fullIData(oldp+390,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__b_immed),32);
    bufp->fullIData(oldp+391,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__u_immed),32);
    bufp->fullIData(oldp+392,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__j_immed),32);
    bufp->fullCData(oldp+393,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__rd_addr),5);
    bufp->fullIData(oldp+394,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_i),32);
    bufp->fullBit(oldp+395,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__pc_src_o));
    bufp->fullCData(oldp+396,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__branch_op_o),3);
    bufp->fullCData(oldp+397,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_op_o),4);
    bufp->fullCData(oldp+398,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_a_src_o),2);
    bufp->fullCData(oldp+399,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__alu_b_src_o),2);
    bufp->fullBit(oldp+400,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs1_valid_o));
    bufp->fullBit(oldp+401,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rs2_valid_o));
    bufp->fullBit(oldp+402,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rd_valid_o));
    bufp->fullBit(oldp+403,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_en_o));
    bufp->fullCData(oldp+404,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__rf_wr_src_o),2);
    bufp->fullBit(oldp+405,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_write_o));
    bufp->fullBit(oldp+406,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_read_o));
    bufp->fullBit(oldp+407,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_sign_o));
    bufp->fullCData(oldp+408,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__mem_width_o),2);
    bufp->fullBit(oldp+409,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_wr_o));
    bufp->fullBit(oldp+410,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_mret_o));
    bufp->fullCData(oldp+411,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__opcode),7);
    bufp->fullCData(oldp+412,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func3),3);
    bufp->fullCData(oldp+413,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7),7);
    bufp->fullBit(oldp+414,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__csr_en));
    bufp->fullBit(oldp+415,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__inst_unused));
    bufp->fullBit(oldp+416,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_decoder__DOT__func7_unused));
    bufp->fullIData(oldp+417,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_i),32);
    bufp->fullIData(oldp+418,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__i_immed_o),32);
    bufp->fullIData(oldp+419,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__s_immed_o),32);
    bufp->fullIData(oldp+420,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__b_immed_o),32);
    bufp->fullIData(oldp+421,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__u_immed_o),32);
    bufp->fullIData(oldp+422,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__j_immed_o),32);
    bufp->fullBit(oldp+423,(vlSelf->soc_sram__DOT__i_core__DOT__i_decode_stage__DOT__i_immed_gen__DOT__inst_unused));
    bufp->fullBit(oldp+424,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__clk_i));
    bufp->fullBit(oldp+425,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rst_ni));
    bufp->fullBit(oldp+426,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rd_i));
    bufp->fullBit(oldp+427,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__wr_i));
    bufp->fullBit(oldp+428,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_i));
    bufp->fullBit(oldp+429,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_i));
    bufp->fullBit(oldp+430,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__stall_o));
    bufp->fullBit(oldp+431,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__req_o));
    bufp->fullBit(oldp+432,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__NS));
    bufp->fullBit(oldp+433,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__PS));
    bufp->fullBit(oldp+434,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__gnt_buf));
    bufp->fullBit(oldp+435,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__rvalid_buf));
    bufp->fullBit(oldp+436,(vlSelf->soc_sram__DOT__i_core__DOT__i_dmem_obi_driver__DOT__outstanding_read));
    bufp->fullBit(oldp+437,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__clk_i));
    bufp->fullBit(oldp+438,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__rst_ni));
    bufp->fullBit(oldp+439,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_i));
    bufp->fullBit(oldp+440,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
                                   >> 9U))));
    bufp->fullCData(oldp+441,((7U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
                                     >> 6U))),3);
    bufp->fullCData(oldp+442,((0xfU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U] 
                                       >> 2U))),4);
    bufp->fullCData(oldp+443,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[8U])),2);
    bufp->fullCData(oldp+444,((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[7U] 
                               >> 0x1eU)),2);
    bufp->fullIData(oldp+445,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[7U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[6U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+446,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[6U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[5U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+447,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[5U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[4U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+448,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[4U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[3U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+449,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[3U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[2U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+450,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[2U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[1U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+451,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[1U] 
                                << 2U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                          >> 0x1eU))),32);
    bufp->fullBit(oldp+452,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                   >> 0x1dU))));
    bufp->fullCData(oldp+453,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                     >> 0x1bU))),2);
    bufp->fullBit(oldp+454,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+455,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+456,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                   >> 0x18U))));
    bufp->fullCData(oldp+457,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+458,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+459,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                   >> 0x14U))));
    bufp->fullSData(oldp+460,((0xfffU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                         >> 8U))),12);
    bufp->fullCData(oldp+461,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                     >> 6U))),2);
    bufp->fullCData(oldp+462,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U] 
                                        >> 1U))),5);
    bufp->fullBit(oldp+463,((1U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__decode_state_i[0U])));
    bufp->fullBit(oldp+464,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+465,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+466,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+467,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+468,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+469,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+470,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+471,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_i[0U])),5);
    bufp->fullIData(oldp+472,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__csr_read_i),32);
    bufp->fullBit(oldp+473,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__stage_ctrl_i) 
                                   >> 1U))));
    bufp->fullBit(oldp+474,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__stage_ctrl_i))));
    bufp->fullBit(oldp+475,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_sel_o));
    bufp->fullIData(oldp+476,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__target_addr_o),32);
    bufp->fullBit(oldp+477,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid_o));
    bufp->fullIData(oldp+478,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[3U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[2U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+479,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[2U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+480,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                   >> 6U))));
    bufp->fullCData(oldp+481,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+482,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+483,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U] 
                                   >> 2U))));
    bufp->fullCData(oldp+484,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[1U])),2);
    bufp->fullIData(oldp+485,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__exec_state_o[0U]),32);
    bufp->fullBit(oldp+486,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+487,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+488,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+489,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+490,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+491,(((vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+492,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+493,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__reg_meta_o[0U])),5);
    bufp->fullBit(oldp+494,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read_ao));
    bufp->fullBit(oldp+495,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write_ao));
    bufp->fullCData(oldp+496,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb_ao),4);
    bufp->fullIData(oldp+497,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr_ao),32);
    bufp->fullIData(oldp+498,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_data_ao),32);
    bufp->fullIData(oldp+499,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_a_in),32);
    bufp->fullIData(oldp+500,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_b_in),32);
    bufp->fullIData(oldp+501,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__alu_out),32);
    bufp->fullBit(oldp+502,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__branch_taken));
    bufp->fullIData(oldp+503,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_addr),32);
    bufp->fullIData(oldp+504,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_wdata),32);
    bufp->fullCData(oldp+505,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_strb),4);
    bufp->fullBit(oldp+506,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_read));
    bufp->fullBit(oldp+507,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_write));
    bufp->fullBit(oldp+508,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__mem_illegal));
    bufp->fullIData(oldp+509,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__last_dmem_addr),32);
    bufp->fullBit(oldp+510,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__valid));
    bufp->fullCData(oldp+511,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__op_i),4);
    bufp->fullIData(oldp+512,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__a_i),32);
    bufp->fullIData(oldp+513,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__b_i),32);
    bufp->fullIData(oldp+514,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_alu__DOT__out_o),32);
    bufp->fullCData(oldp+515,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__op_i),3);
    bufp->fullIData(oldp+516,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs1_data_i),32);
    bufp->fullIData(oldp+517,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__rs2_data_i),32);
    bufp->fullBit(oldp+518,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__taken_o));
    bufp->fullBit(oldp+519,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__eq));
    bufp->fullBit(oldp+520,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__lt));
    bufp->fullBit(oldp+521,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_branch_gen__DOT__ltu));
    bufp->fullCData(oldp+522,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_width_i),2);
    bufp->fullIData(oldp+523,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_data_i),32);
    bufp->fullIData(oldp+524,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_addr_i),32);
    bufp->fullBit(oldp+525,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_read_i));
    bufp->fullBit(oldp+526,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_i));
    bufp->fullIData(oldp+527,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_word_addr_ao),32);
    bufp->fullIData(oldp+528,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_write_data_ao),32);
    bufp->fullCData(oldp+529,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_strobe_ao),4);
    bufp->fullBit(oldp+530,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__mem_illegal_ao));
    bufp->fullBit(oldp+531,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__illegal_addr));
    bufp->fullCData(oldp+532,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_width),2);
    bufp->fullIData(oldp+533,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__pre_write_data),32);
    bufp->fullCData(oldp+534,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_byte_idx),2);
    bufp->fullCData(oldp+535,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_strobe),4);
    bufp->fullIData(oldp+536,(vlSelf->soc_sram__DOT__i_core__DOT__i_exec_stage__DOT__i_mem_prep__DOT__req_write_data),32);
    bufp->fullBit(oldp+537,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__clk_i));
    bufp->fullBit(oldp+538,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__rst_ni));
    bufp->fullBit(oldp+539,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__boot_sel_i));
    bufp->fullBit(oldp+540,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_i));
    bufp->fullBit(oldp+541,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_sel_i));
    bufp->fullIData(oldp+542,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr_i),32);
    bufp->fullIData(oldp+543,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__intr_addr_i),32);
    bufp->fullBit(oldp+544,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_desync_i));
    bufp->fullBit(oldp+545,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_taken_o));
    bufp->fullBit(oldp+546,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i) 
                                   >> 1U))));
    bufp->fullBit(oldp+547,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__stage_ctrl_i))));
    bufp->fullIData(oldp+548,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__mem_addr_o),32);
    bufp->fullBit(oldp+549,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__valid_o));
    bufp->fullIData(oldp+550,((IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__fetch_state_o 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+551,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__fetch_state_o)),32);
    bufp->fullIData(oldp+552,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pre_intr_pc_o),32);
    bufp->fullIData(oldp+553,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_next),32);
    bufp->fullIData(oldp+554,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_out),32);
    bufp->fullIData(oldp+555,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__pc_plus_4),32);
    bufp->fullIData(oldp+556,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_saved),32);
    bufp->fullIData(oldp+557,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_addr),32);
    bufp->fullBit(oldp+558,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__branch_ctrl_saved));
    bufp->fullBit(oldp+559,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel_saved));
    bufp->fullBit(oldp+560,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__target_sel));
    bufp->fullBit(oldp+561,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__clk_i));
    bufp->fullBit(oldp+562,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__rst_ni));
    bufp->fullBit(oldp+563,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__boot_sel_i));
    bufp->fullBit(oldp+564,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__stall_i));
    bufp->fullIData(oldp+565,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__next_pc_i),32);
    bufp->fullIData(oldp+566,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_o),32);
    bufp->fullIData(oldp+567,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__reset_addr),32);
    bufp->fullIData(oldp+568,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__last_pc),32);
    bufp->fullIData(oldp+569,(vlSelf->soc_sram__DOT__i_core__DOT__i_fetch_stage__DOT__i_prog_cntr__DOT__pc_raw),32);
    bufp->fullBit(oldp+570,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+571,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+572,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+573,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+574,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__ex_stage_i)),32);
    bufp->fullBit(oldp+575,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+576,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+577,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+578,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+579,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__mem_stage_i)),32);
    bufp->fullBit(oldp+580,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+581,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+582,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+583,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+584,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+585,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+586,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+587,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_i[0U])),5);
    bufp->fullBit(oldp+588,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__load_use_stall_ao));
    bufp->fullBit(oldp+589,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+590,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+591,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+592,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+593,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+594,(((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+595,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+596,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__dest_meta_o[0U])),5);
    bufp->fullBit(oldp+597,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_lus));
    bufp->fullBit(oldp+598,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_lus));
    bufp->fullIData(oldp+599,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_updated),32);
    bufp->fullIData(oldp+600,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_updated),32);
    bufp->fullBit(oldp+601,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+602,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+603,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+604,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+605,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_stage_i)),32);
    bufp->fullBit(oldp+606,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+607,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+608,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+609,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+610,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_stage_i)),32);
    bufp->fullCData(oldp+611,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_i),5);
    bufp->fullIData(oldp+612,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_i),32);
    bufp->fullBit(oldp+613,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_used_i));
    bufp->fullIData(oldp+614,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__rs_data_ao),32);
    bufp->fullBit(oldp+615,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__load_use_hazard_ao));
    bufp->fullBit(oldp+616,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_conflict));
    bufp->fullBit(oldp+617,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_conflict));
    bufp->fullBit(oldp+618,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__mem_raw));
    bufp->fullBit(oldp+619,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__ex_raw));
    bufp->fullIData(oldp+620,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs1_fwd_unit__DOT__data_updated_mem),32);
    bufp->fullBit(oldp+621,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+622,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+623,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+624,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+625,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_stage_i)),32);
    bufp->fullBit(oldp+626,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+627,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+628,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+629,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+630,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_stage_i)),32);
    bufp->fullCData(oldp+631,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_i),5);
    bufp->fullIData(oldp+632,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_i),32);
    bufp->fullBit(oldp+633,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_used_i));
    bufp->fullIData(oldp+634,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__rs_data_ao),32);
    bufp->fullBit(oldp+635,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__load_use_hazard_ao));
    bufp->fullBit(oldp+636,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_conflict));
    bufp->fullBit(oldp+637,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_conflict));
    bufp->fullBit(oldp+638,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__mem_raw));
    bufp->fullBit(oldp+639,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__ex_raw));
    bufp->fullIData(oldp+640,(vlSelf->soc_sram__DOT__i_core__DOT__i_fwd_unit__DOT__rs2_fwd_unit__DOT__data_updated_mem),32);
    bufp->fullBit(oldp+641,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__clk_i));
    bufp->fullBit(oldp+642,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__rst_ni));
    bufp->fullBit(oldp+643,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__imem_stall_i));
    bufp->fullBit(oldp+644,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__dmem_stall_i));
    bufp->fullBit(oldp+645,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch_taken_i));
    bufp->fullBit(oldp+646,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_flush_i));
    bufp->fullBit(oldp+647,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_mret_i));
    bufp->fullBit(oldp+648,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__load_use_stall_i));
    bufp->fullBit(oldp+649,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao) 
                                   >> 1U))));
    bufp->fullBit(oldp+650,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__fetch_ctrl_ao))));
    bufp->fullBit(oldp+651,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao) 
                                   >> 1U))));
    bufp->fullBit(oldp+652,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__decode_ctrl_ao))));
    bufp->fullBit(oldp+653,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__execute_ctrl_ao) 
                                   >> 1U))));
    bufp->fullBit(oldp+654,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__execute_ctrl_ao))));
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__memory_ctrl_ao) 
                                   >> 1U))));
    bufp->fullBit(oldp+656,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__memory_ctrl_ao))));
    bufp->fullBit(oldp+657,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__writeback_ctrl_ao) 
                                   >> 1U))));
    bufp->fullBit(oldp+658,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__writeback_ctrl_ao))));
    bufp->fullBit(oldp+659,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__csr_hold_o));
    bufp->fullBit(oldp+660,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__flush_in_progess));
    bufp->fullBit(oldp+661,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__branch));
    bufp->fullCData(oldp+662,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__PS),3);
    bufp->fullCData(oldp+663,(vlSelf->soc_sram__DOT__i_core__DOT__i_hazard_unit__DOT__NS),3);
    bufp->fullBit(oldp+664,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__clk_i));
    bufp->fullBit(oldp+665,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rst_ni));
    bufp->fullBit(oldp+666,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rd_i));
    bufp->fullBit(oldp+667,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__wr_i));
    bufp->fullBit(oldp+668,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_i));
    bufp->fullBit(oldp+669,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_i));
    bufp->fullBit(oldp+670,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__stall_o));
    bufp->fullBit(oldp+671,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__req_o));
    bufp->fullBit(oldp+672,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__NS));
    bufp->fullBit(oldp+673,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__PS));
    bufp->fullBit(oldp+674,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__gnt_buf));
    bufp->fullBit(oldp+675,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__rvalid_buf));
    bufp->fullBit(oldp+676,(vlSelf->soc_sram__DOT__i_core__DOT__i_imem_obi_driver__DOT__outstanding_read));
    bufp->fullBit(oldp+677,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__clk_i));
    bufp->fullBit(oldp+678,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__rst_ni));
    bufp->fullBit(oldp+679,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_i));
    bufp->fullIData(oldp+680,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[3U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[2U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+681,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[2U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+682,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                   >> 6U))));
    bufp->fullCData(oldp+683,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+684,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                   >> 3U))));
    bufp->fullBit(oldp+685,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U] 
                                   >> 2U))));
    bufp->fullCData(oldp+686,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[1U])),2);
    bufp->fullIData(oldp+687,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__exec_state_i[0U]),32);
    bufp->fullBit(oldp+688,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+689,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+690,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+691,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+692,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+693,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+694,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+695,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_i[0U])),5);
    bufp->fullBit(oldp+696,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__stage_ctrl_i) 
                                   >> 1U))));
    bufp->fullBit(oldp+697,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__stage_ctrl_i))));
    bufp->fullIData(oldp+698,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__dmem_rdata_i),32);
    bufp->fullBit(oldp+699,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__valid_o));
    bufp->fullIData(oldp+700,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[4U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[3U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+701,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[3U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+702,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                   >> 6U))));
    bufp->fullCData(oldp+703,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+704,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                   >> 3U))));
    bufp->fullBit(oldp+705,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U] 
                                   >> 2U))));
    bufp->fullCData(oldp+706,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[2U])),2);
    bufp->fullIData(oldp+707,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[1U]),32);
    bufp->fullIData(oldp+708,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__mem_state_o[0U]),32);
    bufp->fullBit(oldp+709,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+710,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+711,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+712,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+713,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+714,(((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+715,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+716,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__reg_meta_o[0U])),5);
    bufp->fullBit(oldp+717,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+718,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+719,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+720,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+721,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__data_fwd_oa)),32);
    bufp->fullCData(oldp+722,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__byte_offset),2);
    bufp->fullIData(oldp+723,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__pre_data),32);
    bufp->fullBit(oldp+724,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign));
    bufp->fullBit(oldp+725,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__sign_ext));
    bufp->fullCData(oldp+726,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[0]),8);
    bufp->fullCData(oldp+727,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[1]),8);
    bufp->fullCData(oldp+728,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[2]),8);
    bufp->fullCData(oldp+729,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__bytes[3]),8);
    bufp->fullSData(oldp+730,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[0]),16);
    bufp->fullSData(oldp+731,(vlSelf->soc_sram__DOT__i_core__DOT__i_mem_slice_stage__DOT__halfs[1]),16);
    bufp->fullBit(oldp+732,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__valid_i));
    bufp->fullIData(oldp+733,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[4U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[3U] 
                                             >> 7U))),32);
    bufp->fullIData(oldp+734,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[3U] 
                                << 0x19U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                             >> 7U))),32);
    bufp->fullBit(oldp+735,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                   >> 6U))));
    bufp->fullCData(oldp+736,((3U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+737,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                   >> 3U))));
    bufp->fullBit(oldp+738,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U] 
                                   >> 2U))));
    bufp->fullCData(oldp+739,((3U & vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[2U])),2);
    bufp->fullIData(oldp+740,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[1U]),32);
    bufp->fullIData(oldp+741,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__mem_state_i[0U]),32);
    bufp->fullBit(oldp+742,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+743,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
                                        >> 0xcU))),5);
    bufp->fullIData(oldp+744,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[2U] 
                                << 0x14U) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                             >> 0xcU))),32);
    bufp->fullBit(oldp+745,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+746,((0x1fU & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                        >> 6U))),5);
    bufp->fullIData(oldp+747,(((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[1U] 
                                << 0x1aU) | (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+748,((1U & (vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+749,((0x1fU & vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__reg_meta_i[0U])),5);
    bufp->fullBit(oldp+750,((1U & ((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__stage_ctrl_i) 
                                   >> 1U))));
    bufp->fullBit(oldp+751,((1U & (IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__stage_ctrl_i))));
    bufp->fullBit(oldp+752,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+753,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+754,((1U & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+755,((0x1fU & (IData)((vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+756,((IData)(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__data_fwd_oa)),32);
    bufp->fullBit(oldp+757,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_en_oa));
    bufp->fullCData(oldp+758,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_reg_oa),5);
    bufp->fullIData(oldp+759,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data_oa),32);
    bufp->fullIData(oldp+760,(vlSelf->soc_sram__DOT__i_core__DOT__i_wb_stage__DOT__rf_wr_data),32);
    bufp->fullBit(oldp+761,(vlSelf->soc_sram__DOT__i_memory__DOT__clk_i));
    bufp->fullBit(oldp+762,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_en_i));
    bufp->fullCData(oldp+763,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_strobe_i),4);
    bufp->fullSData(oldp+764,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_addr_i),16);
    bufp->fullIData(oldp+765,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_i),32);
    bufp->fullBit(oldp+766,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_en_i));
    bufp->fullCData(oldp+767,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_strobe_i),4);
    bufp->fullSData(oldp+768,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_addr_i),16);
    bufp->fullIData(oldp+769,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_i),32);
    bufp->fullIData(oldp+770,(vlSelf->soc_sram__DOT__i_memory__DOT__pA_data_o),32);
    bufp->fullIData(oldp+771,(vlSelf->soc_sram__DOT__i_memory__DOT__pB_data_o),32);
    bufp->fullIData(oldp+772,(vlSelf->soc_sram__DOT__i_memory__DOT__i),32);
    bufp->fullBit(oldp+773,(vlSelf->soc_sram__DOT__i_reg_file__DOT__clk_i));
    bufp->fullCData(oldp+774,(vlSelf->soc_sram__DOT__i_reg_file__DOT__read1_i),5);
    bufp->fullCData(oldp+775,(vlSelf->soc_sram__DOT__i_reg_file__DOT__read2_i),5);
    bufp->fullCData(oldp+776,(vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_reg_i),5);
    bufp->fullIData(oldp+777,(vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_data_i),32);
    bufp->fullBit(oldp+778,(vlSelf->soc_sram__DOT__i_reg_file__DOT__wr_en_i));
    bufp->fullIData(oldp+779,(vlSelf->soc_sram__DOT__i_reg_file__DOT__data1_ao),32);
    bufp->fullIData(oldp+780,(vlSelf->soc_sram__DOT__i_reg_file__DOT__data2_ao),32);
    bufp->fullIData(oldp+781,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[0]),32);
    bufp->fullIData(oldp+782,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[1]),32);
    bufp->fullIData(oldp+783,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[2]),32);
    bufp->fullIData(oldp+784,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[3]),32);
    bufp->fullIData(oldp+785,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[4]),32);
    bufp->fullIData(oldp+786,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[5]),32);
    bufp->fullIData(oldp+787,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[6]),32);
    bufp->fullIData(oldp+788,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[7]),32);
    bufp->fullIData(oldp+789,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[8]),32);
    bufp->fullIData(oldp+790,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[9]),32);
    bufp->fullIData(oldp+791,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[10]),32);
    bufp->fullIData(oldp+792,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[11]),32);
    bufp->fullIData(oldp+793,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[12]),32);
    bufp->fullIData(oldp+794,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[13]),32);
    bufp->fullIData(oldp+795,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[14]),32);
    bufp->fullIData(oldp+796,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[15]),32);
    bufp->fullIData(oldp+797,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[16]),32);
    bufp->fullIData(oldp+798,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[17]),32);
    bufp->fullIData(oldp+799,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[18]),32);
    bufp->fullIData(oldp+800,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[19]),32);
    bufp->fullIData(oldp+801,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[20]),32);
    bufp->fullIData(oldp+802,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[21]),32);
    bufp->fullIData(oldp+803,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[22]),32);
    bufp->fullIData(oldp+804,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[23]),32);
    bufp->fullIData(oldp+805,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[24]),32);
    bufp->fullIData(oldp+806,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[25]),32);
    bufp->fullIData(oldp+807,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[26]),32);
    bufp->fullIData(oldp+808,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[27]),32);
    bufp->fullIData(oldp+809,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[28]),32);
    bufp->fullIData(oldp+810,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[29]),32);
    bufp->fullIData(oldp+811,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[30]),32);
    bufp->fullIData(oldp+812,(vlSelf->soc_sram__DOT__i_reg_file__DOT__RF[31]),32);
    bufp->fullBit(oldp+813,(vlSelf->soc_sram__DOT__sram__DOT__clk_i));
    bufp->fullBit(oldp+814,(vlSelf->soc_sram__DOT__sram__DOT__rst_ni));
    bufp->fullBit(oldp+815,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_req_i));
    bufp->fullBit(oldp+816,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_gnt_o));
    bufp->fullIData(oldp+817,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_addr_i),32);
    bufp->fullBit(oldp+818,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_we_i));
    bufp->fullCData(oldp+819,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_be_i),4);
    bufp->fullIData(oldp+820,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_wdata_i),32);
    bufp->fullBit(oldp+821,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_rvalid_o));
    bufp->fullIData(oldp+822,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_rdata_o),32);
    bufp->fullBit(oldp+823,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_req_i));
    bufp->fullBit(oldp+824,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_gnt_o));
    bufp->fullIData(oldp+825,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_addr_i),32);
    bufp->fullBit(oldp+826,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_we_i));
    bufp->fullCData(oldp+827,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_be_i),4);
    bufp->fullIData(oldp+828,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_wdata_i),32);
    bufp->fullBit(oldp+829,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_rvalid_o));
    bufp->fullIData(oldp+830,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_rdata_o),32);
    bufp->fullBit(oldp+831,(vlSelf->soc_sram__DOT__sram__DOT__illegal_memory_o));
    bufp->fullIData(oldp+832,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[0]),32);
    bufp->fullIData(oldp+833,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[1]),32);
    bufp->fullIData(oldp+834,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[2]),32);
    bufp->fullIData(oldp+835,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[3]),32);
    bufp->fullIData(oldp+836,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[4]),32);
    bufp->fullIData(oldp+837,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[5]),32);
    bufp->fullIData(oldp+838,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[6]),32);
    bufp->fullIData(oldp+839,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[7]),32);
    bufp->fullIData(oldp+840,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[8]),32);
    bufp->fullIData(oldp+841,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[9]),32);
    bufp->fullIData(oldp+842,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[10]),32);
    bufp->fullIData(oldp+843,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[11]),32);
    bufp->fullIData(oldp+844,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[12]),32);
    bufp->fullIData(oldp+845,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[13]),32);
    bufp->fullIData(oldp+846,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[14]),32);
    bufp->fullIData(oldp+847,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[15]),32);
    bufp->fullIData(oldp+848,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[16]),32);
    bufp->fullIData(oldp+849,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[17]),32);
    bufp->fullIData(oldp+850,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[18]),32);
    bufp->fullIData(oldp+851,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[19]),32);
    bufp->fullIData(oldp+852,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[20]),32);
    bufp->fullIData(oldp+853,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[21]),32);
    bufp->fullIData(oldp+854,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[22]),32);
    bufp->fullIData(oldp+855,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_read_vec[23]),32);
    bufp->fullIData(oldp+856,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[0]),32);
    bufp->fullIData(oldp+857,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[1]),32);
    bufp->fullIData(oldp+858,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[2]),32);
    bufp->fullIData(oldp+859,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[3]),32);
    bufp->fullIData(oldp+860,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[4]),32);
    bufp->fullIData(oldp+861,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[5]),32);
    bufp->fullIData(oldp+862,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[6]),32);
    bufp->fullIData(oldp+863,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[7]),32);
    bufp->fullIData(oldp+864,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[8]),32);
    bufp->fullIData(oldp+865,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[9]),32);
    bufp->fullIData(oldp+866,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[10]),32);
    bufp->fullIData(oldp+867,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[11]),32);
    bufp->fullIData(oldp+868,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[12]),32);
    bufp->fullIData(oldp+869,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[13]),32);
    bufp->fullIData(oldp+870,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[14]),32);
    bufp->fullIData(oldp+871,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[15]),32);
    bufp->fullIData(oldp+872,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[16]),32);
    bufp->fullIData(oldp+873,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[17]),32);
    bufp->fullIData(oldp+874,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[18]),32);
    bufp->fullIData(oldp+875,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[19]),32);
    bufp->fullIData(oldp+876,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[20]),32);
    bufp->fullIData(oldp+877,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[21]),32);
    bufp->fullIData(oldp+878,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[22]),32);
    bufp->fullIData(oldp+879,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_read_vec[23]),32);
    bufp->fullIData(oldp+880,(vlSelf->soc_sram__DOT__sram__DOT__cs_data),24);
    bufp->fullIData(oldp+881,(vlSelf->soc_sram__DOT__sram__DOT__cs_inst),24);
    bufp->fullIData(oldp+882,(vlSelf->soc_sram__DOT__sram__DOT__cs_data_prev),24);
    bufp->fullIData(oldp+883,(vlSelf->soc_sram__DOT__sram__DOT__cs_inst_prev),24);
    bufp->fullCData(oldp+884,(vlSelf->soc_sram__DOT__sram__DOT__sram_d_cs_addr),5);
    bufp->fullCData(oldp+885,(vlSelf->soc_sram__DOT__sram__DOT__sram_i_cs_addr),5);
    bufp->fullCData(oldp+886,(vlSelf->soc_sram__DOT__sram__DOT__unnamedblk1__DOT__i),5);
    bufp->fullBit(oldp+887,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+888,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+889,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+890,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+891,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+892,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+894,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+895,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+896,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+897,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+898,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+899,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+900,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+901,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+903,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+904,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__0__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+907,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+908,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+909,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+912,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+913,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+914,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+916,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+917,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+918,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+919,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+920,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+921,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+922,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__1__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+923,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+924,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+925,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+926,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+927,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+928,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+929,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+930,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+932,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+933,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+934,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+935,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+936,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+937,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+938,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+939,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+940,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__2__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+941,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+942,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+943,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+944,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+945,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+946,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+947,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+948,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+949,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+950,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+951,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+952,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+953,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+954,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+955,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+956,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+957,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+958,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__3__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+959,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+960,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+961,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+962,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+963,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+964,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+966,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+967,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+968,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+969,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+970,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+971,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+972,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+973,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+974,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+975,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+976,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__4__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+977,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+978,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+979,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+980,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+981,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+982,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+984,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+985,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+986,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+987,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+988,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+989,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+990,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+991,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+992,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+993,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+994,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__5__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+995,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+996,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+997,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+998,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+999,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1004,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1008,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1009,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1011,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1012,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__6__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1013,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1014,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1015,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1016,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1017,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1022,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1024,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1025,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1026,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1027,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1028,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1029,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1030,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__7__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1031,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1034,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1035,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1036,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1037,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1038,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1039,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1040,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1041,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1042,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1043,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1044,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1045,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1046,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1047,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1048,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__8__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1049,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1050,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1051,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1052,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1053,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1054,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1055,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1056,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1057,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1058,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1059,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1060,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1061,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1062,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1063,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1064,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1065,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1066,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__9__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1067,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1068,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1069,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1070,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1071,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1072,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1073,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1074,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1075,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1076,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1077,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1078,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1079,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1080,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1081,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1082,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1083,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1084,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__10__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1085,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1086,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1087,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1088,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1089,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1090,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1091,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1092,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1093,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1094,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1095,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1096,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1098,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1099,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1100,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1102,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__11__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1104,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1105,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1106,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1107,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1108,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1110,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1111,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1112,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1113,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1114,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1115,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1116,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1117,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1119,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1120,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__12__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1121,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1122,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1123,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1124,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1125,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1126,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1127,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1128,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1129,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1130,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1131,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1132,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1133,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1134,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1135,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1136,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1138,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__13__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1139,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1140,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1141,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1143,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1144,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1145,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1146,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1147,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1148,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1149,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1150,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1151,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1152,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1153,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1154,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1155,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1156,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__14__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1157,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1158,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1159,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1160,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1161,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1162,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1164,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1165,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1166,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1167,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1168,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1169,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1170,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1171,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1172,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1173,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1174,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__15__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1175,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1176,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1177,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1178,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1179,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1180,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1181,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1182,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1183,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1184,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1185,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1186,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1187,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1188,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1189,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1190,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1191,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1192,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__16__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1193,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1194,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1195,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1196,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1197,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1198,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1199,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1200,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1201,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1202,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1203,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1204,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1205,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1206,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1207,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1208,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1209,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1210,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__17__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1211,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1212,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1213,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1214,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1215,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1216,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1217,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1218,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1219,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1220,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1221,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1222,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1223,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1224,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1225,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1226,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1227,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1228,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__18__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1229,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1230,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1231,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1232,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1233,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1234,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1235,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1236,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1237,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1238,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1239,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1240,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1241,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1242,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1243,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1244,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1245,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1246,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__19__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1247,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1248,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1249,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1250,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1251,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1252,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1253,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1254,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1255,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1256,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1257,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1258,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1259,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1260,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1261,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1262,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1263,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1264,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__20__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1265,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1266,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1267,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1268,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1269,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1270,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1271,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1272,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1273,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1274,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1275,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1276,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1277,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1278,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1279,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1280,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1281,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1282,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__21__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1283,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1284,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1285,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1286,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1287,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1288,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1289,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1290,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1291,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1292,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1293,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1294,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1295,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1296,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1297,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1298,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1299,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1300,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__22__KET____DOT__sram1.addr1_reg),9);
    bufp->fullBit(oldp+1301,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.clk0));
    bufp->fullBit(oldp+1302,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb0));
    bufp->fullBit(oldp+1303,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.web0));
    bufp->fullCData(oldp+1304,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.wmask0),4);
    bufp->fullSData(oldp+1305,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr0),9);
    bufp->fullIData(oldp+1306,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.din0),32);
    bufp->fullIData(oldp+1307,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.dout0),32);
    bufp->fullBit(oldp+1308,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.clk1));
    bufp->fullBit(oldp+1309,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb1));
    bufp->fullSData(oldp+1310,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr1),9);
    bufp->fullIData(oldp+1311,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.dout1),32);
    bufp->fullBit(oldp+1312,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb0_reg));
    bufp->fullBit(oldp+1313,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.web0_reg));
    bufp->fullCData(oldp+1314,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.wmask0_reg),4);
    bufp->fullSData(oldp+1315,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr0_reg),9);
    bufp->fullIData(oldp+1316,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.din0_reg),32);
    bufp->fullBit(oldp+1317,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.csb1_reg));
    bufp->fullSData(oldp+1318,(vlSymsp->TOP__soc_sram__DOT__sram__DOT__genblk1__BRA__23__KET____DOT__sram1.addr1_reg),9);
    bufp->fullIData(oldp+1319,(0x10U),32);
    bufp->fullIData(oldp+1320,(0x20U),32);
    bufp->fullIData(oldp+1321,(0U),32);
    bufp->fullIData(oldp+1322,(0x80000000U),32);
    bufp->fullIData(oldp+1323,(4U),32);
    bufp->fullIData(oldp+1324,(8U),32);
    bufp->fullIData(oldp+1325,(0x20U),32);
    bufp->fullIData(oldp+1326,(0x8000c000U),32);
    bufp->fullIData(oldp+1327,(0x18U),32);
    bufp->fullIData(oldp+1328,(5U),32);
    bufp->fullIData(oldp+1329,(9U),32);
    bufp->fullIData(oldp+1330,(0x200U),32);
    bufp->fullIData(oldp+1331,(3U),32);
    bufp->fullIData(oldp+1332,(1U),32);
}
