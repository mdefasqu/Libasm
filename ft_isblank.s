;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isblank.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 17:36:14 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:12:49 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isblank

_ft_isblank:
	push rbp
	push rdi
	cmp rdi, 32
	je true
	cmp rdi, 9
	je true
	mov rax, 0
	pop rdi
	pop rbp
	ret

true:	
	mov rax, 1
	pop rdi
	pop rbp
	ret