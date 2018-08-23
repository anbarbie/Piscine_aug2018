/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 20:18:22 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 21:37:15 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int ac, char **av)
{
	int fd;
	char buf;
	int i;
	char *str;
	int x;
	int line;


	x = 0;
	i = 1;
	str = malloc(sizeof(char) * 2);
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("tail: ");
			ft_putstr(av[i]);
			ft_putstr(": No such file or directory\n");
			return (1);
		}
		while (read(fd, &buf, 1) != 0)
		{
			if (buf == '\n')
				line++;
			str[x] = buf;
			str = realloc(str, x + 1);
			x++;
		}
		ft_putstr(str);
		if (close(fd) == -1)
			return (1);
		i++;
	}
	return (0);	
}
