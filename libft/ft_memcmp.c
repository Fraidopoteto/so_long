/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:40:46 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/17 15:00:06 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (i < n && t1[i] == t2[i])
		i++;
	if (n == 0)
		return (0);
	else if (i == n)
		return (0);
	return (t1[i] - t2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// unsigned char string1[20] = "Hello there!";
// 	// unsigned char string2[20] = "Hello friend";
// 	unsigned char string1[10] = "atoms\0\0\0\0";
// 	unsigned char string2[10] = "atoms\0abc";

// 	printf("String1: %s\n", string1);
// 	printf("String2: %s\n", string2);
// 	printf("Comparison(mine): %d\n", ft_memcmp(string1, string2, 8));
// 	printf("Comparison(ctrl): %d\n", memcmp(string1, string2, 8));

// 	return (0);
// }
