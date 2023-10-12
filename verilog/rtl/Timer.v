module Timer (
	CLK,
	RST_N,
	en,
	wr_en,
	wr_mtimecmp_in_h,
	wr_mtimecmp_in_l,
	mtimecmp_in_h,
	mtimecmp_in_l,
	mtime_h,
	mtime_l,
	timer_int
);
	input CLK;
	input RST_N;
	input en;
	input wr_en;
	input wr_mtimecmp_in_h;
	input wr_mtimecmp_in_l;
	input [31:0] mtimecmp_in_h;
	input [31:0] mtimecmp_in_l;
	output reg [31:0] mtime_h;
	output reg [31:0] mtime_l;
	output reg timer_int;
	reg [63:0] mtime = 0;
	reg [63:0] mtimecmp = -1;
	reg en_r = 0;
	reg wr_en_r1 = 0;
	reg wr_en_r2 = 0;
	wire wr_en_r;
	reg wr_mtimecmp_in_h_r1 = 0;
	reg wr_mtimecmp_in_h_r2 = 0;
	wire wr_mtimecmp_in_h_r;
	reg wr_mtimecmp_in_l_r1 = 0;
	reg wr_mtimecmp_in_l_r2 = 0;
	wire wr_mtimecmp_in_l_r;
	assign wr_en_r = wr_en_r1 & ~wr_en_r2;
	assign wr_mtimecmp_in_h_r = wr_mtimecmp_in_h_r1 & ~wr_mtimecmp_in_h_r2;
	assign wr_mtimecmp_in_l_r = wr_mtimecmp_in_l_r1 & ~wr_mtimecmp_in_l_r2;
	always @(*) begin
		mtime_h = mtime[63:32];
		mtime_l = mtime[31:0];
		timer_int = (mtime >= mtimecmp ? 1 : 0);
	end
	always @(posedge CLK)
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
				mtimecmp[31:0] <= mtimecmp_in_l;
			if (wr_mtimecmp_in_h_r)
				mtimecmp[63:32] <= mtimecmp_in_h;
			if (en_r)
				mtime <= mtime + 1;
		end
endmodule
