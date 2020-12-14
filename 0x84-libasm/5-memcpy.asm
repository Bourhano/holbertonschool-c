bits 64
section .text
	[GLOBAL asm_memcpy:] ; C function

asm_memcpy:
	;;  save rdi
	    push rdi

	;;  1st (rdi)
	;;  2nd (rsi)
	;;  switch rsi to rdi
	    mov rdi, rsi
	;;  copy 3rd (rdx) argument to rcx, to be able to count basing on it
	    mov rcx, rdx

	;;  *al = '\0'
	    xor al, al
	;;  look for a '\0' (*al) in the first *rdx bytes of rdi while (*rcx--)
	;;  while ('\0' != *rdi && 0 != *rcw) --*rcx, ++rdi;
	    cld
	    repne scasb


	;;  1st in rcx
	    mov rcx, rdi
	;;  restore rdi
	    pop rdi
	;;  rcx -= rsi, rcx = the length to copy
	    sub rcx, rsi

	;;  store the rdi for now
	    push rdi

	;;  copy from rsi to rdi while
	;;  while (0 != *rcx) --*rcx, *rsi++ = *rdi++;
	    cld
	    rep movsb

	;;  append '\0'
	;; 	    mov byte [rdi], 0

	;;  restore rdi
	    pop rdi
	;;  set return value to initial value of rdi
	    mov rax, rdi
	    ret
