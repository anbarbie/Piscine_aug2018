/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:27:48 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/06 18:07:28 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int x;
	int y;
	int tmp;

	size--;
	y = 0;
	while (y <= size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[x] > tab[x + 1])
			{
				tmp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = tmp;
				y = 0;
			}
			x++;
		}
		y++;
	}
}
