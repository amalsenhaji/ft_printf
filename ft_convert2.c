/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 04:01:59 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/19 15:19:12 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_convert2(unsigned int n, int *j)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_convert2(n / 16, j);
		ft_convert2(n % 16, j);
	}
	else
		ft_putchar(str[n], j);
}
