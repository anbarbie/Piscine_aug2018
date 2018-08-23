/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:44:15 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/15 14:45:46 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 0)
		return (0);
	while (av[i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
