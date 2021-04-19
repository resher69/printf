/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:01:04 by agardet           #+#    #+#             */
/*   Updated: 2021/04/19 14:19:20 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_flag	flag;
	va_list	args;
	size_t	i;
	int		ret;

	i = flag.width;
	va_start(args, format);
	ret = ft_treat_input((char *)format, &flag, args);
	va_end(args);
	return (0);
}
