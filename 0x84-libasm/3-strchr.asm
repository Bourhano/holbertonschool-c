bits 64
section .text
	[GLOBAL asm_strchr:] ; C function

asm_strchr:
	push rbp
	mov rbp, rsp

strchr_loop:
	cmp byte [rdi], 0  ; test end of string
	je fail_end  	; go to end

	cmp byte [rdi], sil ; check if current character is equal to character given in parameter
	je strchr_end  	; go to end

	inc rdi        	; move to next character of the string
	jmp strchr_loop 	; loop

strchr_end:
	mov rax, rdi    	; set function return

	mov rsp, rbp
	pop rbp
	ret

fail_end:
	mov rax, 0
	mov rsp, rbp
	pop rbp
	ret
