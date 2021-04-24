/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:03:11 by agardet           #+#    #+#             */
/*   Updated: 2021/04/24 16:21:47 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_get_width(char *format, t_flag *flag, va_list args)
{
	if (flag->f_width == 1)
	{
		flag->width = va_arg(args, int);
		flag->roam++;
	}
	else if (format[flag->roam] >= '0' && format[flag->roam] <= '9')
	{
		flag->width = ft_atoi(&format[flag->roam]);
		while (format[flag->roam] >= '0' && format[flag->roam] <= '9')
			flag->roam++;
	}
}
