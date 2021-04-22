/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:37:19 by agardet           #+#    #+#             */
/*   Updated: 2021/04/22 16:00:28 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_do_percent(char *format, t_flag *flag, va_list args)
{
	int	i;

	i = 0;
	ft_print_no_convers(format, flag);
	ft_get_flag(format, flag);
	ft_get_width(format, flag, args);
	ft_treat_flag(flag);
	ft_get_type(format, flag);
	//ft_print_c(args, flag);
	return (0);	
}