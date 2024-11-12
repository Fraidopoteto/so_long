/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:54:05 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/24 16:48:17 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (str == 0)
		return (0);
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char one[] = "Hola! ";
// 	char two[] = "Buenas~";
// 	char *three= ft_strjoin(one, two);

// 	printf("String one: %s\n", one);
// 	printf("String two: %s\n", two);
// 	printf("ft_strjoin: %s\n", three);
// 	free(three);
// 	return (0); 
// }
