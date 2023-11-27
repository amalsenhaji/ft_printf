/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:50:40 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 22:58:29 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_flags_bonus(va_list arg, const char **str, int *j)
{
	if (*(*str) == ' ')
		ft_space_bonus(arg, str, j);
	else if (*(*str) == '+')
		ft_plus_bonus(arg, str, j);
	else if (*(*str) == '#')
		ft_dieze_bonus(arg, str, j);
}
