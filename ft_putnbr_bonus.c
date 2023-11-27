/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:45:45 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 21:46:46 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf_bonus.h"

void	ft_putnbr_bonus(int n, int *j)
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
		ft_putnbr_bonus(nb / 10, j);
	ft_putchar_bonus(nb % 10 + 48, j);
}
