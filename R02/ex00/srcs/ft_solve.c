/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboirard <cboirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:56:13 by cboirard          #+#    #+#             */
/*   Updated: 2018/08/19 21:25:05 by cboirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_utils.h"
#include "ft_read.h"
#include "ft_solve.h"

static const t_rush		g_rushes[] =
{
	{"00", "o-o", "| |", "o-o"},
	{"01", "/*\\", "* *", "\\*/"},
	{"02", "ABA", "B B", "CBC"},
	{"03", "ABC", "B B", "ABC"},
	{"04", "ABC", "B B", "CBA"}
};

char	*ft_realloc(char *str)
{
	char *result;

	if (!(result = malloc(sizeof(char) * (ft_strlen(str) + 2))))
		return (0);
	ft_strcat(result, str);
	return (result);
}

int		ft_check_content(char **grid, t_rush rush)
{
	int x;
	int y;
	int	height;
	int	length;

	y = 1;
	height = ft_height(grid) - 1;
	length = ft_length(grid[0]);
	while (y < height)
	{
		if (grid[y][0] == rush.middle[0]
		&& grid[y][length - 1] == rush.middle[2])
		{
			x = 1;
			while (x < length - 2)
			{
				if (grid[y][x] != rush.middle[1])
					return (0);
				x++;
			}
		}
		y++;
	}
	return (1);
}

void	ft_print(t_rush *rushes, int count, int length, int height)
{
	if (count > 0)
	{
		while (rushes->id)
		{
			ft_putstr("colle-");
			ft_putstr((rushes++)->id);
			ft_putstr(" [");
			ft_putnbr(length);
			ft_putstr("] [");
			ft_putnbr(height);
			ft_putchar(']');
			if (rushes->id)
				ft_putstr(" || ");
		}
	}
	else
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		ft_nmatch(char **grid, t_rush rush)
{
	int		height;
	int		length;

	height = ft_height(grid);
	length = ft_length(grid[0]);
	if (length == 1 && height == 1 && grid[0][0] == rush.top[0])
		return (1);
	else if (length == 1
			&& grid[0][0] == rush.top[0]
			&& grid[height - 1][0] == rush.bottom[0])
		return (1);
	else if (height == 1
			&& grid[0][0] == rush.top[0] && grid[0][length - 1] == rush.top[2])
		return (1);
	else if (grid[0][0] == rush.top[0] && grid[0][length - 1] == rush.top[2]
			&& ft_check_content(grid, rush)
			&& grid[height - 1][0] == rush.bottom[0]
			&& grid[height - 1][length - 1] == rush.bottom[2])
		return (1);
	return (0);
}

void	ft_match(char **grid)
{
	int		i;
	int		y;
	int		height;
	int		length;
	t_rush	*matches;

	if (!(matches = malloc(sizeof(t_rush) * 5)))
		return ;
	i = 0;
	y = 0;
	height = ft_height(grid);
	length = ft_length(grid[0]);
	while (g_rushes[i].id)
	{
		if (ft_nmatch(grid, g_rushes[i]))
			matches[y++] = g_rushes[i];
		i++;
	}
	ft_print(matches, y, length, height);
}
