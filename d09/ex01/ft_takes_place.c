/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 18:55:18 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/09 19:50:24 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	special_case(int hour)
{
	int x;
	int y;

	x = hour % 12;
	y = x + 1;
	if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.", x, y);
	if (hour == 23)
		printf("%d.00 P.M. AND 12.00 A.M.", x);
	if (hour == 24)
		printf("12.00 A.M. AND %d.00 A.M.", y);
}

void	ft_takes_place(int hour)
{
	int x;
	int y;

	x = hour % 12;
	y = x + 1;
	if (hour >= 0 && hour <= 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 0 && hour < 11)
	{
		if (hour == 0)
			printf("12.00 A.M. AND %d.00 A.M.", y);
		else
			printf("%d.00 A.M. AND %d.00 A.M.", x, y);
	}
	if (hour >= 12 && hour < 23)
	{
		if (hour == 12)
			printf("12.00 P.M. AND. %d.00 P.M.", y);
		else
			printf("%d.00 P.M. AND. %d.00 P.M.", x, y);
	}
	special_case(hour);
	printf("\n");
}
