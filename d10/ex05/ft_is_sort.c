/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:06:37 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 22:36:31 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int way;

	i = 0;
	way = 0;
	if (length < 2)
		return (1);
	while (way == 0 && i < length - 1)
	{
		way = (*f)(tab[i], tab[i + 1]);
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (way > 0 && (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		if (way < 0 && (*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
