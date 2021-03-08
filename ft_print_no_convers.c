/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_no_convers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:29:15 by agardet           #+#    #+#             */
/*   Updated: 2021/03/08 15:51:31 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_no_convers(char *format, t_flag *flag)
{
	int	i;

	i = 0;
	while (format[i] && format[i] != '%')
	{
		ft_putchar(format[i]);
		i++;
	}
}
