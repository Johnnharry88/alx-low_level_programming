SECTION .data
	msg: do "Hello, Holberton", 0ah
	.text
	global main
	main:
		mov edx, 17
		mov ecx, msg
		mov, ebx, 1
		mov, eax, 4
		int 80h
		mov, ebx, 0
		mov eax, 1
		int 80h
