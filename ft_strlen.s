;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/27 12:00:00 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/27 15:51:34 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_strlen

_ft_strlen:
	push rbp
	push rdi
	mov rcx, -1
	mov al, 0
	repne	scasb 
	neg rcx
	sub rcx, 2
	mov rax, rcx
	pop rdi
	pop rbp
	ret
	