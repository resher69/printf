/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:44:41 by agardet           #+#    #+#             */
/*   Updated: 2021/04/23 16:23:29 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

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
