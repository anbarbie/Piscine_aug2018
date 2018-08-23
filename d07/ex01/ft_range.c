/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 12:49:34 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/16 18:09:17 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc((max - min) * sizeof(int));
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
