/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joschmun < joschmun@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:09:14 by joschmun          #+#    #+#             */
/*   Updated: 2024/11/11 15:09:14 by joschmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_read_map(int fd, int max_y, int max_x)
{
	char **map;
	int y;

	y = 0;
	map = malloc(sizeof(char *) * max_y);
	while (y < max_y)
	{
		map[y] = malloc(sizeof(char) * (max_x + 1));
		y++;
	}
	y = 0;
	while (map[y])
	{
		map[y] = get_next_line(fd);
		y++;
	}
	return(map);
}
