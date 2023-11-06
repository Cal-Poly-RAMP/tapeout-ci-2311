`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// Module Name: peripheral_interrupt_queue
// 
// SPDX-License-Identifier: Apache-2.0
//
//////////////////////////////////////////////////////////////////////////////////


module peripheral_interrupt_queue #(
    parameter NUM_INTER = 52
    )
    (
    input clk,
    input reset_n,
    input mem_err_int,
    input me_i_en,
    input [NUM_INTER - 1: 0] interrupts,
    input [NUM_INTER - 1: 0] i_enable,
    input p_int_read,
    input csr_busy,
    output logic p_int = 0,
    output logic [31:0] p_mcause = 0
    );
    
    typedef enum logic [1:0]
    {
        WAIT        = 2'b01,
        SEND_INT     = 2'b10
    } state_t;
    
    localparam INTR_ADDR_WIDTH = $clog2(NUM_INTER+1);
    logic [NUM_INTER - 1: 0] latched_interrupts;
    logic [31:0] inter_queue [2**INTR_ADDR_WIDTH];
    logic [INTR_ADDR_WIDTH-1:0] start_ind = 0;
    logic [INTR_ADDR_WIDTH-1:0] end_ind = 0;
    logic [INTR_ADDR_WIDTH-1:0] temp_end_ind;
    logic [INTR_ADDR_WIDTH-1:0] intr_ptr = 0;
    
    assign temp_end_ind = (end_ind < start_ind)?(end_ind + NUM_INTER):end_ind;
    
    logic queue_full = 0;
    state_t state = WAIT;
    
    always_ff @ (posedge clk) begin
        if (~reset_n) begin
            for (integer i = 0; i < NUM_INTER; i++) begin
                inter_queue[i] <= 0;
            end
            state <= WAIT;
            start_ind <= 0;
            end_ind <= 0;
            intr_ptr <= 0;
            queue_full <= 0;
	    latched_interrupts <= 0;
        end
        else begin
	    for (logic [INTR_ADDR_WIDTH - 1:0] i = 0; i < NUM_INTER; i++) begin
		if (i != intr_ptr && interrupts[i] & i_enable[i])
		    latched_interrupts[i] <= 1'b1;
	    end
            if ((mem_err_int & me_i_en) && ~queue_full) begin
                inter_queue[end_ind] <= 12;
                if ((temp_end_ind - start_ind + 1) == NUM_INTER)
                    queue_full <= 1;
                end_ind <= end_ind + 1;
            end
            else if (~queue_full) begin
		if (latched_interrupts[intr_ptr] || interrupts[intr_ptr] & i_enable[intr_ptr]) begin
                    inter_queue[end_ind] <= 13 + {{32 - INTR_ADDR_WIDTH{1'b0}}, intr_ptr};
                    if ((temp_end_ind - start_ind + 1) == NUM_INTER)
                        queue_full <= 1;
                    end_ind <= end_ind + 1;
		    latched_interrupts[intr_ptr] <= 1'b0;
		end
  		intr_ptr <= intr_ptr + 1;
	    end
	    else if (queue_full) begin
		if (~latched_interrupts[intr_ptr]) begin
		    if (interrupts[intr_ptr] & i_enable[intr_ptr])
			latched_interrupts[intr_ptr] <= 1'b1;
		    else
			intr_ptr <= intr_ptr + 1;
		end
	    end
            case (state)
                WAIT:
                    begin
                        if (~csr_busy && !(start_ind == end_ind && ~queue_full)) begin
                            p_int <= 1'b1;
                            p_mcause <= inter_queue[start_ind];
                            state <= SEND_INT;
                        end
                    end
                SEND_INT:
                    begin
                        if (p_int_read) begin
                            start_ind <= start_ind + 1;
                            if (queue_full && start_ind != end_ind)
                                queue_full <= 1'b0;
                            p_int <= 1'b0;
                            state <= WAIT;
                        end
                        else begin
                            if (csr_busy)       //CSR received another interrupt at the same time as the peripheral interrupt
                                state <= WAIT;
                        end
                    end
                default:
                    state <= WAIT;
            endcase
        end
    end
endmodule

