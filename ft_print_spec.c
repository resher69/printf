/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:23:36 by agardet           #+#    #+#             */
/*   Updated: 2021/05/03 17:53:45 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_print_c(char c, t_flag *flag)
{
	if (flag->left == 0)
	{
		while (flag->width-- > 1 || flag->prec-- > 1)
			ft_printf_putchar(flag->zero, flag);
		ft_printf_putchar((unsigned char)c, flag);
	}
	else
	{
		ft_printf_putchar((unsigned char)c, flag);
		while (flag->width-- > 1 || flag->prec-- > 1)
			ft_printf_putchar(' ', flag);
	}
}

void	ft_print_s(char *arg, t_flag *flag)
{
	if (!arg)
		arg = "(null)";
	if (flag->left == 0)
	{
		while ((flag->width > (int)ft_strlen(arg) || (flag->f_prec == 0 && flag->width > flag->prec)) && flag->width--)
			ft_printf_putchar(flag->zero, flag);
		ft_putstr_printf(arg, flag);
	}
	else
	{
		ft_putstr_printf(arg, flag);
		while ((flag->width > (int)ft_strlen(arg) || (flag->f_prec == 0 && flag->width > flag->prec)) && flag->width--)
			ft_printf_putchar(flag->zero, flag);
	}
}

void	ft_print_d(long nbr, t_flag *flag)
{
	int	field;

	field = flag->width - ft_print_d_u_add_on(nbr, ft_count_digit(nbr), flag);
	if (flag->zero == '0' && nbr < 0)
	{
		ft_printf_putchar('-', flag);
		nbr *= -1;
	}
	if (flag->left == 0)
	{
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
		ft_putnbr_printf(nbr, flag->prec, flag);
	}
	else
	{
		ft_putnbr_printf(nbr, flag->prec, flag);
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
	}
}

void	ft_print_u(unsigned long nbr, t_flag *flag)
{
	int	field;

	field = flag->width \
		- ft_print_d_u_add_on((unsigned long)nbr, ft_count_digit(nbr), flag);
	if (flag->zero == '0' && nbr < 0)
	{
		ft_printf_putchar('-', flag);
		nbr *= -1;
	}
	if (flag->left == 0)
	{
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
		ft_putnbr_printf(nbr, flag->prec, flag);
	}
	else
	{
		ft_putnbr_printf(nbr, flag->prec, flag);
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
	}
}
