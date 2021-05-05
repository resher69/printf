/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:27:24 by agardet           #+#    #+#             */
/*   Updated: 2021/05/05 16:07:41 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putnbr_base(long nbr, int i_max, char *base, t_flag *flag)
{
	int	pow;
	int	len;

	if (nbr == 0 && i_max == 0 && flag->f_prec == 0)
		return ;
	pow = ft_count_digit(nbr, flag) - 1;
	len = ft_strlen(base);
	if (i_max < pow)
		i_max = pow;
		if (pow + 1 < i_max--)
			ft_printf_putchar('0', flag);
		else
			ft_recursive(nbr, base, len, flag);
}

// void    ft_putchar(char c)
// {
//         write(1, &c, 1);
// }

// int             baselen(char *str)
// {
//         unsigned int len;
//         unsigned int i;

//         len = 0;
//         while (str[len] != '\0')
//         {
//                 i = len + 1;
//                 if (str[len] == '+' || str[len] == '-')
//                         return (0);
//                 while (str[i] != '\0')
//                 {
//                         if (str[len] == str[i])
//                                 return (0);
//                         i++;
//                 }
//                 len++;
//         }
//         return (len < 2 ? 0 : len);
// }

void    ft_recursive(long i, char *base, int len, t_flag *flag)
{
        if (i >= len)
        {
                ft_recursive(i / len, base, len, flag);
                ft_recursive(i % len, base, len, flag);
        }
        else
                ft_printf_putchar(base[i], flag);
}

// void    ft_putnbr_base(int nbr, char *base)
// {
//         long    i;
//         int             len;

//         i = nbr;
//         len = baselen(base);
//         if (len == 0)
//                 return ;
//         i = nbr;
//         if (i < 0)
//         {
//                 ft_putchar('-');
//                 i = i * (-1);
//         }
//         ft_recursive(i, base, len);
// }