/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:52:25 by agardet           #+#    #+#             */
/*   Updated: 2021/04/19 14:19:16 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_get_flag(char *format, t_flag *flag)
{
	if (format[flag->roam] == '-')
		flag->minus = 0;
	else if (format[flag->roam] == '0')
		flag->zero = 0;
	else if (format[flag->roam] == '.')
		flag->prec = 0;
	else if (format[flag->roam] >= '0' && format[flag->roam] <= '9')
		flag->f_width = 0;
	else if (format[flag->roam] == '*')
		flag->f_width = 1;
	if (flag->minus == '0' || flag->zero == '0' || flag->prec == '0'
							|| flag->f_width == '1')
		flag->roam++;
	
}