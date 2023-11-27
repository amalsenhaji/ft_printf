/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:35:52 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 23:51:58 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_putstr_bonus(char *s, int *j)
{
	int	i;

	i = 0;
	if (!s)
	{
		*j += write(1, "(null)", 6);
		return ;
	}
	while (s[i] != '\0' )
	{
		ft_putchar_bonus(s[i], j);
		i++;
	}
}
