/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:47:23 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 18:34:41 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *prev;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	list = *begin_list;
	prev = 0;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			if (prev)
				prev->next = list->next;
			else
				*begin_list = list->next;
		}
		prev = list;
		list = list->next;
	}
}
