/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 02:57:46 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/15 04:10:48 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr(int n, int *j)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-', j);
	}
	else
		nb = n;
	if (nb > 9)
		ft_putnbr(nb / 10, j);
	ft_putchar(nb % 10 + 48, j);
}
