;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 13:10:44 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 14:45:03 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isalpha

_ft_isalpha:
	push rbp
	push rdi
	cmp rdi, 'A'
	jl false
	cmp rdi, 'z'
	jg false
	cmp rdi, 'a'
	jl test
	pop rdi
	pop rbp
	mov rax, 1
	ret

test:
	cmp rdi,'Z'
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

	

