/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:15:07 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/21 22:34:41 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_flags_bonus(va_list arg, const char **str, int *j);
void	ft_part1_bonus(va_list arg, const char *str, int *j);
void	ft_part2_bonus(va_list arg, const char *str, int *j);
void	ft_part3_bonus(va_list arg, const char *str, int *j);
void	ft_putchar_bonus(char c, int *j);
void	ft_putstr_bonus(char *s, int *j);
void	ft_putnbr_bonus(int n, int *j);
void	ft_putnbr2_bonus(unsigned int n, int *j);
void	ft_convert_bonus(unsigned long n, int *j);
void	ft_convert2_bonus(unsigned int n, int *j);
void	ft_space_bonus(va_list arg, const char **str, int *j);
void	ft_plus_bonus(va_list arg, const char **str, int *j);
void	ft_dieze_bonus(va_list arg, const char **str, int *j);

#endif
