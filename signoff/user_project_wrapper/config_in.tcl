set ::env(PDK) "sky130A"
set ::env(PDKPATH) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/../../pdk/sky130A"
set ::env(STD_CELL_LIBRARY) "sky130_fd_sc_hd"
set ::env(SCLPATH) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/../../pdk/sky130A/sky130_fd_sc_hd"
set ::env(DESIGN_DIR) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper"
set ::env(DESIGN_NAME) "user_project_wrapper"
set ::env(RUN_IRDROP_REPORT) "0"
set ::env(RUN_LVS) "1"
set ::env(RUN_MAGIC_DRC) "1"
set ::env(YOSYS_REWRITE_VERILOG) "1"
set ::env(QUIT_ON_LINTER_ERRORS) "0"
set ::env(MACRO_PLACEMENT_CFG) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/macro.cfg"
set ::env(VERILOG_FILES) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/defines.v /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/user_project_wrapper.v /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi/obi_demux_1_to_4.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi/obi_mux_2_to_1.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi/wb_to_obi.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi/obi_cdc_fast_primary.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi_gpio/obi_gpio.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi_qspi_controller/obi_qspi_controller.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/include/defs.svh /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/include/pipe_regs.svh /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/include/rvfi.svh /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/core.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/alu.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/branch_gen.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/csr.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/decoder.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/fwd_unit.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/hazard_unit.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/immed_gen.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/mem_prep.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/obi_req_driver.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/prog_cntr.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/reg_file.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/modules/reg_forwarder.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/stages/decode_stage.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/stages/exec_stage.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/stages/fetch_stage.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/stages/mem_slice_stage.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/core/rtl/core/stages/wb_stage.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/include/clam-defs.svh /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/Peripheral_Unit_Defs.svh /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/peripheral_interrupt_queue.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/BaudRateGenerator.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/clk_div_gen.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/clk_divider.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/DeMux1_4.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/GPIO.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/I2C_Master.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/Mux4_1.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/PeriphControlRegFile.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/peripheral_unit.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/Pin_Mux.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/pulse_gen.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/PWM_modulator.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/Quad_Enc_Man.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/S_Curve_Gen.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/SPI_Master.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/SPI_Master_With_Multiple_CS.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/Stepper_Driver.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/Timer.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/UART_Receiver.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/UART_States.svh /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/UART.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/peripherals/Peripheral_Unit/UART_Transmitter.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/rtl/soc/modules/bootloader.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/rtl/soc/modules/memory_interface_unit.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/rtl/soc/modules/obi_xbar.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/rtl/soc/modules/sram_wrap.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/rtl/soc/soc.sv /home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../../verilog/rtl/carp-lib/obi_qspi_controller/spimemio.v"
set ::env(VERILOG_INCLUDE_DIRS) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/../../pdk/sky130A/libs.ref/sky130_sram_macros/"
set ::env(VERILOG_FILES_BLACKBOX) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../macros/sky130_sram_2kbyte_1rw1r_32x512_8.v"
set ::env(EXTRA_LEFS) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/../../pdk/sky130A/libs.ref/sky130_sram_macros/lef/sky130_sram_2kbyte_1rw1r_32x512_8.lef"
set ::env(EXTRA_GDS_FILES) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/../../pdk/sky130A/libs.ref/sky130_sram_macros/gds/sky130_sram_2kbyte_1rw1r_32x512_8.gds"
set ::env(EXTRA_LIBS) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/../macros/sky130_sram_2kbyte_1rw1r_32x512_8_TT_1p8V_25C.lib"
set ::env(ROUTING_CORES) "20"
set ::env(KLAYOUT_XOR_THREADS) "20"
set ::env(FP_IO_UNMATCHED_ERROR) "0"
set ::env(FP_PDN_MACRO_HOOKS) "soc_i.sram.sram0 vccd1 vssd1 vccd1 vssd1, soc_i.sram.sram1 vccd1 vssd1 vccd1 vssd1, soc_i.sram.sram2 vccd1 vssd1 vccd1 vssd1, soc_i.sram.sram3 vccd1 vssd1 vccd1 vssd1, soc_i.sram.sram4 vccd1 vssd1 vccd1 vssd1, soc_i.sram.sram5 vccd1 vssd1 vccd1 vssd1"
set ::env(QUIT_ON_LVS_ERROR) "1"
set ::env(CLOCK_PERIOD) "25"
set ::env(CLOCK_PORT) "user_clock2"
set ::env(FP_SIZING) "absolute"
set ::env(DIE_AREA) "0 0 2920 3520"
set ::env(FP_PIN_ORDER_CFG) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/pin_order.cfg"
set ::env(MAX_TRANSITION_CONSTRAINT) "1.5"
set ::env(MAX_FANOUT_CONSTRAINT) "16"
set ::env(PL_TARGET_DENSITY) "0.2"
set ::env(LEC_ENABLE) "0"
set ::env(GRT_OVERFLOW_ITERS) "100000"
set ::env(PL_RESIZER_SETUP_SLACK_MARGIN) "1.4"
set ::env(GLB_RESIZER_SETUP_SLACK_MARGIN) "1.4"
set ::env(GLB_RESIZER_HOLD_SLACK_MARGIN) "0.8"
set ::env(PL_RESIZER_HOLD_SLACK_MARGIN) "0.8"
set ::env(PL_RESIZER_BUFFER_INPUT_PORTS) "0"
set ::env(MAGIC_DEF_LABELS) "0"
set ::env(MAGIC_ZEROIZE_ORIGIN) "0"
set ::env(SYNTH_BUFFERING) "1"
set ::env(RUN_HEURISTIC_DIODE_INSERTION) "1"
set ::env(HEURISTIC_ANTENNA_THRESHOLD) "90"
set ::env(GRT_REPAIR_ANTENNAS) "0"
set ::env(GRT_MAX_DIODE_INS_ITERS) "100000"
set ::env(GRT_ANT_ITERS) "100000"
set ::env(FP_TAP_HORIZONTAL_HALO) "60"
set ::env(FP_TAP_VERTICAL_HALO) "60"
set ::env(SYNTH_USE_PG_PINS_DEFINES) "USE_POWER_PINS"
set ::env(UNIT) "2.4"
set ::env(FP_IO_VEXTEND) "4.8"
set ::env(FP_IO_HEXTEND) "4.8"
set ::env(FP_IO_VLENGTH) "2.4"
set ::env(FP_IO_HLENGTH) "2.4"
set ::env(FP_IO_VTHICKNESS_MULT) "4"
set ::env(FP_IO_HTHICKNESS_MULT) "4"
set ::env(FP_PDN_ENABLE_RAILS) "1"
set ::env(FP_PDN_VPITCH) "180"
set ::env(FP_PDN_HPITCH) "180"
set ::env(FP_PDN_CORE_RING) "1"
set ::env(FP_PDN_CORE_RING_VWIDTH) "3.1"
set ::env(FP_PDN_CORE_RING_HWIDTH) "3.1"
set ::env(FP_PDN_CORE_RING_VOFFSET) "12.45"
set ::env(FP_PDN_CORE_RING_HOFFSET) "12.45"
set ::env(FP_PDN_CORE_RING_VSPACING) "1.7"
set ::env(FP_PDN_CORE_RING_HSPACING) "1.7"
set ::env(FP_PDN_VWIDTH) "3.1"
set ::env(FP_PDN_HWIDTH) "3.1"
set ::env(FP_PDN_VSPACING) "15.5"
set ::env(FP_PDN_HSPACING) "15.5"
set ::env(FP_PDN_VOFFSET) "5"
set ::env(FP_PDN_HOFFSET) "5"
set ::env(VDD_NETS) "vccd1 vccd2 vdda1 vdda2"
set ::env(GND_NETS) "vssd1 vssd2 vssa1 vssa2"
set ::env(IO_SYNC) "0"
set ::env(BASE_SDC_FILE) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/base_user_project_wrapper.sdc"
set ::env(RUN_CVC) "0"
set ::env(FP_CORE_UTIL) "45"
set ::env(RT_MAX_LAYER) "met5"
set ::env(FP_DEF_TEMPLATE) "/home/prherrma/runners/r4/_work/tapeout-ci-2311/tapeout-ci-2311/openlane/user_project_wrapper/fixed_dont_change/user_project_wrapper.def"
