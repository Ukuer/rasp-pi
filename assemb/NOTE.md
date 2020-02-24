# ARM assembler in Raspberry Pi

### Register
The ARM processor in a Raspberry Pi has 
16 integer registers and 32 floating point registers.
Those 16 integer registers have names from r0 to r15.
They can hold 32 bits.

tips: when a process exits, 
there will be a number as the symbol of its status. 
The number is kept in the register r0.
If we want to show it, use '$./filename ; echo $? '

### GDB
Common commands are following:

gdb --args ./\<filename>,	run gdb with the file

start,		to start

quit,		quit from the gdb

disassemble(disas),		disassemble the process

info registers r0,		check out the content of r0

p \<varname>,			show the varible

stepi,					run a instruction

continuing,				run the whole process
