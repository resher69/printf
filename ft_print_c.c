/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:16:29 by agardet           #+#    #+#             */
/*   Updated: 2021/04/23 17:25:50 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_print_c(va_list	args, t_flag *flag)
{
	ft_printf_putchar((unsigned char)va_arg(args, int), flag);
}

void	ft_printf_putchar(char c, t_flag *flag)
{
	write(1, &c, 1);
	flag->size++;
}
