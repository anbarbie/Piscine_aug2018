# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 13:43:34 by antbarbi          #+#    #+#              #
#    Updated: 2018/08/20 15:45:30 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Werror -Wextra
SRC = main.c
BIN = main.o

all :
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(BIN)

clean :
	rm -f $(BIN)

fclean : clean
	rm -f $(NAME)

re : fclean all
