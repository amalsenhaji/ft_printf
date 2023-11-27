/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_part2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:41:41 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 18:58:20 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_part2(va_list arg, const char *str, int *j)
{
	if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(arg, int), j);
	else if (*str == 'u')
		ft_putnbr2(va_arg(arg, unsigned int), j);
	return ;
}
