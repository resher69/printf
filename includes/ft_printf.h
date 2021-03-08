/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:10:13 by agardet           #+#    #+#             */
/*   Updated: 2021/03/08 16:02:37 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include "libft.h"

# define SUCCESS 0
# define ERROR -1

typedef struct		s_flag
{
	int		minus;
	char	zero;
	int		width;
	int		prec;
	char	type;
	int		total_len;
	int		roam;
}					t_flag;

int				ft_printf(const char *format, ...);
int				ft_treat_input(const char *format, t_flag *flag, va_list args);
int				ft_check_percent(char *format, t_flag *flag);
void			ft_print_no_convers(char *format, t_flag *flag);
int				ft_do_percent(char *format, t_flag *flag);
int				ft_get_flag(char *format, t_flag *flag);
int				ft_get_width(char format, t_flag *flag);


#endif