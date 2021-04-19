/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:26:12 by agardet           #+#    #+#             */
/*   Updated: 2021/04/19 14:19:21 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_treat_input(char *format, t_flag *flag, va_list args)
{
	ssize_t	i;

	i = 0;
	if (ft_check_percent(format, flag) == ERROR)
	;	// i = ft_print_no_percent(format, flag);
	else if (ft_check_percent(format, flag) == SUCCESS)
		i = ft_do_percent(format, flag, args);
	else
		return (-1);
	return (i);
}
