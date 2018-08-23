/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 23:02:46 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 15:14:33 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	if (begin_list1 == NULL)
		return ;
	list = *begin_list1;
	if (list)
	{
		while (list->next)
		{
			list = list->next;
		}
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
