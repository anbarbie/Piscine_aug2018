/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:35:41 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 21:13:40 by mlonguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			main(int ac, char **av)
{
	char **sudoku;

	if (ac != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
	{
		sudoku = create_sudoku(av);
		if (sudoku == NULL)
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	if (!(check_sudoku(sudoku, 0)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	solve_sudoku(sudoku, 0);
	print_sudoku(sudoku);
	return (0);
}
