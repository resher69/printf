# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 16:37:13 by agardet           #+#    #+#              #
#    Updated: 2021/04/22 16:50:56 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c\
			ft_treat_input.c\
			ft_check_percent.c\
			ft_print_no_convers.c\
			ft_do_percent.c\
			ft_get_flag.c\
			ft_get_width.c\
			ft_treat_flag.c\
			ft_get_type.c\
			ft_printf_putchar.c\
			ft_print_no_percent.c\
			ft_print_c.c

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

INC			= libft.h

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		lib ${NAME}

lib:		
			make -C libft/
			cp libft/libft.a .

%.o : %.c	${INC}
			${CC} ${CFLAGS} -I includes/ -l libft/libft.a -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} $?

clean:
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	 all clean fclean re