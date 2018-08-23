/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:22:58 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/17 14:09:10 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cpt_words(char *str)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] > ' ' && str[i] < 127))
			cpt++;
		if (str[i] <= ' ' && (str[i + 1] > ' ' && str[i + 1] < 127))
			cpt++;
		i++;
	}
	return (cpt + 1);
}

void	cpt_letters(char *str, char **tab)
{
	int i;
	int letters;
	int mot;

	i = 0;
	letters = 0;
	mot = 0;
	while (str[i] != '\0')
	{
		letters = 0;
		while (str[i] != '\0' && str[i] <= ' ')
			i++;
		while (str[i] > ' ' && str[i] < 127)
		{
			i++;
			letters++;
		}
		tab[mot] = (char *)malloc(letters + 1 * sizeof(char));
		if (str[i] != '\0')
			i++;
		mot++;
	}
}

void	assign(char *str, char **tab)
{
	int i;
	int j;
	int x;

	j = 0;
	x = 0;
	i = 0;
	while (str[x] != '\0')
	{
		while (str[x] && str[x] > ' ')
		{
			tab[j][i] = str[x];
			i++;
			x++;
			if (!str[x] || str[x] <= ' ')
			{
				tab[j][i] = '\0';
				i = 0;
				j++;
			}
		}
		while (str[x] != '\0' && str[x] <= ' ')
			x++;
	}
	tab[j] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = (char **)malloc(cpt_words(str) * sizeof(char *));
	cpt_letters(str, tab);
	assign(str, tab);
	return (tab);
}
