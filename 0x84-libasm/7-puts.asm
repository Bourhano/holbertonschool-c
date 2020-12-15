bits 64
	%include '0-strlen.asm'
section .text
	[GLOBAL asm_puts:] ; C function

asm_puts:
	cmp	rdi,	0
	je	out

	call 	asm_strlen

print:
	mov    byte [rsp-1], dil	; store the char from RDI

	mov     edi, 1			; EDI = fd=1 = stdout
	lea     rsi, [rsp-1] 		; 	RSI = buf
	mov     edx, eax		; RDX = len
	mov 	eax, 1
	syscall

	mov rax, 1
	ret
out:
	xor rax, rax
	ret
