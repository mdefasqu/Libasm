;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_islower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 17:09:11 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:11:44 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_islower

_ft_islower:
	push rbp
	push rdi
	cmp rdi, 'a'
	jl end
	cmp rdi, 'z'
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