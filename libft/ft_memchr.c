/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:40:38 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/17 20:11:10 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temps;
	unsigned char		tempc;
	size_t				i;

	temps = (const unsigned char *)s;
	tempc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temps[i] != tempc)
			i++;
		else
			return ((void *)temps + i);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	string[20] = "Hello there~";

// 	printf("String: %s\n", string);
// 	printf("Location (mine): %p\n", (char *)ft_memchr(string, 'e', 5));
// 	printf("Location (ctrl): %p\n", (char *)memchr(string, 'e', 5));

// 	return (0);
// }
