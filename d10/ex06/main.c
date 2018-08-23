/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:41:58 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 19:23:36 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "ft_opp.h"

int		check_sign(char *str)
{
	int i;

	i = 0;
	if (str[i] == '+' || str[i] == '-' || str[i] == '/'
			|| str[i] == '*' || str[i] == '%')
		return (1);
	return (0);
}

void	op_res(int a, char *op, int b)
{
	int i;

	i = 0;
	if (op[1] != '\0')
	{
		ft_putstr("0\n");
		return ;
	}
	if (!check_sign(op))
	{
		ft_putstr("0\n");
		return ;
	}
	while (i < 5)
	{
		if (ft_strcmp(g_opptab[i].str, op) == 0)
		{
			g_opptab[i].f(a, b);
			ft_putchar('\n');
			return ;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int value1;
	int value2;

	i = 0;
	if (ac != 4)
		return (0);
	value1 = ft_atoi(av[1]);
	value2 = ft_atoi(av[3]);
	op_res(value1, av[2], value2);
	return (0);
}
