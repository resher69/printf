/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:08:31 by agardet           #+#    #+#             */
/*   Updated: 2021/02/22 15:08:50 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percent(const char *stdin)
{
	size_t	i;

	i = 0;
	while (stdin[i] != '\0')
	{
		if (stdin[i] != '%')
			return (-1);
		i++;
	}
	return (0);
}
