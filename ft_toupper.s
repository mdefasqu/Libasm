;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 16:50:10 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:11:26 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_toupper

_ft_toupper:
	push rbp
	push rdi
	cmp rdi, 'a'
	jl end
	cmp rdi, 'z'
	jg end
	sub rdi, 32
	mov rax, rdi
	pop rdi
	pop rbp
	ret

end:	
	mov rax, rdi
	pop rdi
	pop rbp
	ret