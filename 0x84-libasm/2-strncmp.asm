bits 64
section .text
	[GLOBAL asm_strncmp:] ; C function

asm_strncmp:
	xor rcx, rcx

loop:
	mov r10b, BYTE [rdi]
	mov r11b, BYTE [rsi]
	cmp r10b, 0
	je end
	cmp r11b, 0
	je end_e
	cmp r10b, r11b
	jne oops
	inc rdi
	inc rsi
	inc rcx
	cmp rdx, rcx
	jle end
	jmp loop

end:
	movzx rax, r10b
	movzx rbx, r11b
	sub rax, rbx
	ret
oops:
	mov rax, -1
	ret
end_e:
        mov rax, 1
	ret
