/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_part1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:18:49 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 18:57:42 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_part1(va_list arg, const char *str, int *j)
{
	if (*str == '%')
		ft_putchar('%', j);
	else if (*str == 'c')
		ft_putchar(va_arg(arg, int), j);
	else if (*str == 's')
		ft_putstr(va_arg(arg, char *), j);
}
