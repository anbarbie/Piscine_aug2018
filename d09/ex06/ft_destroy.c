/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:14:19 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/10 12:22:25 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (factory[j])
	{
		while (factory[j][i] != '\0')
		{
			free(factory[j][i]);
			i++;
		}
		free(factory[j]);
		j++;
		i = 0;
	}
	free(factory);
}
