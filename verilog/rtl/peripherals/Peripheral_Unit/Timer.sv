`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: Timer
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////

module Timer (
    input CLK,
    input RST_N,
    input en,
    input wr_en,
    input wr_mtimecmp_in_h,
    input wr_mtimecmp_in_l,
    input [31:0] mtimecmp_in_h,
    input [31:0] mtimecmp_in_l,
    output logic [31:0] mtime_h,    // Top 32 of 64 bit timer
    output logic [31:0] mtime_l,    // Bottom 32 of 64 bit timer
    output logic timer_int
    );
    logic [63:0] mtime = 0;
    logic [63:0] mtimecmp = -1;
    
    logic en_r = 0;
    logic wr_en_r1 = 0, wr_en_r2 = 0, wr_en_r;
    logic wr_mtimecmp_in_h_r1 = 0, wr_mtimecmp_in_h_r2 = 0, wr_mtimecmp_in_h_r;
    logic wr_mtimecmp_in_l_r1 = 0, wr_mtimecmp_in_l_r2 = 0, wr_mtimecmp_in_l_r;
    
    assign wr_en_r = wr_en_r1 & ~wr_en_r2;
    assign wr_mtimecmp_in_h_r = wr_mtimecmp_in_h_r1 & ~wr_mtimecmp_in_h_r2;
    assign wr_mtimecmp_in_l_r = wr_mtimecmp_in_l_r1 & ~wr_mtimecmp_in_l_r2;

    always_comb
    begin
        mtime_h = mtime[63:32];
        mtime_l = mtime[31:0];
        timer_int = ( mtime == mtimecmp ) ? 1 : 0;
    end

    always_ff @ (posedge CLK)
    begin
        if (~RST_N) begin
            mtime <= 0;
            mtimecmp <= -1;
        end
        else begin
            wr_en_r1 <= wr_en;
            wr_en_r2 <= wr_en_r1;
            wr_mtimecmp_in_h_r1 <= wr_mtimecmp_in_h;
            wr_mtimecmp_in_h_r2 <= wr_mtimecmp_in_h_r1;
            wr_mtimecmp_in_l_r1 <= wr_mtimecmp_in_l;
            wr_mtimecmp_in_l_r2 <= wr_mtimecmp_in_l_r1;
            if (wr_en_r)
                en_r <= en;
            if (wr_mtimecmp_in_l_r)
                mtimecmp [31:0] <= mtimecmp_in_l;
            if (wr_mtimecmp_in_h_r)
                mtimecmp [63:32] <= mtimecmp_in_h;
            if (en_r)
                mtime <= mtime + 1;
            if (mtime == mtimecmp)
                mtime <= 0;
        end
    end

endmodule

