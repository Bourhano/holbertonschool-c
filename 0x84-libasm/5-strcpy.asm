bits 64
section .text
	[GLOBAL asm_strcpy:] ; C function

asm_strcpy:
	mov	rdi, rax
copy_loop:
	movsb
	cmpb	(rsi), 0
	je	end
	jmp	copy_loop
end:
	ret
