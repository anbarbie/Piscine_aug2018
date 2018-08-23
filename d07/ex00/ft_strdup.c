/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:21:16 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/16 18:12:09 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;
	char	*copy;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc(len * sizeof(char));
	copy = str;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (str);
}
