;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isspace.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 17:21:25 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:12:27 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isspace

_ft_isspace:
	push rbp
	push rdi
	cmp rdi, 32
	je true
	cmp rdi, 9
	jl end
	cmp rdi, 13
	jg end
	mov rax, 1
	pop rdi
	pop rbp
	ret

true:	
	mov rax, 1
	pop rdi
	pop rbp
	ret
	
end:	
	mov rax, 0
	pop rdi
	pop rbp
	ret