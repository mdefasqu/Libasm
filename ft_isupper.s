;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 17:10:24 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:12:02 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_isupper

_ft_isupper:
	push rbp
	push rdi
	cmp rdi, 'A'
	jl end
	cmp rdi, 'Z'
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