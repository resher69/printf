/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:48:12 by agardet           #+#    #+#             */
/*   Updated: 2021/05/04 17:22:14 by agardet          ###   ########lyon.fr   */
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
			flag->roam++;
			i++;
			return (SUCCESS);
		}
		i++;
	}
	return (ERROR);
}

void	ft_printf_putchar(char c, t_flag *flag)
{
	write(1, &c, 1);
	flag->size++;
}
