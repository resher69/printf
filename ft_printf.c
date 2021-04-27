/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:01:04 by agardet           #+#    #+#             */
/*   Updated: 2021/04/27 18:09:06 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_flag	flag;
	va_list	args;
	int	ret;

	va_start(args, (char *)format);
	ft_flag_init(&flag);
	ret = ft_printf_core((char *)format, &flag, args);
	//printf("size vaut %d", flag.size);
	va_end(args);
	return (flag.size);
}
