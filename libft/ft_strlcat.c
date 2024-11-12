/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:15:14 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/05 06:01:36 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		dstlen = dstsize;
	if (dstlen == dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	const char source[] = "a! Buenos dias amigos";
// 	char desti[] = "Hol";

// 	printf("Desti: %s\n", desti);
// 	printf("Source: %s\n", source);

// 	size_t result = ft_strlcat(desti, source, sizeof(desti));
// 	size_t result = ft_strlcat(desti, source, 10);
// 	printf("ft_strlcat: %zu\n", result);
// 	printf("Resulting desti : %s\n", desti);

// 	return (0); 
// }
