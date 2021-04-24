/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:14:53 by agardet           #+#    #+#             */
/*   Updated: 2021/04/24 16:29:57 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_get_type(char *format, t_flag *flag)
{
	if (format[flag->roam] == 'c' || format[flag->roam] == 's'
		|| format[flag->roam] == 'p' || format[flag->roam] == 'd'
		|| format[flag->roam] == 'u' || format[flag->roam] == 'x'
		|| format[flag->roam] == 'X' || format[flag->roam] == '%')
	{
		flag->type = format[flag->roam];
		flag->roam++;
	}
	else
		return (ERROR);
	return (SUCCESS);
}

void	ft_print_type(va_list args, t_flag *flag, char *format)
{
	if (format[flag->roam] == 'c')
	{
		ft_print_c(args, flag);
	}
	if (format[flag->roam] == 's')
	{
		ft_print_s(va_arg(args, char *), flag, args);
	}
	// if (format[flag->roam] == 'p')
	// 	ft_print_p(args, flag);
	// if (format[flag->roam] == 'd')
	// 	ft_print_d(args, flag);
	// if (format[flag->roam] == 'i')
	// 	ft_print_i(args, flag);
	// if (format[flag->roam] == 'u')
	// 	ft_print_u(args, flag);
	// if (format[flag->roam] == 'x')
	// 	ft_print_x(args, flag);
	// if (format[flag->roam] == 'X')
	// 	ft_print_X(args, flag);
	// if (format[flag->roam] == '%')
	// 	ft_print_percent(args, flag);
	flag->roam++;
	flag->size = 0;
}
