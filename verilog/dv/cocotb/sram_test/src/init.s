# RISC-V baremetal init.s
# This code is executed first.

.section .text.init
entry:

    li    sp, 0x80004000   # set up the stack pointer, using a constant defined in the linker script.
    la    gp, __global_pointer$
    add   s0, sp, x0
    call _start		# use this if using C runtime, std c library
  
#    call  main          # call the main function if barebones assembly/C

end:
    j end               # loop when finished if there is no environment to return to.