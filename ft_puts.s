%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
	
section .text
	global _ft_puts
	extern _ft_putstr
	newl	db		10
	null	db		"(null)", 10
	
_ft_puts:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je error
	call _ft_putstr
	jmp newline
	leave
	ret

newline:
	mov rdi, STDOUT				
	lea rsi, [rel newl]
	mov rdx, 1
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rax, 10
	leave
	ret
	
error:
	mov rdi, STDOUT				
	lea rsi, [rel null]
	mov rdx, 7
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	mov rax, 10
	leave
	ret
