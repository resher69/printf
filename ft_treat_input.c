/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:26:12 by agardet           #+#    #+#             */
/*   Updated: 2021/02/22 16:16:23 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_input(const char *stdin, va_list args)
{
	ssize_t	i;

	i = 0;
	if (ft_no_percent(stdin) == 0)
		i = ft_print_no_percent(stdin);
	else if (ft_percent(stdin) == 0)
		i = ft_print_percent(stdin);
	else
		return (-1);
	return (i);
}
