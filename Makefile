# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chtison <chtison@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/14 18:14:47 by chtison           #+#    #+#              #
#    Updated: 2015/03/28 20:25:06 by chtison          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libfts.a
SRC = ft_isalnum.s ft_isalpha.s ft_isdigit.s ft_bzero.s ft_isascii.s \
		ft_isprint.s ft_toupper.s ft_tolower.s ft_islower.s ft_isupper.s \
		ft_isspace.s ft_isblank.s ft_strcat.s ft_strlen.s ft_putstr.s ft_puts.s \
		ft_memcpy.s ft_memset.s ft_strdup.s ft_cat.s ft_strcmp.s
HDR = libfts.h
LIB = 
OBJ = $(SRC:%.s=obj/%.o)
GCC = gcc
INC = 

ASM = nasm -f macho64
TEST = test

all: auteur obj $(NAME)

obj:
	@mkdir -p obj/

auteur:
	$(shell echo mdefasqu > $@)

$(NAME): $(OBJ)
	@echo "\033[0;32mCompilation de libftASM.\033[0;33m"	
	@ar rc $(NAME) $(OBJ)
	@echo "\033[33m-------------------------------------------------------------\033[0m"

obj/%.o: %.s $(HDR)
	$(ASM) $< -o $@ 

test: obj $(NAME)
	@$(GCC) -c main.c -o obj/main.o
	@$(GCC) -o $(TEST) obj/main.o $(OBJ)
	@./test

testre: re test

clean:
	@rm -rf -- obj/
	@echo "\033[31;4mDeleted\033[24m: obj/\033[0m"

fclean: clean
	@rm -f -- $(NAME)
	@rm -f -- $(TEST)	
	@echo "\033[31;4mDeleted\033[24m: $(NAME)\033[0m"
	@echo "\033[34m-------------------------------------------------------------\033[0m"

re: fclean all

.PHONY: all clean fclean re
