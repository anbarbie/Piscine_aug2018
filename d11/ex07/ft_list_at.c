/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:12:10 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/22 18:35:10 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

unsigned int		ft_list_size(t_list *begin_list)
{
	unsigned int cpt;

	cpt = 0;
	while (begin_list->next != 0)
	{
		begin_list = begin_list->next;
		cpt++;
	}
	return (cpt + 1);
}

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	i = 0;
	list = begin_list;
	if (nbr > ft_list_size(begin_list))
	{
		list = NULL;
		return (list);
	}
	while (i < nbr)
	{
		list = list->next;
		i++;
	}
	return (list);
}
