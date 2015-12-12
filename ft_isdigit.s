;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 11:43:32 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 15:11:27 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isdigit

_ft_isdigit:
	push rbp
	push rdi	
	cmp rdi, '0'
	jl false
	cmp rdi, '9'
	jg false
	pop rdi
	pop rbp
	mov rax, 1
	ret
	
false:
	pop rdi
	pop rbp
	mov rax, 0
	ret
