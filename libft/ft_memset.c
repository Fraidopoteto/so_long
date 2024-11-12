/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:52:10 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/17 19:54:21 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "Hello there!";

// 	printf("Old string: %s\n", str);
// 	printf("New string: %s\n", (char *)ft_memset(str, 'i', 3));
// 	printf("New string: %s\n", (char *)memset(str, 'i', 3));

// 	return (0);
// }
