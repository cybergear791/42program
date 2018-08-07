# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nflouty <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 10:25:58 by nflouty           #+#    #+#              #
#    Updated: 2018/08/06 10:26:01 by nflouty          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = do-op
SRC = srcs/main.c srcs/util.c srcs/operation.c
HEADER = includes/

all: compile

compile:
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

clean:
	rm -f $(DEST)

re: fclean all
