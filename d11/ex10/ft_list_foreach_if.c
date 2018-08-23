/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 14:34:11 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 15:41:56 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list *list;

	list = begin_list;
	if (list)
	{
		while (list != 0)
		{
			if ((*cmp)(list->data, data_ref) == 0)
			{
				(*f)(list->data);
			}
			list = list->next;
		}
	}
}
