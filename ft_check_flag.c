/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:52:25 by agardet           #+#    #+#             */
/*   Updated: 2021/03/08 16:02:55 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_flag(char *format, t_flag *flag)
{
	if (format[flag->roam] == '-')
		flag->minus = 0;
	if (format[flag->roam] == '0')
		flag->zero = 0;
	if (format[flag->roam] == '.')
		flag->prec = 0;
	flag->width = ft_get_width(format, flag);
	

}