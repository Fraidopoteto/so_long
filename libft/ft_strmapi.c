/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:58:29 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/04 14:02:46 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (res == 0)
		return (0);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>

// char	tst_function(unsigned int i, char c)
// {
// 	(void)i;

// 	if (c >= 'a' && c <= 'z')
// 		return (c -= 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c);
// 	return (c);
// }

// int	main(void)
// {
// 	char const	*str;
// 	char		*tstcase1;

// 	str = "Hola mundo";
// 	tstcase1 = ft_strmapi(str, tst_function);
// 	printf("OG String: %s\n", str);
// 	printf("New String: %s\n", tstcase1);
// 	free(tstcase1);
// 	return (0);
// }
