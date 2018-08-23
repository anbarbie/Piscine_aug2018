/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 15:45:11 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/01 11:38:38 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;
	char z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		ft_putchar(z);
		z--;
	}
}
