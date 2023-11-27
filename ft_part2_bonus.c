/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_part2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:53:35 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 20:58:29 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_part2_bonus(va_list arg, const char *str, int *j)
{
	if (*str == 'd' || *str == 'i')
		ft_putnbr_bonus(va_arg(arg, int), j);
	else if (*str == 'u')
		ft_putnbr2_bonus(va_arg(arg, unsigned int), j);
	return ;
}
