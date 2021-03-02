/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:10:13 by agardet           #+#    #+#             */
/*   Updated: 2021/02/26 13:47:50 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include "libft.h"

typedef struct		s_flag
{
	int		minus;
	char	zero;
	int		width;
	int		prec;
	char	type;
	size_t	total_len;
}					t_flag;

int				ft_treat_input(const char *format);
int					ft_no_percent(const char *format);
int				ft_print_no_percent(const char *format);
int					ft_printf(const char *format, ...);

#endif