module csr (
	clk_i,
	rst_ni,
	csr_wr_i,
	addr_i,
	mode_sel_i,
	immed_i,
	immed_sel_i,
	rs1,
	timer_intr_i,
	m_ext_intr_i,
	stall_i,
	mret_i,
	pcSource,
	next_pc,
	mcause_i,
	csr_hold_i,
	csr_flush_o,
	csr_data_o,
	pc_intr_addr,
	pc_intr_sel,
	p_int_read_o,
	csr_busy_o
);
	input clk_i;
	input rst_ni;
	input csr_wr_i;
	input [11:0] addr_i;
	input [1:0] mode_sel_i;
	input [4:0] immed_i;
	input immed_sel_i;
	input [31:0] rs1;
	input timer_intr_i;
	input m_ext_intr_i;
	input stall_i;
	input mret_i;
	input wire pcSource;
	input [31:0] next_pc;
	input [30:0] mcause_i;
	input csr_hold_i;
	output reg csr_flush_o;
	output reg [31:0] csr_data_o;
	output reg [31:0] pc_intr_addr;
	output reg pc_intr_sel;
	output reg p_int_read_o;
	output reg csr_busy_o;
	reg [4:0] int_state = 0;
	reg [31:0] mstatus;
	reg [31:0] mie;
	reg [31:0] mtvec;
	reg [31:0] mepc;
	reg [31:0] mcause;
	wire [31:0] write_data;
	assign write_data = (immed_sel_i ? {27'b000000000000000000000000000, immed_i} : rs1);
	always @(*) begin
		csr_flush_o = 0;
		pc_intr_addr = 0;
		pc_intr_sel = 1'd0;
		csr_busy_o = int_state[4-:2] != 2'd0;
		if (int_state[4-:2] == 2'd1) begin
			if (int_state[2])
				csr_flush_o = 1;
			if (int_state[0]) begin
				pc_intr_addr = mtvec;
				pc_intr_sel = 1'd1;
			end
		end
		else if ((int_state[4-:2] == 2'd2) && mret_i) begin
			pc_intr_addr = mepc;
			pc_intr_sel = 1'd1;
		end
	end
	always @(posedge clk_i)
		if (!rst_ni) begin
			int_state <= 0;
			mstatus <= 0;
			mie <= 0;
			mtvec <= 0;
			mepc <= 0;
			mcause <= 0;
		end
		else if (((int_state[4-:2] == 2'd0) && mstatus[3]) && (m_ext_intr_i || timer_intr_i)) begin
			p_int_read_o <= 1'b1;
			if (m_ext_intr_i & mie[11]) begin
				mcause <= {1'b1, mcause_i};
				int_state[4-:2] <= 2'd1;
				int_state[2-:3] <= 3'b100;
				mstatus[7] <= mstatus[3];
				mstatus[3] <= 0;
				mepc <= next_pc;
			end
			else if (timer_intr_i & mie[7]) begin
				mcause <= 32'b10000000000000000000000000000111;
				int_state[4-:2] <= 2'd1;
				int_state[2-:3] <= 3'b100;
				mstatus[7] <= mstatus[3];
				mstatus[3] <= 0;
				mepc <= next_pc;
			end
		end
		else begin
			p_int_read_o <= 1'b0;
			if (int_state[4-:2] == 2'd1) begin
				if (~stall_i)
					int_state[2-:3] <= int_state[2-:3] >> 1;
				if (pcSource != 1'd0)
					mepc <= next_pc;
				if (~stall_i && ~csr_hold_i)
					int_state[4-:2] <= 2'd2;
			end
			else if ((int_state[4-:2] == 2'd2) && mret_i) begin
				mstatus[3] <= mstatus[7];
				int_state[4-:2] <= 2'd0;
			end
			else if (csr_wr_i)
				case (addr_i)
					12'h341:
						case (mode_sel_i)
							2'b01: mepc <= write_data;
							2'b10: mepc <= mepc | write_data;
							2'b11: mepc <= mepc & ~write_data;
							default:
								;
						endcase
					12'h342:
						case (mode_sel_i)
							2'b01: mcause <= write_data;
							2'b10: mcause <= mcause | write_data;
							2'b11: mcause <= mcause & ~write_data;
							default:
								;
						endcase
					default:
						;
				endcase
			if (csr_wr_i)
				case (addr_i)
					12'h300:
						case (mode_sel_i)
							2'b01: mstatus <= write_data;
							2'b10: mstatus <= mstatus | write_data;
							2'b11: mstatus <= mstatus & ~write_data;
							default:
								;
						endcase
					12'h304:
						case (mode_sel_i)
							2'b01: mie <= write_data;
							2'b10: mie <= mie | write_data;
							2'b11: mie <= mie & ~write_data;
							default:
								;
						endcase
					12'h305:
						case (mode_sel_i)
							2'b01: mtvec <= write_data;
							2'b10: mtvec <= mtvec | write_data;
							2'b11: mtvec <= mtvec & ~write_data;
							default:
								;
						endcase
					default:
						;
				endcase
		end
	always @(*)
		case (addr_i)
			12'h300: csr_data_o = mstatus;
			12'h304: csr_data_o = mie;
			12'h305: csr_data_o = mtvec;
			12'h341: csr_data_o = mepc;
			12'h342: csr_data_o = mcause;
			12'hf14: csr_data_o = 0;
			default: csr_data_o = 0;
		endcase
endmodule
