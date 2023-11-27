/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:47:03 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 23:18:43 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_putnbr2_bonus(unsigned int n, int *j)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar_bonus('-', j);
	}
	else
		nb = n;
	if (nb > 9)
		ft_putnbr2_bonus(nb / 10, j);
	ft_putchar_bonus(nb % 10 + 48, j);
}
