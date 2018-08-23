/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:11:50 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 19:27:29 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src, int byt)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[byt] = src[i];
		byt++;
		i++;
	}
	dest[byt] = '\0';
	return (dest);
}

char *ft_realloc(char *str, int x)
{
	char *result;

	if (!(result = malloc(sizeof(char) * (ft_strlen(str) + 2))))
		return (0);
	ft_strcat(result, str, x);
	return (result);
}
