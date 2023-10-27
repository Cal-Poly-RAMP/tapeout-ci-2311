# RISC-V baremetal init.s
# This code is executed first.

.section .text.init
entry:

    la    sp, 0x4000   # set up the stack pointer, using a constant defined in the linker script.
    call _start		# use this if using C runtime, std c library
  
#    call  main          # call the main function if barebones assembly/C

end:
    j end               # loop when finished if there is no environment to return to.