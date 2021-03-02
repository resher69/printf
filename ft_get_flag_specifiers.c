/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flag_specifiers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:41:58 by agardet           #+#    #+#             */
/*   Updated: 2021/02/26 13:47:31 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ft_get_flag_specifiers(const char *format, t_flag *flag)
{
	size_t	i;

	i = 0;
	while (format[i] == '0' || format[i] == '-')
	{
		if (format[i] == '0')
			flag->zero = 0;
	}

}
