# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/27 19:43:59 by mdefasqu          #+#    #+#              #
#    Updated: 2015/03/27 19:44:00 by mdefasqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	push rdi
	cmp rdi, 0
	je end
	cmp rsi, 0
	je end
	mov rcx, rsi

loop:
	mov byte [rdi], 0
	add rdi, 1
	loop loop

end:
	pop rdi
	pop rbp
	ret
