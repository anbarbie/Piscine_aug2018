/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 12:55:12 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/02 18:58:58 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		cpt;
	char	tmp;

	i = 0;
	cpt = ft_strlen(str);
	while (i < cpt)
	{
		tmp = str[i];
		str[i] = str[cpt];
		str[cpt] = tmp;
		i++;
		cpt--;
	}
	return (str);
}
