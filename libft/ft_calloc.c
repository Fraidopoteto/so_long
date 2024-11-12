/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:39:56 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/20 21:29:04 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*addy;
	size_t			i;

	addy = malloc(count * size);
	i = 0;
	if (addy == NULL)
		return (NULL);
	else
	{
		while (i < (count * size))
		{
			addy[i] = 0;
			i++;
		}
	}
	return (addy);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*array;
// 	//test ft_calloc
// 	array = (ft_calloc(5, sizeof(int)));
// 	for (int in = 0; in < 5; in++)
// 		printf("array[%d] = %d\n", in, array[in]);
// 	printf("ft_calloc: %p\n", array);
// 	free(array);

// 	// // test calloc
// 	// array = (calloc(5, sizeof(int)));
// 	// for (int in = 0; in < 5; in++)
// 	// 	printf("array[%d] = %d\n", in, array[in]);
// 	// printf("calloc: %p\n", array);
// 	// free(array);
// 	return (0);
// }