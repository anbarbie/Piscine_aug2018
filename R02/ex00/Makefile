# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboirard <cboirard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/18 10:58:36 by cboirard          #+#    #+#              #
#    Updated: 2018/08/19 21:15:16 by cboirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CSOURCE=./main.c \
		./srcs/ft_utils.c \
		./srcs/ft_read.c \
		./srcs/ft_solve.c
OSOURCE=./main.o \
		./ft_utils.o \
		./ft_read.o \
		./ft_solve.o

NAME=colle-2

COMPILE			=cc
COMPILE_FLAGS	=-Wall -Wextra -Werror -I ./includes

all: $(NAME)

$(NAME): create

create:
	@ $(COMPILE) -o $(NAME) $(COMPILE_FLAGS) $(CSOURCE)

clean:
	@ /bin/rm -rf $(OSOURCE)

fclean: clean
	@ /bin/rm -rf $(NAME)

re: fclean all

.PHONY = all $(NAME) create clean fclean re
