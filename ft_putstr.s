;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/27 17:10:33 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/27 19:38:47 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

%define MACH_SYSCALL(nb)	0x2000000 | nb
%define STDOUT				1
%define WRITE				4
	
section .text
	global _ft_putstr
	extern _ft_strlen

_ft_putstr:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je end
	push rdi
	call _ft_strlen
	pop rdi
	cmp rax, 0
	je end
	mov rsi, rdi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	leave
	ret

end:	
	leave
	ret