%define	BUFF_SIZE			4096
%define	MACH_SYSCALL(nb)	0x2000000 | nb
%define	STDOUT				1
%define	READ				3
%define	WRITE				4

section	.text
	global	_ft_cat

_ft_cat:
	push	rbp
	mov		rbp, rsp

	cmp		edi, 0
	jl		end

	sub		rsp, BUFF_SIZE

do_while:
	push	rdi
	mov		rax, MACH_SYSCALL(READ)
	mov		rsi, rsp
	add		rsi, 8
	mov		rdx, BUFF_SIZE
	syscall

	cmp		rax, 0
	jle		end

	mov		rdx, rax
	mov		rax, MACH_SYSCALL(WRITE)
	mov		rdi, STDOUT
	mov		rsi, rsp
	add		rsi, 8
	syscall

	pop		rdi
	jmp		do_while

end:
	leave
	ret
