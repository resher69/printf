/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:50:46 by agardet           #+#    #+#             */
/*   Updated: 2021/04/23 17:41:02 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_print_blanks(t_flag *flag)
{
	int	i;

	i = 0;
	if (flag->minus == 0)
	{
		while (flag->width > 0)
		{
			ft_printf_putchar(' ', flag);
			flag->size++;
			i++;
		}
	}
	else if (flag->f_width == 0 || flag->f_width == 1)
	{
		while (flag->width > 0)
		{
			ft_printf_putchar(' ', flag);
			flag->size++;
			i++;
		}
	}
}

void	ft_print_zeros(t_flag *flag)
{
	int	i;

	i = 0;
	if (flag->zero == 0)
	{
		while (flag->width > 0)
		{
			ft_printf_putchar('0', flag);
			flag->size++;
			i++;
		}
	}
	else if (flag->prec == 0)
	{
		while (flag->width > 0)
		{
			ft_printf_putchar('0', flag);
			flag->size++;
			i++;
		}
	}
}

void	ft_treat_flag(t_flag *flag)
{
	int	i;

	i = 0;
	if (flag->minus == 0)
		ft_print_blanks(flag);
	else if (flag->zero == 0)
	{
		ft_print_zeros(flag);
	}
	else if (flag->prec == 0)
		ft_print_zeros(flag);
	else if (flag->width > 0)
		ft_print_blanks(flag);
}
