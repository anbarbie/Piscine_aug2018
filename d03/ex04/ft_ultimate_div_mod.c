/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:58:23 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/06 18:11:53 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int rest;
	int c;
	int d;

	c = *a;
	d = *b;
	if (d != 0)
	{
		div = c / d;
		rest = c % d;
		*a = div;
		*b = rest;
	}
}