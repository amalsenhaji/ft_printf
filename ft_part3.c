/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_part3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:48:20 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 18:59:25 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_part3(va_list arg, const char *str, int *j)
{
	if (*str == 'x')
		ft_convert(va_arg(arg, unsigned int), j);
	else if (*str == 'X')
		ft_convert2(va_arg(arg, unsigned int), j);
	else if (*str == 'p')
	{
		ft_putstr("0x", j);
		ft_convert(va_arg(arg, unsigned long), j);
	}
	return ;
}
