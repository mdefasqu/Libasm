;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isascii.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 16:27:18 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 16:47:03 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isascii
	
_ft_isascii:
	push rbp
	push rdi
	cmp rdi, 0
	jl end
	cmp rdi, 127
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