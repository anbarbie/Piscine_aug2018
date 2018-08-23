/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:50:48 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 12:20:16 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putnbr(int nb)
{
	int div;

	div = 1;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	while (nb / div >= 10)
		div = div * 10;
	while (div > 0)
	{
		ft_putchar((nb / div) % 10 + 48);
		div = div / 10;
	}
}
