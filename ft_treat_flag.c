/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:50:46 by agardet           #+#    #+#             */
/*   Updated: 2021/03/10 15:00:54 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_flag(char *format, t_flag *flag)
{
	long ret;
	if (flag->width == 0)
		flag->width = ft_get_width(format, flag);
	
	
}