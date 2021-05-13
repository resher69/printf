/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:23:36 by agardet           #+#    #+#             */
/*   Updated: 2021/05/13 18:17:07 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_print_c(char c, t_flag *flag)
{
	if (flag->left == 0)
	{
		while (flag->width-- > 1)
			ft_printf_putchar(flag->zero, flag);
		ft_printf_putchar((unsigned char)c, flag);
	}
	else
	{
		ft_printf_putchar((unsigned char)c, flag);
		while (flag->width-- > 1)
			ft_printf_putchar(flag->zero, flag);
	}
}

void	ft_print_s(char *arg, t_flag *flag)
{
	if (!arg)
		arg = "(null)";
	if (flag->left == 0)
	{
		while ((flag->width > (int)ft_strlen(arg)
				|| (flag->f_prec == 0 && flag->width > flag->prec))
			&& flag->width--)
			ft_printf_putchar(flag->zero, flag);
		ft_putstr_printf(arg, flag);
	}
	else
	{
		ft_putstr_printf(arg, flag);
		while ((flag->width > (int)ft_strlen(arg)
				|| (flag->f_prec == 0 && flag->width > flag->prec))
			&& flag->width--)
			ft_printf_putchar(flag->zero, flag);
	}
}

void	ft_print_d(long nbr, t_flag *flag)
{
	int	field;

	field = 0;
	field = flag->width
		- ft_print_d_u_x_add_on(nbr, ft_count_digit(nbr, flag), flag);
	if (flag->zero == '0' && nbr < 0)
	{
		ft_printf_putchar('-', flag);
		nbr *= -1;
	}
	if (flag->left == 0)
	{
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
		ft_putnbr_printf(nbr, flag->prec, flag, "0123456789");
	}
	else
	{
		ft_putnbr_printf(nbr, flag->prec, flag, "0123456789");
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
	}
}

void	ft_print_x(long nbr, t_flag *flag)
{
	int		field;
	char	*base;

	flag->hexa = 0;
	base = "0123456789abcdef";
	if (flag->type == 'X')
		base = "0123456789ABCDEF";
	field = flag->width
		- ft_print_d_u_x_add_on(nbr, ft_count_digit(nbr, flag), flag);
	if (flag->zero == '0' && nbr < 0)
	{
		ft_printf_putchar('-', flag);
		nbr *= -1;
	}
	if (flag->left == 0)
	{
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
		ft_putnbr_printf(nbr, flag->prec, flag, base);
	}
	else
	{
		ft_putnbr_printf(nbr, flag->prec, flag, base);
		while (field-- > 0)
			ft_printf_putchar(flag->zero, flag);
	}
}

void	ft_print_p(size_t nbr, t_flag *flag)
{
	flag->hexa = 0;
	if (flag->left == 0)
	{
		while ((flag->width > ft_count_digit_p(nbr, flag) + 2
				|| (flag->f_prec == 0 && flag->width -2 > flag->prec))
			&& flag->width--)
			ft_printf_putchar(flag->zero, flag);
		ft_putnbr_p_printf((unsigned long long int)nbr, flag->prec, flag,
			"0123456789abcdef");
	}
	else
	{
		ft_putnbr_p_printf((unsigned long long int)nbr, flag->prec, flag,
			"0123456789abcdef");
		while ((flag->width > ft_count_digit_p(nbr, flag) + 2
				|| (flag->f_prec == 0 && flag->width -2 > flag->prec))
			&& flag->width--)
			ft_printf_putchar(flag->zero, flag);
	}
}
