/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:02:11 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/19 15:21:44 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		j;

	va_start(arg, str);
	j = 0;
	while (*str)
	{	
		if (*str == '%')
		{
			str ++;
			if (*str == 'c' || *str == 's' || *str == '%')
				ft_part1(arg, str, &j);
			if (*str == 'i' || *str == 'd' || *str == 'u')
				ft_part2(arg, str, &j);
			if (*str == 'x' || *str == 'p' || *str == 'X')
				ft_part3(arg, str, &j);
		}
		else
			ft_putchar (*str, &j);
		str++;
	}
	va_end(arg);
	return (j);
}
