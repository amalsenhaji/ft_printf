/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dieze_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:10:25 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 23:35:10 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_dieze_bonus(va_list arg, const char **str, int *j)
{
	unsigned int	k;

	k = va_arg(arg, unsigned int);
	while (*(*str) == '#')
		(*str)++;
	if (*(*str) == 'x' && k == 0)
		ft_convert_bonus(k, j);
	else if (*(*str) == 'X' && k == 0)
		ft_convert2_bonus(k, j);
	else if (*(*str) == 'x')
	{
		ft_putstr_bonus("0x", j);
		ft_convert_bonus(k, j);
	}
	else if (*(*str) == 'X')
	{
		ft_putstr_bonus("0X", j);
		ft_convert2_bonus(k, j);
	}
}
