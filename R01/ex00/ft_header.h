/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlonguet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:48:58 by mlonguet          #+#    #+#             */
/*   Updated: 2018/08/11 21:00:25 by magrab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
char		**create_sudoku(char **av);
int			check_nb(char **tab, int x, int y, char nb);
int			check_sudoku(char **tab, int pos);
int			solve_sudoku(char **tab, int pos);
void		print_sudoku(char **tab);

#endif
