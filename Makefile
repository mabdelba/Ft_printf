# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 23:13:00 by mabdelba          #+#    #+#              #
#    Updated: 2021/12/03 21:04:16 by mabdelba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_printf.c ft_putchar.c ft_putlhexa.c ft_putnbr_positif.c \
		ft_putnbr.c ft_putpointer.c ft_putstr.c ft_putuhexa.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror
CC = gcc


all : $(NAME)

$(NAME) : $(OBJS)
	ar -cr $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all 
	
