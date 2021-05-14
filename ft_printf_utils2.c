/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:48:12 by agardet           #+#    #+#             */
/*   Updated: 2021/05/14 16:35:10 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_printf_putchar(char c, t_flag *flag)
{
	write(1, &c, 1);
	flag->size++;
}

void	ft_putnbr_p_printf(long long int nbr, int i_max, t_flag *flag,
	char *base)
{
	int	pow;

	pow = ft_count_digit_p(nbr, flag) - 1;
	if (i_max < pow)
		i_max = pow;
	ft_printf_putchar('0', flag);
	ft_printf_putchar('x', flag);
	if (flag->flag == 0)
		return ;
	while (i_max > 0 || pow >= 0)
	{
		if (pow + 1 < i_max--)
			ft_printf_putchar('0', flag);
		else
		{
			ft_printf_putchar((base[(nbr / ft_pow(16, pow))]), flag);
			pow--;
			nbr -= (nbr / ft_pow(16, pow + 1)) * ft_pow(16, pow + 1);
		}
	}
}

int	ft_count_digit_p(unsigned long long int nbr, t_flag *flag)
{
	int	ret;

	if (flag->f_prec == 0 && flag->prec == 0 && nbr == 0)
	{
		flag->flag = 0;
		return (0);
	}
	ret = 1;
	if (flag->hexa == 0)
	{
		if (nbr < 0)
		{
			ret++;
			nbr = (nbr + 1);
			nbr = -nbr;
		}
		while (nbr >= 16)
		{
			nbr /= 16;
			ret++;
		}
	}
	return (ret);
}
