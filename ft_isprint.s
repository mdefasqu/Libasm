;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 16:40:25 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 16:43:39 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isprint
	
_ft_isprint:
	push rbp
	push rdi
	cmp rdi, 32
	jl end
	cmp rdi, 126
	jg end
	mov rax, 1
	pop rdi
	pop rbp
	ret

end:
	mov rax, 0
	pop rdi
	pop rbp
	ret