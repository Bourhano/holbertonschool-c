bits 64
section .text
	[GLOBAL asm_strlen:] ; C function

asm_strlen:
	;;  save rdi
	    push rdi

	;;  *al = '\0'
	    xor al, al
	;;  clear rcx
	    xor rcx, rcx
	;;  *rcx = ~*rcx
	    not rcx
	;;  while (*al /* '\0' */ != *rdi) ++rdi, --*rcx;
	    cld
	    repne scasb
	;;  *rcx = ~*rcx
	    not rcx
	    dec rcx

	;;  set return value
	    mov rax, rcx
	;;  restore rdi
	    pop rdi

	    ret
