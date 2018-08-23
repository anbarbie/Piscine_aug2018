# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 15:49:24 by antbarbi          #+#    #+#              #
#    Updated: 2018/08/20 20:02:39 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = main01.c
BIN = main01.o
FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) -o $(NAME) $(BIN)

clean :
	rm -f $(BIN)

fclean : clean
	rm -f $(NAME)

re : fclean all
