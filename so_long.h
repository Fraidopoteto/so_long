/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:01:52 by joschmun          #+#    #+#             */
/*   Updated: 2024/11/11 15:30:56 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"


char	*read_join(int fd, char	*saved);
char	*savedtilnl(char *saved, char c);
char	*savedaftnl(char *saved, char c);
char	*get_next_line(int fd);
char    **ft_read_map(int fd, int max_y, int max_x);
int     ft_validate_map(char **map, int max_y, int max_x);
int     ft_check_walls(char **map, int max_y, int max_x);
void    ft_flood_fill(char **map, int y, int max_y, int x, int max_x, int *found_exit);

#endif
