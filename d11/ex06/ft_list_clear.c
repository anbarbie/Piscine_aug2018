/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 15:36:14 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 17:01:53 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list;
	tmp = 0;
	while (list)
	{
		if (list->next != 0)
		{
			tmp = list->next;
			free(list);
			list = tmp;
		}
		else
		{
			tmp = NULL;
			free(list);
			list = tmp;
		}
	}
	*begin_list = tmp;
}
