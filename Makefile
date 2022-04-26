# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 10:12:34 by aestevam          #+#    #+#              #
#    Updated: 2022/04/26 20:06:04 by aestevam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libftprintf.a

CC = 		gcc

LIBFT 	= 	./libft/libft.a

SRCS 	= 	ft_printf.c

OBJS	= 	${SRCS:.c=.o}

CFLAGS	= 	-Wall -Wextra -Werror -g

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
			$(MAKE) -C ./libft
			cp libft/libft.a $(NAME)
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			$(MAKE) clean -C ./libft
			rm -f ${OBJS}

fclean: clean
			$(MAKE) fclean -C ./libft
			rm -f ${NAME}

re: fclean all

bonus: all

test: all
			${CC} main.c libftprintf.a libft/libft.a -o teste
			./teste

.PHONY: all, bonus, clean, fclean, re