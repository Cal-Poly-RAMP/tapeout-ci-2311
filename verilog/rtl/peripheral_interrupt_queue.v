module peripheral_interrupt_queue (
	clk,
	reset_n,
	mem_err_int,
	me_i_en,
	interrupts,
	i_enable,
	p_int_read,
	csr_busy,
	p_int,
	p_mcause
);
	parameter NUM_INTER = 54;
	input clk;
	input reset_n;
	input mem_err_int;
	input me_i_en;
	input [NUM_INTER - 1:0] interrupts;
	input [NUM_INTER - 1:0] i_enable;
	input p_int_read;
	input csr_busy;
	output reg p_int = 0;
	output reg [31:0] p_mcause = 0;
	localparam IND_REG_WIDTH = $clog2(NUM_INTER);
	reg [31:0] inter_queue [0:NUM_INTER - 1];
	reg [IND_REG_WIDTH - 1:0] start_ind;
	reg [IND_REG_WIDTH - 1:0] end_ind;
	reg queue_full;
	reg [1:0] state;
	initial begin
		begin : sv2v_autoblock_1
			integer i;
			for (i = 0; i < NUM_INTER; i = i + 1)
				inter_queue[i] = 0;
		end
		state = 2'b01;
		start_ind = 0;
		end_ind = 0;
		queue_full = 0;
	end
	reg [IND_REG_WIDTH - 1:0] cnt;
	reg [IND_REG_WIDTH - 1:0] temp_end_ind;
	reg full_q;
	always @(posedge clk)
		if (~reset_n) begin
			begin : sv2v_autoblock_2
				integer i;
				for (i = 0; i < NUM_INTER; i = i + 1)
					inter_queue[i] = 0;
			end
			state <= 2'b01;
			start_ind <= 0;
			end_ind <= 0;
			queue_full <= 0;
		end
		else begin
			if ((|interrupts || mem_err_int) && ~queue_full) begin
				cnt = 0;
				full_q = 0;
				temp_end_ind = end_ind;
				if (end_ind < start_ind)
					temp_end_ind = temp_end_ind + NUM_INTER;
				if (mem_err_int & me_i_en) begin
					inter_queue[end_ind + cnt] <= 12;
					cnt = cnt + 1;
					if (cnt == (NUM_INTER - (temp_end_ind - start_ind)))
						full_q = 1;
				end
				if (cnt != (NUM_INTER - (temp_end_ind - start_ind))) begin : sv2v_autoblock_3
					integer i;
					for (i = 0; i < NUM_INTER; i = i + 1)
						if ((interrupts[i] & i_enable[i]) & ~full_q) begin
							inter_queue[end_ind + cnt] = 13 + i;
							cnt = cnt + 1;
							if (cnt == (NUM_INTER - (temp_end_ind - start_ind)))
								full_q = 1;
						end
				end
				if (full_q)
					queue_full <= 1;
				end_ind <= end_ind + cnt;
			end
			case (state)
				2'b01:
					if (~csr_busy && !((start_ind == end_ind) && ~queue_full)) begin
						p_int <= 1'b1;
						p_mcause <= inter_queue[start_ind];
						state <= 2'b10;
					end
				2'b10:
					if (p_int_read) begin
						start_ind <= start_ind + 1;
						if (queue_full && (start_ind != end_ind))
							queue_full <= 1'b0;
						p_int <= 1'b0;
						state <= 2'b01;
					end
					else if (csr_busy)
						state <= 2'b01;
				default: state <= 2'b01;
			endcase
		end
endmodule
