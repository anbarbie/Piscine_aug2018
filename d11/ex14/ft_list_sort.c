/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 23:07:52 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 15:25:42 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	swap(t_list *cur, t_list *prev)
{
	void	*tmp;

	tmp = cur->data;
	cur->data = prev->data;
	prev->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	int		swp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	list = *begin_list;
	swp = 1;
	if (list && list->next)
	{
		while (swp != 0)
		{
			swp = 0;
			list = *begin_list;
			while (list->next != 0)
			{
				if ((*cmp)(list->data, list->next->data) > 0)
				{
					swap(list, list->next);
					swp = 1;
				}
				list = list->next;
			}
		}
	}
}
