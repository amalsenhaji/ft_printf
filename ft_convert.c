/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:57:25 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/19 15:18:59 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_convert(unsigned long n, int *j)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		ft_convert(n / 16, j);
		ft_convert(n % 16, j);
	}
	else
		ft_putchar(str[n], j);
}
