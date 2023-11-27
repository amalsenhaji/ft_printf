/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:52:39 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/24 20:52:16 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_space_bonus(va_list arg, const char **str, int *j)
{
	int	k;

	while (*(*str) == ' ')
		(*str)++;
	if (*(*str) == 'd' || *(*str) == 'i')
	{
		k = va_arg(arg, int);
		if (k >= 0)
			ft_putchar_bonus(' ', j);
		ft_putnbr_bonus(k, j);
	}
	else if (*(*str) == 's')
		ft_putstr_bonus(va_arg(arg, char *), j);
}
