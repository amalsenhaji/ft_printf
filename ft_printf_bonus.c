/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:56:52 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/24 20:52:26 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		j;

	j = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == ' ' || *str == '+' || *str == '#')
				ft_flags_bonus(arg, &str, &j);
			else if (*str == '%' || *str == 'c' || *str == 's')
				ft_part1_bonus(arg, str, &j);
			else if (*str == 'd' || *str == 'i' || *str == 'u')
				ft_part2_bonus(arg, str, &j);
			else if (*str == 'x' || *str == 'p' || *str == 'X')
				ft_part3_bonus(arg, str, &j);
		}
		else
			ft_putchar_bonus(*str, &j);
		str++;
	}
	va_end(arg);
	return (j);
}
