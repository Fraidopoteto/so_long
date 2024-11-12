/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:47:22 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/01 19:08:16 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//comrade\0

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *) s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	char *string = "hello there~";

// 	printf("String: %s\n", string);
// 	printf("Pointer: %p\n", ft_strrchr(string, 'h'));

// 	printf("String: %s\n", string);
// 	printf("Pointer: %p\n", strrchr(string, 'h'));

// 	return (0);
// }
