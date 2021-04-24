/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:48:15 by agardet           #+#    #+#             */
/*   Updated: 2021/04/24 17:10:15 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

// void	ft_print_c(va_list	args, t_flag *flag)
// {
// 	if (flag->minus == '0')
// 	{
// 		ft_printf_putchar((unsigned char)va_arg(args, int), flag);
// 		while (flag->size < flag->width)
// 			ft_printf_putchar(' ', flag);
// 	}
// 	else
// 	{
// 		while (flag->size < flag->width)
// 			ft_printf_putchar(flag->zero, flag);
// 		ft_printf_putchar((unsigned char)va_arg(args, int), flag);
// 	}
// }

void	ft_putstr(char *s, t_flag *flag)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
		flag->size++;
	}
}

void	ft_print_s(char *arg, t_flag *flag, va_list args)
{
	if (flag->minus == 0)
	{
		ft_putstr((char *)va_arg(args, char *), flag);
		while (flag->size + 1 < flag->width)
			ft_printf_putchar(' ', flag);
	}
	else if (flag->prec == 0)
	{
		if (flag->width > (int)ft_strlen(arg))
		{
			ft_putstr(arg, flag);
		}
		else
		{
			while (flag->size < flag->width)
			{
				write(1, &arg[flag->size], 1);
				flag->size++;
			}
		}
	}
	else
	{
		while ((flag->size + (int)ft_strlen(arg)) < flag->width)
			ft_printf_putchar(' ', flag);
		ft_putstr(arg, flag);
	}
}
