/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 22:20:30 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/16 21:33:57 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char **argv)
{
	int i;
	int j;
	int len;

	j = 1;
	len = 0;
	while (argv[j] != '\0')
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			len++;
			i++;
		}
		len++;
		j++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		x;
	char	*str;

	j = 1;
	x = 0;
	str = (char *)malloc(length(argv) * sizeof(char));
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			str[x] = argv[j][i];
			x++;
			i++;
		}
		str[x] = '\n';
		x++;
		j++;
	}
	str[x - 1] = '\0';
	return (str);
}
