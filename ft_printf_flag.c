/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:12:21 by agardet           #+#    #+#             */
/*   Updated: 2021/05/14 16:28:44 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_get_width(char *format, t_flag *flag, va_list args)
{
	if ((format[flag->roam] >= '0' && format[flag->roam] <= '9')
		|| format[flag->roam] == '*')
	{
		flag->f_width = 0;
		if (format[flag->roam] == '*')
		{
			flag->width = va_arg(args, int);
			flag->roam++;
		}
		else
			flag->width = ft_atoi(&format[flag->roam]);
		while (format[flag->roam] >= '0' && format[flag->roam] <= '9')
			flag->roam++;
		if (flag->width < 0)
		{
			flag->width *= -1;
			flag->left = 1;
			flag->zero = ' ';
		}
	}
}

void	ft_get_prec(char *format, t_flag *flag, va_list args)
{
	if (format[flag->roam] == '.')
	{
		flag->f_prec = 0;
		flag->roam++;
	}
	if ((format[flag->roam] >= '0'
			&& format[flag->roam] <= '9') || format[flag->roam] == '*')
	{
		if (format[flag->roam] == '*')
		{
			flag->prec = va_arg(args, int);
			flag->roam++;
		}
		else
			flag->prec = ft_atoi(&format[flag->roam]);
		while (format[flag->roam] >= '0' && format[flag->roam] <= '9')
			flag->roam++;
	}
	if (flag->prec < 0)
		flag->f_prec = 1;
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
	flag->flag = 1;
	flag->hexa = 1;
	flag->type = '\0';
	ft_strcpy(flag->base, "0123456789abcdef");
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
	flag->type = '\0';
	flag->hexa = 1;
	ft_strcpy(flag->base, "0123456789abcdef");
}

void	ft_get_type(char *format, t_flag *flag)
{
	if (format[flag->roam] == 'c' || format[flag->roam] == 's'
		|| format[flag->roam] == 'p' || format[flag->roam] == 'd'
		|| format[flag->roam] == 'i' || format[flag->roam] == 'u'
		|| format[flag->roam] == 'x' || format[flag->roam] == 'X'
		|| format[flag->roam] == '%')
	{
		flag->type = format[flag->roam];
		flag->roam++;
	}
}
