/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:50:29 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 21:51:31 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_convert2_bonus(unsigned int n, int *j)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_convert2_bonus(n / 16, j);
		ft_convert2_bonus(n % 16, j);
	}
	else
		ft_putchar_bonus(str[n], j);
}
