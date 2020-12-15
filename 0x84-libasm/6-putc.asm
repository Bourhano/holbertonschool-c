bits 64
section .text
	[GLOBAL asm_putc:] ; C function

asm_putc:
	cmp	dil,	0
	je	out

print:
	mov    byte [rsp-1], dil	; store the char from RDI

	mov     edi, 1			; EDI = fd=1 = stdout
	lea     rsi, [rsp-1] 		; 	RSI = buf
	mov     edx, 1			; RDX = len = 1
	mov 	eax, 1
	syscall

	mov rax, 1
	ret
out:
	mov rax, 0
	ret
