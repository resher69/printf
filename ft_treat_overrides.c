/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_overrides.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:15:36 by agardet           #+#    #+#             */
/*   Updated: 2021/02/04 16:40:37 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_treat_overrides(t_flag *flag)
{
	if (flag->minus == 0 && flag->zero == 0)
		flag->zero = -1;
	if (flag->plus == 0 && flag->space == 0)
		flag->space = -1;
}
