# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nflouty <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 10:01:03 by nflouty           #+#    #+#              #
#    Updated: 2018/08/06 10:02:14 by nflouty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = libft.a
SRC_LIBS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c
H_LIBS = includes

all: make_lib

make_lib:
	gcc -Wall -Wextra -Werror -I$(H_LIBS) -c $(SRC_LIBS)
	ar rc $(DEST) ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
	ranlib $(DEST)

clean:
	rm -f ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

fclean:	clean
	rm -f $(DEST)

re: fclean all
