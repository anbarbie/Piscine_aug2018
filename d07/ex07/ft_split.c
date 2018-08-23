/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:24:33 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/17 13:39:30 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		chck_char(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		cpt_words(char *str, char *charset)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && !(chck_char(str[i], charset)))
		{
			cpt++;
			while (str[i] != '\0' && !(chck_char(str[i], charset)))
			{
				i++;
			}
		}
		if (str[i] != '\0')
			i++;
	}
	return (cpt);
}

void	cpt_letters(char *str, char *charset, char **tab)
{
	int	i;
	int cpt;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		cpt = 0;
		while (str[i] != '\0' && (chck_char(str[i], charset)))
			i++;
		while (str[i] != '\0' && !(chck_char(str[i], charset)))
		{
			cpt++;
			i++;
		}
		tab[j] = (char *)malloc((1 + cpt) * sizeof(char));
		if (str[i] != '\0')
			i++;
		j++;
	}
}

void	assign(char *str, char *charset, char **tab)
{
	int	i;
	int j;
	int x;

	j = 0;
	x = 0;
	i = 0;
	while (str[x] != '\0')
	{
		while (str[x] && !chck_char(str[x], charset))
		{
			tab[j][i] = str[x];
			i++;
			x++;
			if (!str[x] || chck_char(str[x], charset))
			{
				tab[j][i] = '\0';
				i = 0;
				j++;
			}
		}
		while (str[x] && chck_char(str[x], charset))
			x++;
	}
	tab[j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char **)malloc((cpt_words(str, charset) + 1) * sizeof(char *));
	cpt_letters(str, charset, tab);
	assign(str, charset, tab);
	return (tab);
}
