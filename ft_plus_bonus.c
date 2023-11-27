/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:02:12 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 23:33:57 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_plus_bonus(va_list arg, const char **str, int *j)
{
	int	k;

	k = va_arg(arg, int);
	while (*(*str) == '+')
		(*str)++;
	if ((*(*str) == 'd' || *(*str) == 'i') && k >= 0)
	{
		ft_putchar_bonus('+', j);
		ft_putnbr_bonus(k, j);
	}
	else
		ft_putnbr_bonus(k, j);
}
