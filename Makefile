# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/04 16:37:13 by agardet           #+#    #+#              #
#    Updated: 2021/02/04 16:42:58 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	
			ft_no_percent.c\
			ft_print_no_percent.c\
			ft_treat_input.c\
			



OBJS	=	$(SRCS:.c=.o)


FLAGS	=	-Wall -Wextra -Werror

NAME	=	libftprintf.a

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

HEADER = includes/ft_printf.h

%.o:		%.c				$(HEADER)
			gcc $(FLAGS) -I $(HEADER) -o $@ -c $<

all:		$(NAME)

clean:
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME) $(BONUS)

re:			fclean all

.PHONY:		all clean fclean re bonus