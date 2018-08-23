/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboirard <cboirard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:40:53 by cboirard          #+#    #+#             */
/*   Updated: 2018/08/19 21:16:02 by cboirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLVE_H
# define FT_SOLVE_H

typedef struct	s_rush
{
	char *id;
	char *top;
	char *middle;
	char *bottom;
}				t_rush;

char			*ft_realloc(char *str);
void			ft_print(t_rush *rushes, int count, int length, int height);
void			ft_match(char **grid);
int				ft_nmatch(char **grid, t_rush rush);
int				ft_check_content(char **grid, t_rush rush);

#endif
