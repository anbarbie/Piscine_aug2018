/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:28:40 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/23 18:09:49 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *list;

	tmp = *begin_list;
	list = ft_create_elem(data);
	if (tmp)
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = list;
	}
	else
		*begin_list = list;
}
