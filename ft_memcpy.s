# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chtison <chtison@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/28 18:39:12 by chtison           #+#    #+#              #
#    Updated: 2015/03/28 18:47:34 by chtison          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global	_ft_memcpy

_ft_memcpy:
	push	rbp
	mov		rbp, rsp

	cmp		rdi, 0
	je		end
	cmp		rsi, 0
	je		end
	
	;REP MOVSB
	push	rdi
	mov		rcx, rdx
	rep		movsb
	pop		rdi

end:
	mov		rax, rdi
	leave
	ret
