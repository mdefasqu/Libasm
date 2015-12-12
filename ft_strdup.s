section	.text
	global	_ft_strdup
	extern	_ft_strlen
	extern	_malloc

_ft_strdup:
	push	rbp
	mov		rbp, rsp

	cmp		rdi, 0
	je		null

	push	rdi
	call	_ft_strlen

	push	rax
	mov		rdi, rax

	call	_malloc
	cmp		rax, 0
	je		null

	mov		rdi, rax
	pop		rcx
	pop		rsi
	push	rax
	rep		movsb
	pop		rax
	leave
	ret

null:
	mov		rax, 0
	leave
	ret
