/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:44:41 by agardet           #+#    #+#             */
/*   Updated: 2021/03/08 15:55:24 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_percent(char *format, t_flag *flag)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			flag->roam = i + 1;
			return (SUCCESS);
		}
		i++;
	}
	return (ERROR);
}
