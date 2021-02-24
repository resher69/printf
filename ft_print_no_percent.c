/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_no_percent.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:23:23 by agardet           #+#    #+#             */
/*   Updated: 2021/02/22 15:10:24 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_no_percent(const char *stdin)
{
	if (!stdin)
		return (-1);
	write(1, stdin, ft_strlen(stdin));
	return (0);
}
