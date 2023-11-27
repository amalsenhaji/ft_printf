/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_part3_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:58:35 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 21:51:50 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_part3_bonus(va_list arg, const char *str, int *j)
{
	if (*str == 'x')
		ft_convert_bonus(va_arg(arg, unsigned int), j);
	else if (*str == 'X')
		ft_convert2_bonus(va_arg(arg, unsigned int), j);
	else if (*str == 'p')
	{
		ft_putstr_bonus("0x", j);
		ft_convert_bonus(va_arg(arg, unsigned long), j);
	}
	return ;
}
