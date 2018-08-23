/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 21:11:21 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 21:11:36 by mlonguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		check_sudoku(char **tab, int pos)
{
	char x;

	if (pos >= 81)
		return (1);
	if ('.' == tab[pos / 9][pos % 9])
		return (check_sudoku(tab, pos + 1));
	x = tab[pos / 9][pos % 9];
	tab[pos / 9][pos % 9] = '.';
	if (check_nb(tab, pos / 9, pos % 9, x))
	{
		tab[pos / 9][pos % 9] = x;
		return (check_sudoku(tab, pos + 1));
	}
	return (0);
}
