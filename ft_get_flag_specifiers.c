/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flag_specifiers.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:41:58 by agardet           #+#    #+#             */
/*   Updated: 2021/02/04 16:43:57 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ft_get_flag_specifiers(const char *stdin, t_flag *flag)
{
	size_t	i;

	i = 0;
	while (stdin[i] == '#' || stdin[i] == '0' || stdin[i] == ' ' ||
			stdin[i] == '+' || stdin[i] == '-')
	{
		if (stdin[i] == '#')
			flag->hashtag = 0;
	}

}
