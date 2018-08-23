/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 16:08:02 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 21:00:43 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			check_nb(char **tab, int x, int y, char nb)
{
	int i;
	int j;

	i = -1;
	while (++i <= 8)
		if (tab[x][i] == nb)
			return (0);
	i = -1;
	while (++i <= 8)
		if (tab[i][y] == nb)
			return (0);
	i = (x - x % 3) - 1;
	while (++i <= (x - x % 3) + 2)
	{
		j = (y - y % 3) - 1;
		while (++j <= (y - y % 3) + 2)
			if (tab[i][j] == nb)
				return (0);
	}
	return (1);
}
