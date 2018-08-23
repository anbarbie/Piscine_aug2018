/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:23:43 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/10 16:55:51 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bite(int value)
{
	int cpt;

	cpt = 0;
	if (value == -2147483648)
	{
		value = 2147483647;
		cpt++;
	}
	if (value < 0)
		value = -1 * value;
	while (value > 0)
	{
		if (value % 2 == 1)
			cpt++;
		value /= 2;
	}
	return (cpt);
}
