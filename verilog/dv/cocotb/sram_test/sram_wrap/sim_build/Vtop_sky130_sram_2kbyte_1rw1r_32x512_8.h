// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_SKY130_SRAM_2KBYTE_1RW1R_32X512_8_H_
#define VERILATED_VTOP_SKY130_SRAM_2KBYTE_1RW1R_32X512_8_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"

class Vtop__Syms;

class Vtop_sky130_sram_2kbyte_1rw1r_32x512_8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk0,0,0);
        VL_IN8(clk1,0,0);
        VL_IN8(csb0,0,0);
        VL_IN8(web0,0,0);
        VL_IN8(wmask0,3,0);
        VL_IN8(csb1,0,0);
        CData/*0:0*/ csb0_reg;
        CData/*0:0*/ web0_reg;
        CData/*3:0*/ wmask0_reg;
        CData/*0:0*/ csb1_reg;
        CData/*0:0*/ __Vdlyvset__dout0__v0;
        CData/*0:0*/ __Vdlyvset__dout1__v0;
        VL_IN16(addr0,8,0);
        VL_IN16(addr1,8,0);
        SData/*8:0*/ addr0_reg;
        SData/*8:0*/ addr1_reg;
        VL_IN(din0,31,0);
        VL_OUT(dout0,31,0);
        VL_OUT(dout1,31,0);
        IData/*31:0*/ din0_reg;
        IData/*31:0*/ __Vintraval_h97df76d1__0;
        IData/*31:0*/ __Vintraval_h260aa857__0;
        IData/*31:0*/ __Vintraval_h0682adc9__0;
        IData/*31:0*/ __Vintraval_hf1cadef5__0;
        IData/*31:0*/ __Vintraval_ha1fb6e8f__0;
        IData/*31:0*/ __Vintraval_h8fb425fc__0;
        IData/*31:0*/ __Vintraval_h9af0209b__0;
        IData/*31:0*/ __Vintraval_h60c96831__0;
        IData/*31:0*/ __Vintraval_h7bb45102__0;
        IData/*31:0*/ __Vintraval_hf16a0150__0;
        IData/*31:0*/ __Vintraval_hf72bd6d3__0;
        IData/*31:0*/ __Vintraval_h37038fee__0;
        IData/*31:0*/ __Vintraval_hecf6bf04__0;
        IData/*31:0*/ __Vintraval_hd2608ba4__0;
        IData/*31:0*/ __Vintraval_h8b7f66ec__0;
        IData/*31:0*/ __Vintraval_hcfc3033a__0;
        IData/*31:0*/ __Vintraval_hcdcaf633__0;
        IData/*31:0*/ __Vintraval_ha460ac19__0;
        IData/*31:0*/ __Vintraval_h7d9647c9__0;
        IData/*31:0*/ __Vintraval_h066a0c68__0;
        IData/*31:0*/ __Vintraval_h027f9638__0;
        IData/*31:0*/ __Vintraval_h19fef4a4__0;
        IData/*31:0*/ __Vintraval_hd3aa67c8__0;
        IData/*31:0*/ __Vintraval_h9af4b4e5__0;
        IData/*31:0*/ __Vintraval_h82ef6923__0;
        IData/*31:0*/ __Vintraval_haef30b8e__0;
        IData/*31:0*/ __Vintraval_h6c6bc0c5__0;
        IData/*31:0*/ __Vintraval_h507697ab__0;
        IData/*31:0*/ __Vintraval_hed4fc67c__0;
        IData/*31:0*/ __Vintraval_h7851b77c__0;
        IData/*31:0*/ __Vintraval_h8530b6ab__0;
        IData/*31:0*/ __Vintraval_h7814b161__0;
        IData/*31:0*/ __Vintraval_h97300fb8__0;
        IData/*31:0*/ __Vintraval_h9bb29807__0;
        IData/*31:0*/ __Vintraval_hd7896293__0;
        IData/*31:0*/ __Vintraval_h233c8507__0;
        IData/*31:0*/ __Vintraval_h5330073b__0;
        IData/*31:0*/ __Vintraval_h32473e6d__0;
        IData/*31:0*/ __Vintraval_hfde55990__0;
        IData/*31:0*/ __Vintraval_h9a2bea47__0;
        IData/*31:0*/ __Vintraval_h56f7f781__0;
        IData/*31:0*/ __Vintraval_h08f4a325__0;
        IData/*31:0*/ __Vintraval_h795c8948__0;
        IData/*31:0*/ __Vintraval_h8ac17918__0;
    };
    struct {
        IData/*31:0*/ __Vintraval_hca08358d__0;
        IData/*31:0*/ __Vintraval_h79057467__0;
        IData/*31:0*/ __Vintraval_h56c0d056__0;
        IData/*31:0*/ __Vintraval_h2d3c2bb8__0;
        IData/*31:0*/ __Vdlyvval__dout0__v0;
        IData/*31:0*/ __Vdlyvval__dout1__v0;
        VlUnpacked<IData/*31:0*/, 512> mem;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ NUM_WMASKS = 4U;
    static constexpr IData/*31:0*/ DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ ADDR_WIDTH = 9U;
    static constexpr IData/*31:0*/ RAM_DEPTH = 0x00000200U;
    static constexpr IData/*31:0*/ DELAY = 3U;
    static constexpr IData/*31:0*/ VERBOSE = 1U;
    static constexpr IData/*31:0*/ T_HOLD = 1U;

    // CONSTRUCTORS
    Vtop_sky130_sram_2kbyte_1rw1r_32x512_8(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_sky130_sram_2kbyte_1rw1r_32x512_8();
    VL_UNCOPYABLE(Vtop_sky130_sram_2kbyte_1rw1r_32x512_8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
