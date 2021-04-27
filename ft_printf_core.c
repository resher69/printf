/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:40:49 by agardet           #+#    #+#             */
/*   Updated: 2021/04/27 18:09:08 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf_core(char *format, t_flag *flag, va_list args)
{
	while (format[flag->roam])
	{
		ft_print_no_percent(format, flag);
		if (format[flag->roam] == '%')
		{
			flag->roam++;
			ft_get_flag(format, flag, args);
			ft_print_type(args, flag, format);
		}
	}
	return (0);
}

void	ft_print_no_percent(char *format, t_flag *flag)
{
	while (format[flag->roam] && format[flag->roam] != '%')
	{
		ft_printf_putchar(format[flag->roam], flag);
		flag->roam++;
	}
}
