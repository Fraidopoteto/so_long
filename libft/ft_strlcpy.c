/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:15:11 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/05 05:33:36 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen((char *)src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char source[6] = "hallo";
// 	char desti[4];

// 	printf("Source: %s\n", source);

// 	// printf("ft_strlcpy: %zu\n", ft_strlcpy(desti, source, 4));
// 	printf("strlcpy: %zu\n",strlcpy(desti, source, 10));

// 	printf("Copied to desti: %s\n", desti);

// 	return (0); 
// }
