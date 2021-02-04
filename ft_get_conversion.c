/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:08:08 by agardet           #+#    #+#             */
/*   Updated: 2021/02/04 15:41:52 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ft_get_conversion(const char *stdin, t_flag *flag)
{
	size_t i;

	i = 0;
	flag->type = -1;
	if (stdin[i] == 'c' || stdin[i] == 's' || stdin[i] == 'p' ||
		stdin[i] == 'd' || stdin[i] == 'i' || stdin[i] == 'u' ||
		stdin[i] == 'x' || stdin[i] == 'X' || stdin[i] == '%')
		flag->type = stdin[i]; 
	i++;
	return (i);
}
