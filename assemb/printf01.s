/*-- printf01.s */
.data

.balign 4
message1: .asciz "Hey, type a number: "

.balign 4
message2: .asciz "I read the number %d\n"

/* Format pattern for scanf */
.balign 4
scan_pattern: .asciz "%d"

/* Where scanf will store the number read */
.balign 4
number_read: .word 0

.balign 4
return: .word 0

.text

.global main
main:
	ldr r1, address_of_return
	str lr, [r1]

	ldr r0, address_of_message1
	bl printf

	ldr r0, address_of_scan_pattern
	ldr r1, address_of_number_read
	bl scanf

	ldr r0, address_of_message2
	ldr r1, address_of_number_read
	ldr r1, [r1]
	bl printf

	ldr r0, address_of_number_read
	ldr r0, [r0]

	ldr lr, address_of_return
	ldr lr, [lr]
	bx lr

address_of_message1: .word message1
address_of_message2: .word message2
address_of_scan_pattern: .word scan_pattern
address_of_number_read: .word number_read
address_of_return: .word return

/* External */
.global printf
.global scanf