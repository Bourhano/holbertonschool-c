bits 64
section .text
	[GLOBAL asm_strspn:] ; C function

asm_strspn:
	push rcx
	push rdx
	push r8
	push r9
	xor r8, r8
	xor r9, r9
	xor rcx, rcx

.compare_char:
	cmp byte [rdi+rcx], 0
	jz .ret			; All bytes are included in accept
	xor rdx, rdx
	mov r8b, byte [rdi+rcx]

.compare_with_accept:
	mov r9b, byte [rsi+rdx]
	cmp r8b, r9b
	je .advance_one_char			; A byte was found
	cmp r9b, 0
	jz .ret					; Nothing was found
	inc rdx
	jmp .compare_with_accept

.advance_one_char:
	inc rcx
	jmp .compare_char	; Advance one byte further and try again

.ret:
	mov rax, rcx
	pop r9
	pop r8
	pop rdx
	pop rcx
	ret
