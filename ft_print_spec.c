/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_spec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:23:36 by agardet           #+#    #+#             */
/*   Updated: 2021/04/27 18:15:34 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_print_c(va_list	args, t_flag *flag)
{
	if (flag->left == 0)
	{
		while (flag->width-- > 1)
			ft_printf_putchar(flag->zero, flag);
		ft_printf_putchar((unsigned char)va_arg(args, int), flag);
	}
	else
	{
		if (flag->width < 0)
			flag->width *= -1;
		ft_printf_putchar((unsigned char)va_arg(args, int), flag);
		while (flag->width-- > 1)
		{
			ft_printf_putchar(' ', flag);
		}
	}
}

void	ft_print_s(char *arg, t_flag *flag, va_list args)
{
	(void)arg;
	if (flag->left == 0)
	{
		while (flag->width-- > 1)
			ft_printf_putchar(flag->zero, flag);
		ft_putstr_printf(va_arg(args, char *), flag);
	}
	else
	{
		ft_putstr_printf(va_arg(args, char *), flag);
		while (flag->width-- > 1)
			ft_printf_putchar(' ', flag);
	}
}
