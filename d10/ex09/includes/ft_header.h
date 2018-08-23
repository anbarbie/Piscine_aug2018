/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:46:12 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/21 12:26:14 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

typedef struct	s_opp
{
	char	*str;
	void	(*f)(int a, int b);
}				t_opp;

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strcmp(char *s1, char *s2);
int				check_sign(char *str);
void			op_res(int a, char *op, int b);
void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_div(int a, int b);
void			ft_mul(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);
#endif
