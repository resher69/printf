# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 16:37:13 by agardet           #+#    #+#              #
#    Updated: 2021/03/08 16:03:06 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c\
			ft_treat_input.c\
			ft_check_percent.c\
			ft_print_no_convers.c\
			ft_do_percent.c\
			ft_get_flag.c\
			ft_get_width.c

OBJS	=	$(SRCS:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

HEADER =	includes/ft_printf.h

INC_DIR =	includes/

LIBFT =		libft/libft.a

all:		libft $(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o: %.c	$(HEADER)
			gcc $(FLAGS) -I $(INC_DIR) -c $< -o $@

libft:
		make -C libft/

test:	all
		gcc -I $(INC_DIR) $(NAME) $(LIBFT) main.c -o debug.out
		clear
		@./debug.out

clean:
			make -C libft clean
			rm -f $(OBJS)

fclean:		clean
			make -C libft fclean
			rm -f $(NAME) debug.out

re:			fclean all

.PHONY:		all clean fclean re bonus test libft