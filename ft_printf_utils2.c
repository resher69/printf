/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:48:12 by agardet           #+#    #+#             */
/*   Updated: 2021/04/27 18:09:07 by agardet          ###   ########lyon.fr   */
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

void	ft_putstr_printf(char *s, t_flag *flag)
{
	int	i;
	int	i_max;

	i = 0;
	if (!s)
		s = "(null)";
	if (flag->f_prec == 0)
		i_max = flag->prec;
	else
		i_max = ft_strlen(s);
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
		flag->size++;
	}
}
