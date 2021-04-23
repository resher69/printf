/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:33:07 by agardet           #+#    #+#             */
/*   Updated: 2021/04/23 17:42:19 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_flag_init(t_flag *flag)
{
	flag->minus = 1;
	flag->zero = ' ';
	flag->width = 0;
	flag->f_width = 1;
	flag->prec = 1;
	flag->size = 0;
	flag->roam = 0;
}
