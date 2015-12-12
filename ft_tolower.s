;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 17:05:31 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:13:09 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_tolower

_ft_tolower:
	push rbp
	push rdi
	cmp rdi, 'A'
	jl end
	cmp rdi, 'Z'
	jg end
	add rdi, 32
	mov rax, rdi
	pop rdi
	pop rbp
	ret

end:	
	mov rax, rdi
	pop rdi
	pop rbp
	ret