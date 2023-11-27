/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_part1_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:50:42 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 20:53:12 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_part1_bonus(va_list arg, const char *str, int *j)
{
	if (*str == '%')
		ft_putchar_bonus('%', j);
	else if (*str == 'c')
		ft_putchar_bonus(va_arg(arg, int), j);
	else if (*str == 's')
		ft_putstr_bonus(va_arg(arg, char *), j);
}
