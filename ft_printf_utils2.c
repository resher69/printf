/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:48:12 by agardet           #+#    #+#             */
/*   Updated: 2021/05/08 16:05:45 by agardet          ###   ########lyon.fr   */
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

void	ft_putnbr_p_printf(size_t nbr, int i_max, t_flag *flag, char *base)
{
	int	pow;

	pow = ft_count_digit(nbr, flag) - 1;
	if (i_max < pow)
		i_max = pow;
	ft_printf_putchar('0', flag);
	ft_printf_putchar('x', flag);
	while (i_max > 0 || pow >= 0)
	{
		if (pow + 1 < i_max--)
			ft_printf_putchar('0', flag);
		else
		{
			ft_printf_putchar((base[(nbr / ft_pow(16, pow--))]), flag);
			nbr -= (nbr / ft_pow(16, pow + 1)) * ft_pow(16, pow + 1);
		}
	}
}
