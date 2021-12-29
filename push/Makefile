# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/26 05:14:59 by aabdou            #+#    #+#              #
#    Updated: 2021/12/28 18:11:54 by aabdou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_print_char.c\
	ft_print_digit.c\
	ft_print_hex.c\
	ft_printf.c\

OBJ = $(SRC:.c=o)

HEADER = ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) $(HEADER)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) *.o

clean: 
	@rm -rf *.o
	@echo "Makefile : cleaning .o files..."

fclean: clean
	@rm -rf $(NAME) *.a
	@echo "Makefile : cleaning .a files..."

re: fclean all

.PHONY: all re clean fclean
