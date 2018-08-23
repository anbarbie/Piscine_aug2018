/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:36:35 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 21:53:10 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int div;

	i = 0;
	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar((nb / div) % 10 + 48);
		div /= 10;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int y;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		y = 0;
		while (par[i].tab[y] != 0)
		{
			ft_putstr(par[i].tab[y]);
			ft_putchar('\n');
			y++;
		}
		i++;
	}
}
