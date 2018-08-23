/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:17:43 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/10 15:03:12 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int cpt;

	i = -1;
	while (i++ < length - 1)
	{
		cpt = 1;
		j = i;
		while (j++ < length)
			if (tab[i] == tab[j])
				cpt++;
		j = i;
		while (j-- >= 0)
			if (tab[i] == tab[j])
				cpt++;
		if (cpt % 2 != 0)
			return (tab[i]);
	}
	return (0);
}
