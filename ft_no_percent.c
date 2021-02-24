/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:19:29 by agardet           #+#    #+#             */
/*   Updated: 2021/02/09 15:38:20 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_no_percent(const char *stdin)
{
	size_t	i;

	i = 0;
	while (stdin[i] != '\0')
	{
		if (stdin[i] == '%')
			return (-1);
		i++;
	}
	return (0);
}
