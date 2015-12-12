;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 12:34:50 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/27 17:31:14 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isalnum
	extern _ft_isdigit
	extern _ft_isalpha
	
_ft_isalnum:
	push rbp
	push rdi
	call _ft_isdigit
	cmp rax, 1
	je true
	call _ft_isalpha
	cmp rax, 1
	je true
	pop rdi
	pop rbp
	mov rax, 0
	ret

true:
	pop rdi
	pop rbp
	mov rax, 1
	ret