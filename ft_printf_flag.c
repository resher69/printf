/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:12:21 by agardet           #+#    #+#             */
/*   Updated: 2021/04/27 18:14:33 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_get_flag(char *format, t_flag *flag, va_list args)
{	
	if (format[flag->roam] == '-')
		flag->minus = 0;
	else if (format[flag->roam] == '0')
		flag->zero = '0';
	else if (format[flag->roam] == '.')
		flag->f_prec = 0;
	else if ((format[flag->roam] >= '0' && format[flag->roam] <= '9')
		|| format[flag->roam] == '*')
		flag->f_width = 0;
	if (flag->zero == '0' || flag->f_width == 0)
		flag->left = 0;
	if (flag->minus == 0 || flag->zero == '0' || flag->f_prec == 0)
		flag->roam++;
	ft_get_width(format, flag, args);
	ft_get_prec(format, flag, args);
}

void	ft_get_width(char *format, t_flag *flag, va_list args)
{
	if ((format[flag->roam] >= '0' && format[flag->roam] <= '9')
		|| format[flag->roam] == '*')
	{
		if (format[flag->roam] == '*')
		{
			flag->width = va_arg(args, int);
			flag->roam++;
		}
		else
			flag->width = ft_atoi(&format[flag->roam]);
		while (format[flag->roam] >= '0' && format[flag->roam] <= '9')
			flag->roam++;
	}
}

void	ft_get_prec(char *format, t_flag *flag, va_list args)
{
	if (format[flag->roam] == '.')
	{
		if ((format[flag->roam] >= '0' && format[flag->roam] <= '9')
			|| format[flag->roam] == '*')
		{
			if (format[flag->roam] == '*')
			{
				flag->prec = va_arg(args, int);
				flag->roam++;
			}
			flag->prec = ft_atoi(&format[flag->roam]);
			while (format[flag->roam] >= '0' && format[flag->roam] <= '9')
				flag->roam++;
		}
	}
}

void	ft_flag_init(t_flag *flag)
{
	flag->minus = 1;
	flag->zero = ' ';
	flag->width = 0;
	flag->f_width = 1;
	flag->f_prec = 1;
	flag->size = 0;
	flag->prec = 0;
	flag->roam = 0;
	flag->left = 1;
	flag->error = 0;
	flag->flag = 1;
}

void	ft_flag_reset(t_flag *flag)
{
	flag->minus = 1;
	flag->zero = ' ';
	flag->width = 0;
	flag->prec = 0;
	flag->f_width = 1;
	flag->f_prec = 1;
	flag->left = 1;
	flag->flag = 1;
}
