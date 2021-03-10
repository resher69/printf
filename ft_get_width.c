/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:03:11 by agardet           #+#    #+#             */
/*   Updated: 2021/03/10 15:10:38 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_width(char *format, t_flag *flag)
{
	if (flag->f_width == 1)
	{
	}
	else if (format[flag->roam] >= '0' && format[flag->roam] <= '9')
		flag->width = ft_atoi(&format[flag->roam]);
}
