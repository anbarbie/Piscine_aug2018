/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:51:35 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/20 20:12:41 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

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

	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("cat: ");
			ft_putstr(av[i]);
			ft_putstr(": No such file or directory\n");
			return (1);
		}
		while (read(fd, &buf, 1) != 0)
			ft_putstr(&buf);
		if (close(fd) == - 1)
		{
			ft_putstr("close() error");
			return (1);
		}
		i++;
	}
	return (0);
}
