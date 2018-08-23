# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 14:59:36 by antbarbi          #+#    #+#              #
#    Updated: 2018/08/12 16:11:32 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c  ./srcs/ft_putstr.c  ./srcs/ft_strcmp.c  ./srcs/ft_strlen.c  ./srcs/ft_swap.c

BIN = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAG = -Wall -Wextra -Werror

COMP = -c -I ./includes

all: $(NAME)

$(NAME) :
	gcc $(FLAG) $(COMP) $(SRC)
	ar rc $(NAME) $(BIN)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re : fclean all
