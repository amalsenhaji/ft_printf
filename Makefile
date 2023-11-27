# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 23:33:52 by amsenhaj          #+#    #+#              #
#    Updated: 2021/12/21 22:39:36 by amsenhaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_part1.c   ft_part3.c  ft_putstr.c ft_convert.c ft_part2.c   ft_printf.c \
		  ft_putchar.c ft_putnbr.c ft_putnbr2.c ft_convert2.c
OFILES = ${CFILES:.c=.o}
BCFILES = ft_convert_bonus.c ft_convert2_bonus.c ft_printf_bonus.c ft_putchar_bonus.c ft_putnbr_bonus.c ft_putnbr2_bonus.c \
		ft_putstr_bonus.c ft_part1_bonus.c ft_part2_bonus.c ft_part3_bonus.c  ft_space_bonus.c ft_plus_bonus.c \
		ft_dieze_bonus.c ft_flags_bonus.c 
BOFILES = ${BCFILES:.c=.o}
CC = gcc
CFLAGS = -Wextra -Wall -Werror
NAME = libftprintf.a

all : ${NAME}

${NAME} : ${OFILES}
	ar -cr ${NAME} ${OFILES}

clean : 
	rm -f  ${OFILES} ${BOFILES}

fclean : clean
	rm -f ${NAME}

re : fclean all

bonus : ${BOFILES}
	ar -cr ${NAME} ${BOFILES}

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c -o $@ $<
	
.PHONY : clean re fclean bonus
