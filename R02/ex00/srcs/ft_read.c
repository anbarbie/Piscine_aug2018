/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:00:23 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 21:37:18 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_read.h"
#include "ft_solve.h"

int		ft_length(char *line)
{
	int x;

	x = 0;
	while (line[x])
		x++;
	return (x);
}

int		ft_height(char **grid)
{
	int y;
	int height;

	y = 0;
	height = 0;
	while (grid[y])
	{
		if (grid[y][0])
			height++;
		y++;
	}
	return (y);
}

char	*ft_line(char *line, int length, int *x)
{
	char	*str;
	int		y;

	if (!(str = malloc(sizeof(char) * (length + 1))))
		return (0);
	y = 0;
	while (y < length)
	{
		if (line[*x] == '\n')
		{
			*x += 1;
			continue ;
		}
		else
			str[y] = line[*x];
		*x += 1;
		y++;
	}
	str[y] = '\0';
	return (str);
}

char	**ft_grid(char *raw_grid, int length, int height)
{
	char	**grid;
	int		i;
	int		x;

	if (!(grid = malloc(sizeof(char *) * (height + 1))))
		return (0);
	i = 0;
	x = 0;
	while (i < height)
	{
		grid[i] = ft_line(raw_grid, length, &x);
		i++;
	}
	grid[i] = 0;
	return (grid);
}

char	**ft_read(void)
{
	char	*str;
	char	c;
	int		i;
	int		length;
	int		height;

	i = 0;
	length = 0;
	height = 0;
	if (!(str = malloc(sizeof(char) * 2)))
		return (0);
	while (read(0, &c, 1) > 0)
	{
		if (c == '\n')
			height++;
		else
			length++;
		str[i] = c;
		str = ft_realloc(str);
		i++;
	}
	return (ft_grid(str, length == 0 ? 0 : length / height, height));
}
