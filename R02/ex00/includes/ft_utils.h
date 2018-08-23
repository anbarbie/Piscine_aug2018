/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddov <ddov@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:11:37 by cboirard          #+#    #+#             */
/*   Updated: 2018/08/19 22:01:30 by ddov             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H
# include <unistd.h>

char	*ft_strcat(char *dest, char *src);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_strlen(char *str);

#endif
