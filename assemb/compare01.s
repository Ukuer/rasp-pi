/*-- compare01.s */
.text
.global main

main:
	mov r1, #2
	mov r2, #2
	cmp r1, r2		/* update cpsr condition codes with the value of r1-r2 */
	beq case_qeual	/* branch to case_qeual only if z=1 */
case_different:
	mov r0, #2
	b end
case_qeual:
	mov r0, #1
end:
	bx lr