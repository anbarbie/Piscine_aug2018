/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 21:03:48 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 15:08:16 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int cpt;

	cpt = 0;
	if (begin_list == NULL)
		return (0);
	if (begin_list)
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			cpt++;
		}
	}
	return (cpt);
}
