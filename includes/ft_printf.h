/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:10:13 by agardet           #+#    #+#             */
/*   Updated: 2021/02/04 16:42:29 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct		s_flag
{
	int		minus;
	int		plus;
	int		space;
	char	zero;
	int		hashtag;
	int		width;
	int		prec;
	char	add_flags;
	char	type;
	size_t	total_len;
}					t_flag;

void 				ft_treat_input(const char *stdin, t_flag *flag);
int					ft_no_percent(const char *stdin);
void				ft_print_no_percent(const char *stdin);
#endif