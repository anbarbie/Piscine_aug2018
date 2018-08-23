/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboirard <cboirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:22:13 by cboirard          #+#    #+#             */
/*   Updated: 2018/08/19 15:59:15 by cboirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_utils.h"
#include "ft_read.h"
#include "ft_solve.h"

int		main(void)
{
	char **grid;

	grid = ft_read();
	if (grid[0] != 0)
		ft_match(grid);
	else
	{
		ft_putstr("aucune\n");
	}
	return (0);
}
