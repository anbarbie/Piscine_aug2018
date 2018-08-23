/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:17:14 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/13 19:00:58 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_div(int value1, int value2)
{
	int res;

	if (value2 == 0)
	{
		ft_putstr("Stop : division by zero");
	}
	else
	{
		res = value1 / value2;
		ft_putnbr(res);
	}
}
