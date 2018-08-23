# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 19:15:31 by antbarbi          #+#    #+#              #
#    Updated: 2018/08/14 12:21:51 by antbarbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op
OPE = operations/ft_add.c operations/ft_div.c operations/ft_mod.c operations/ft_mul.c operations/ft_sub.c operations/ft_usage.c
FLAG = -Wall -Wextra -Werror
SRC = rsrc/ft_atoi.c rsrc/ft_putchar.c rsrc/ft_putstr.c rsrc/ft_putnbr.c rsrc/ft_strcmp.c
MAIN = main.c

all : $(NAME)

$(NAME) :
	gcc -I includes/ $(FLAG) -o $(NAME) $(MAIN) $(OPE) $(SRC)

clean :
	rm -f $(NAME)

re : clean all
