/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:40:49 by agardet           #+#    #+#             */
/*   Updated: 2021/05/14 16:35:24 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf_core(char *format, t_flag *flag, va_list args)
{
	while (format[flag->roam])
	{
		while (format[flag->roam] && format[flag->roam] != '%')
			ft_printf_putchar(format[flag->roam++], flag);
		if (format[flag->roam] == '%')
		{
			flag->roam++;
			ft_get_flag(format, flag, args);
			ft_print_type(args, flag, format);
		}
	}
	return (0);
}

void	ft_get_first_flag(char *format, t_flag *flag)
{
	if (format[flag->roam] == '0' && format[flag->roam + 1] == '-')
		flag->roam++;
	if ((format[flag->roam] >= '0' && format[flag->roam] <= '9')
		|| format[flag->roam] == '*')
		flag->f_width = 0;
	if (format[flag->roam] == '0')
	{
		while (format[flag->roam] && format[flag->roam] == '0')
			flag->roam++;
		flag->zero = '0';
	}
	if (format[flag->roam] == '-')
	{
		while (format[flag->roam] && format[flag->roam] == '-')
			flag->roam++;
		flag->minus = 0;
	}
}

void	ft_get_flag(char *format, t_flag *flag, va_list args)
{	
	ft_get_first_flag(format, flag);
	if (flag->zero == '0' || flag->f_width == 0)
		flag->left = 0;
	while (format[flag->roam]
		&& (format[flag->roam] == '-' || format[flag->roam] == '0'))
	{
		if (flag->minus == 0 && format[flag->roam] == '-')
			flag->roam++;
		else if (flag->zero == 0 && format[flag->roam] == '0')
			flag->roam++;
		flag->roam++;
	}
	ft_get_width(format, flag, args);
	ft_get_prec(format, flag, args);
}

void	ft_print_type(va_list args, t_flag *flag, char *format)
{
	ft_get_type(format, flag);
	if (flag->type == 'c')
		ft_print_c(va_arg(args, int), flag);
	else if (flag->type == 's')
		ft_print_s(va_arg(args, char *), flag);
	else if (flag->type == 'p')
		ft_print_p(va_arg(args, size_t), flag);
	else if (flag->type == 'd' || flag->type == 'i')
		ft_print_d((long)va_arg(args, int), flag);
	else if (flag->type == 'u')
		ft_print_d((unsigned long)va_arg(args, unsigned int), flag);
	else if (flag->type == 'x' || flag->type == 'X')
		ft_print_x(va_arg(args, unsigned int), flag);
	else if (flag->type == '%')
		ft_print_c('%', flag);
	ft_flag_reset(flag);
}
