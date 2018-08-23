/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 21:32:23 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/06 12:43:43 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_comb(int a, int b, int c, int d)
{
	while (c <= 9)
	{
		while (d <= 9)
		{
			ft_putchar(a + 48);
			ft_putchar(b + 48);
			ft_putchar(' ');
			ft_putchar(c + 48);
			ft_putchar(d + 48);
			if (a != 9 || b != 8 || c != 9 || d != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
		d = 0;
	}
	b++;
	c = a;
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	while (a <= 9)
	{
		while (b <= 9)
		{
			print_comb(a, b, c, d);
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 0;
		c = a;
		d = b + 1;
	}
}
