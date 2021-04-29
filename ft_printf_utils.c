/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:49:16 by agardet           #+#    #+#             */
/*   Updated: 2021/04/29 18:20:53 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putstr_printf(char *s, t_flag *flag)
{
	int	i;
	int	i_max;

	i = 0;
	if (flag->f_prec == 0)
		i_max = flag->prec;
	else
		i_max = ft_strlen(s);
	while (s[i] && i < i_max)
	{
		ft_putchar(s[i]);
		i++;
		flag->size++;
	}
}

int	ft_print_d_add_on(long nbr, int count_digit, t_flag *flag)
{
	int	ret;

	ret = 0;
	if (flag->f_prec == 0)
		flag->zero = ' ';
	if (count_digit <= flag->prec)
	{
		if (nbr < 0)
			return (flag->prec++);
		return (flag->prec);
	}
	else if (flag->f_prec == 0 && flag->prec == 0 && nbr == 0)
		return (0);
	return (count_digit);
}

long	ft_count_digit(long nbr)
{
	long	ret;

	ret = 0;
	if (nbr < 0)
	{
		ret++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		ret++;
	}
	return (ret);
}

int	ft_putnbr_printf(long nbr, int i_max, t_flag *flag)
{
	int	ret;
	int	pow;

	ret = 0;
	if (nbr == 0 && i_max == 0 && flag->f_prec == 0)
		return (0);
	if (nbr < 0)
	{
		ft_printf_putchar('-', flag);
		nbr *= -1;
	}
	pow = ft_count_digit(nbr - 1);
	if (i_max < pow)
		i_max = pow;
	while (i_max > 0 || pow >= 0)
	{
		if (pow + 1 < i_max--)
			ft_printf_putchar('0', flag);
		else
		{
			ft_printf_putchar(((nbr / ft_pow(10, pow--)) + '0'), flag);
			nbr -= (nbr / ft_pow(10, pow + 1)) * ft_pow(10, pow + 1);
		}
	}
	return (ret);
}

long long	ft_pow(int x, int pow)
{
	long long	ret;

	ret = 1;
	while (pow-- > 0)
		ret *= x;
	return (ret);
}