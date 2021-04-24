/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:10:13 by agardet           #+#    #+#             */
/*   Updated: 2021/04/24 16:32:28 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// ENLEVER STDIO
// ENLEVER STDIO
// ENLEVER STDIO
// ENLEVER STDIO
// ENLEVER STDIO
// ENLEVER STDIO

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include "libft.h"

# define SUCCESS 0
# define ERROR -1

typedef struct s_flag
{
	int		minus;
	char	zero;
	int		width;
	int		f_width;
	int		prec;
	char	type;
	int		size;
	size_t	roam;
	int		error;
}					t_flag;

void			ft_printf_putchar(char c, t_flag *flag);
int				ft_treat_input(char *format, t_flag *flag, va_list args);
int				ft_check_percent(char *format, t_flag *flag);
void			ft_print_no_convers(char *format, t_flag *flag);
int				ft_do_percent(char *format, t_flag *flag, va_list args);
void			ft_get_flag(char *format, t_flag *flag);
void			ft_get_width(char *format, t_flag *flag, va_list args);
void			ft_print_type(va_list args, t_flag *flag, char *format);
void			ft_print_c(va_list	args, t_flag *flag);
int				ft_printf(const char *format, ...);
void			ft_print_no_percent(char *format, t_flag *flag);
void			ft_flag_init(t_flag *flag);
void			ft_print_c(va_list	args, t_flag *flag);
void			ft_print_s(char *arg, t_flag *flag, va_list args);
void			ft_flag_init(t_flag *flag);
#endif