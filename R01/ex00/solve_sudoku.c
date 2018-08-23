/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 19:20:59 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 21:14:27 by mlonguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	solve_sudoku(char **tab, int pos)
{
	int		x;

	if (pos >= 81)
		return (1);
	if ('1' <= tab[pos / 9][pos % 9] && tab[pos / 9][pos % 9] <= '9')
		return (solve_sudoku(tab, pos + 1));
	x = '0';
	while (++x <= '9')
	{
		if (check_nb(tab, pos / 9, pos % 9, x))
		{
			tab[pos / 9][pos % 9] = x;
			if (solve_sudoku(tab, pos + 1))
				return (1);
			tab[pos / 9][pos % 9] = '.';
		}
	}
	return (0);
}
