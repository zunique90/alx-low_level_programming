; 64-bit program in assembly that prints a String,
; followed by a new line

	extern printf

	section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	section .text

	global main
main:
	push	rbp

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call	printf

	pop	rbp

	mov	rax,0
	ret
