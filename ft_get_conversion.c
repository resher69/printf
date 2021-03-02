/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:08:08 by agardet           #+#    #+#             */
/*   Updated: 2021/03/02 12:09:49 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ft_get_conversion(const char *format, t_flag *flag)
{
	size_t i;

	i = 0;
	flag->type = -1;
	if (format[i] == 'c' || format[i] == 's' || format[i] == 'p' ||
		format[i] == 'd' || format[i] == 'i' || format[i] == 'u' ||
		format[i] == 'x' || format[i] == 'X' || format[i] == '%')
		flag->type = format[i]; 
	i++;
	return (i);
}
