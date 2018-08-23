/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 16:23:12 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/04 20:50:32 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_result(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				ft_result(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
}
