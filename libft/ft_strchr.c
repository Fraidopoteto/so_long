/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:40:34 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/01 13:38:28 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main (void)
// {
// 	char *string = "Hello there";
// 	int j = '\0';

// 	printf("String: %s\n", string);
// 	printf("Pointer: %p\n", ft_strchr(string, j));

// 	printf("String: %s\n", string);
// 	printf("Pointer: %p\n", strchr(string, j));

// 	return (0);
// }
