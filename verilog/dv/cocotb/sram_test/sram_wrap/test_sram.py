import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, \
    FallingEdge, Timer, Edge



fail_addr = 0x12345678
reset_cycles = 5

@cocotb.test()
async def test_sram(dut):
    # Generate a Clock signal
    cocotb.start_soon(Clock(dut.clk_i, 1, units='ns').start())

    # Create handles to DUT ports
    rst_ni = dut.rst_ni

    # Interface w/ handles
    rst_ni.value = 1

    # Reset core
    await FallingEdge(dut.clk_i) 
    dut.rst_ni.value = 0
    
    await ClockCycles(dut.clk_i, reset_cycles)
    dut.rst_ni.value = 1

    # Testall completes in 8031 clock cycles on standard OTTER.
    # Rounded up for margin of error, but this may need adjustment
    for c in range(100000):
        await ClockCycles(dut.clk_i, 1)
        assert not (dut.dmem_addr.value.integer == fail_addr and dut.dmem_we.value.integer == 1), f"Fail Addr Reached"
        # assert (not (dut.dmem_addr.value.integer == fail_addr and dut.dmem_wdata_o.value.integer == -1))
        # if (dut.dmem_addr.value.integer == fail_addr and dut.dmem_be.value.integer == 0xF):
        #     fail_data = dut.dmem_wdata_o.value.integer
        #     assert fail_data != -1, f"Failure reached failed after {c+reset_cycles} cycles"


