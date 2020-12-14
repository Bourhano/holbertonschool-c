	GLOBAL asm_strcmp:

	section .text

asm_strcmp:
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
	jmp asm_strcmp

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
