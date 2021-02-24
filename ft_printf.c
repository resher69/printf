/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:01:04 by agardet           #+#    #+#             */
/*   Updated: 2021/02/22 16:16:18 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *stdin, ...)
{
	t_flag	*flag;
	va_list args;
	size_t	i;
	int		ret;

	i = 0;
	va_start(args, stdin);
	ret = ft_treat_input(stdin);
	va_end(args);
	return (ret);
}