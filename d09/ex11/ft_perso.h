/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:47:16 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/10 13:06:55 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD "SAVE_THE_WORLD"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
