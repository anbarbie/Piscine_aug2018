/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:46:43 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/20 17:56:13 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#define BUFF 4096

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int		main(int ac, char **av)
{
	int fd;
	char buf[BUFF];

	if (ac > 2)
	{
		write(1, "Too many arguments.", 19);
		write(1, "\n", 1);
		return (0);
	}
	if (ac < 2)
	{	
		write(1, "File name missing.", 18);
		write(1, "\n", 1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	read(fd, buf, BUFF);
	ft_putstr(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}
