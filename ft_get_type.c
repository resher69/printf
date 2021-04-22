/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:56:16 by agardet           #+#    #+#             */
/*   Updated: 2021/04/22 13:52:59 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_get_type(char *format, t_flag *flag)
{
	if (format[flag->roam] == 'c' || format[flag->roam] == 's' ||
		format[flag->roam] == 'p' || format[flag->roam] == 'd' ||
		format[flag->roam] == 'i' || format[flag->roam] == 'u' ||
		format[flag->roam] == 'x' || format[flag->roam] == 'X' ||
		format[flag->roam] == '%')
	{
		flag->type = format[flag->roam];
		flag->roam++;
	}
	else
		return (ERROR);
	return (SUCCESS);
}