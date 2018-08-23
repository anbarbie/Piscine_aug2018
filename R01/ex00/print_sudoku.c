/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvyn@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:52:09 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 17:24:08 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_sudoku(char **tab)
{
	int	y;
	int x;

	x = 0;
	while (tab[x] != '\0')
	{
		y = 0;
		while (tab[x][y] != '\0')
		{
			ft_putchar(tab[x][y]);
			y++;
			if (tab[x][y] != '\0')
				ft_putchar(' ');
		}
		ft_putchar('\n');
		x++;
	}
}
