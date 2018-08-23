/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbarbi <antbarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:59:28 by antbarbi          #+#    #+#             */
/*   Updated: 2018/08/19 21:59:58 by antbarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_H
# define FT_READ_H
# include <stdlib.h>
# include "ft_utils.h"
# define BUF_SIZE 4096

char	**ft_grid(char *raw_grid, int length, int height);
char	**ft_read(void);
char	*ft_line(char *line, int length, int *x);
int		ft_length(char *line);
int		ft_height(char **grid);

#endif
