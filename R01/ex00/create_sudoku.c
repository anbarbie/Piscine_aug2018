/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_sudoku.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 19:28:06 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 21:12:00 by mlonguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char		**create_sudoku(char **av)
{
	char		**tab;
	int			x;
	int			y;

	x = -1;
	tab = malloc(9 * sizeof(char *));
	while (++x < 9)
		tab[x] = malloc(10 * sizeof(char));
	x = 0;
	while (++x <= 9)
	{
		y = -1;
		while (av[x][++y])
		{
			if (y > 9 || !(av[x][y] == '.' ||
						('1' <= av[x][y] && av[x][y] <= '9')))
				return (NULL);
			tab[x - 1][y] = av[x][y];
		}
		if (y != 9)
			return (NULL);
		tab[x - 1][y] = '\0';
	}
	return (tab);
}
