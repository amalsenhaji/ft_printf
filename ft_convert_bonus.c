/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:49:19 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 21:50:15 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_convert_bonus(unsigned long n, int *j)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		ft_convert_bonus(n / 16, j);
		ft_convert_bonus(n % 16, j);
	}
	else
		ft_putchar_bonus(str[n], j);
}
