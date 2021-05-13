# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 16:37:13 by agardet           #+#    #+#              #
#    Updated: 2021/05/13 16:41:12 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c\
			ft_printf_core.c\
			ft_printf_flag.c\
			ft_printf_utils.c\
			ft_printf_utils2.c\
			ft_print_spec.c

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

INC			= libft.h

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

%.o : %.c	${INC}
			${CC} ${CFLAGS} -I includes/ -c $< -o $@

${NAME}:	${OBJS}
			make -C libft/
			cp libft/libft.a libftprintf.a
			ar -rcs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	 all clean fclean re