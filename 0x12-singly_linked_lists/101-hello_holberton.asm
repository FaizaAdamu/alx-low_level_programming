SECTION	.data
msg:	db "Hello, Holberton", 0
format:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main

main:
	  mov   edi, format
	  call  printf
	  mov   eax, 0
	  mov	esi, msg

	  mov eax, 0
	  ret



