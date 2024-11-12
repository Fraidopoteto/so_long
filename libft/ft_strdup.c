/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:40:03 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/20 21:29:33 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*addycpy;
	size_t	i;

	addycpy = malloc(ft_strlen((char *)s1) + 1);
	i = 0;
	if (addycpy == NULL)
		return (NULL);
	else
	{
		while (i < ((size_t)ft_strlen((char *)s1) + 1))
		{
			addycpy[i] = s1[i];
			i++;
		}
		addycpy[i] = '\0';
	}
	return (addycpy);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *str = "THE string~";
// 	char *cpy;
// 	//test ft_strdup
// 	cpy = ft_strdup(str);
// 	printf("Str: %s\n", str);
// 	printf("Addy of cpy: %p\n", (void*)cpy);
// 	printf("Cpy: %s\n", cpy);
// 	free(cpy);
// 	// //test strdup
// 	// cpy = strdup(str);
// 	// printf("Str: %s\n", str);
// 	// printf("Addy of cpy: %p\n", (void *)cpy);
// 	// printf("Cpy: %s\n", cpy);
// 	// free(cpy);

// 	return (0);
// }