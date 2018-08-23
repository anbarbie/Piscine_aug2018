/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:19:58 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 12:18:51 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_mod(int value1, int value2)
{
	int res;

	if (value2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		res = value1 % value2;
		ft_putnbr(res);
	}
}
