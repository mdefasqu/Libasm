section	.text
	global	_ft_strcmp

_ft_strcmp:
	push	rbp
	mov	rbp, rsp
	mov	rcx, 0

while:
	cmp	byte[rdi+rcx], 0
	je	end
	cmp	byte[rsi+rcx], 0
	je	end
	mov	al, byte[rdi+rcx]
	sub	al, byte[rsi+rcx]
	jnz	end
	inc	rcx
	jmp	while

end:
	leave
	ret
