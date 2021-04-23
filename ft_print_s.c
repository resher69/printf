/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:48:15 by agardet           #+#    #+#             */
/*   Updated: 2021/04/23 15:58:44 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putstr(char *s, t_flag *flag)
{
	int	i;

	i = 0;
	while (s)
	{
		ft_putchar(s[i]);
		i++;
		flag->size++;
	}
}

void	ft_print_s(va_list args, t_flag *flag)
{
	if (flag->minus == 1)
	{
		while (flag->size < flag->width)
			ft_putstr((char *)va_arg(args, char *), flag);
	}
}
