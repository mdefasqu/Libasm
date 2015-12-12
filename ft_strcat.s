;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/03/26 17:41:47 by mdefasqu          #+#    #+#              ;
;    Updated: 2015/03/26 18:23:40 by mdefasqu         ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

section .text
	global _ft_strcat

_ft_strcat:
	push rbp
	push rdi
	cmp rdi, 0
	je end2

loop_rdi:
	cmp byte [rdi], 0
	je loop_rsi
	add rdi, 1
	jmp loop_rdi

loop_rsi:
	cmp byte [rsi], 0
	je end
	mov al, byte[rsi]
	mov byte[rdi], al
	add rdi, 1
	add rsi, 1
	jmp loop_rsi

end:	
	mov byte [rdi], 0
	mov rax, rdi
	pop rax
	pop rbp
	ret

end2:
	mov rax, 0
	pop rdi
	pop rbp
	ret
	
