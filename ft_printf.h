/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:32:32 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/12/19 15:21:58 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *j);
void	ft_putstr(char *s, int *j);
void	ft_putnbr(int n, int *j);
void	ft_putnbr2(unsigned int n, int *j);
void	ft_convert(unsigned long n, int *j);
void	ft_convert2(unsigned int n, int *j);
void	ft_part1(va_list arg, const char *str, int *j);
void	ft_part2(va_list arg, const char *str, int *j);
void	ft_part3(va_list arg, const char *str, int *j);

#endif
