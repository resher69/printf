/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:10:13 by agardet           #+#    #+#             */
/*   Updated: 2021/05/11 17:39:40 by agardet          ###   ########lyon.fr   */
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
	int		f_prec;
	char	type;
	int		size;
	int		roam;
	int		error;
	int		prec;
	int		left;
	int		flag;
	int		hexa;
}					t_flag;

void						ft_printf_putchar(char c, t_flag *flag);
int							ft_check_percent(char *format, t_flag *flag);
int							ft_printf_core(char *format, t_flag *flag, va_list args);
void						ft_get_flag(char *format, t_flag *flag, va_list args);
void						ft_get_width(char *format, t_flag *flag, va_list args);
void						ft_get_prec(char *format, t_flag *flag, va_list args);
void						ft_print_type(va_list args, t_flag *flag, char *format);
void						ft_print_c(char c, t_flag *flag);
void						ft_print_s(char *arg, t_flag *flag);
void						ft_print_d(long nbr, t_flag *flag);
void						ft_print_u(unsigned long nbr, t_flag *flag);
void						ft_print_x(long nbr, t_flag *flag);
void						ft_print_p(size_t nbr, t_flag *flag);
int							ft_print_d_u_x_add_on(long nbr, int count_digit, t_flag *flag);
int							ft_printf(const char *format, ...);
void						ft_flag_init(t_flag *flag);
void						ft_flag_reset(t_flag *flag);
void						ft_print_no_percent(char *format, t_flag *flag);
void						ft_get_type(char *format, t_flag *flag);
void						ft_putstr_printf(char *s, t_flag *flag);
void						ft_putnbr_printf(long nbr, int i_max, t_flag *flag, char *base);
void						ft_putnbr_p_printf(long long int nbr, int i_max, t_flag *flag, char *base);
int		ft_count_digit_p(unsigned long long int nbr, t_flag *flag);
long						ft_count_digit(long nbr, t_flag *flag);
unsigned long long int		ft_pow(unsigned long long int x, int pow);
void						ft_putnbr_base(long nbr, int i_max, char *base, t_flag *flag);
void						ft_recursive(long i, char *base, int len, t_flag *flag);

int							ft_baselen(char *str);

#endif