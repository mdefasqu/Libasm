section	.text
	global	_ft_memset

_ft_memset:
	push	rbp
	mov		rbp, rsp

	cmp		rdi, 0
	je		end

	; REP STOSB
	push	rdi
	mov		rcx, rdx
	mov		eax, esi
	rep		stosb
	pop		rdi

end:
	mov	rax, rdi
	leave
	ret
