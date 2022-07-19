# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 10:12:34 by aestevam          #+#    #+#              #
#    Updated: 2022/07/19 17:10:25 by aestevam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	clean fclean re all

LIBFT	:= libft
NAME	:= libftprintf.a
CFLAGS	:= -Wall -Wextra -Werror -c
CC	:= clang
SRCS	:= ft_printf.c \
		printf_utils.c \
		lib_utils.c \

OBJ	:= $(SRCS:%.c=%.o)

all	: $(NAME)

$(NAME)	: $(OBJ)
	make  -C $(LIBFT)
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

%.o	: %.c
	$(CC) $(CFLAGS) $<

clean	:
	rm -f $(OBJ)
	make clean -C $(LIBFT)

fclean	: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re	: fclean all
