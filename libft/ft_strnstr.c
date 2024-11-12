/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:41:02 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/17 19:57:07 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while ((j + i) < len && big[j + i] == little[j] && little[j] != '\0')
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

// // --> big[i], little[j]
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// char *result = ft_strnstr("hello how are you", "how", 7);
// 	char *result = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
// 	printf("%s", result);
// 	return (0);
// }
