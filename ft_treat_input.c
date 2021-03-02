/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:26:12 by agardet           #+#    #+#             */
/*   Updated: 2021/03/02 11:07:35 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_input(const char *format, va_list args)
{
	ssize_t	i;

	i = 0;
	if (ft_no_percent(format) == 0)
		i = ft_print_no_percent(format);
	else if (ft_percent(format) == 0)
		i = ft_print_percent(format);
	else
		return (-1);
	return (i);
}
