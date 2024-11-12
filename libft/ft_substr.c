/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:54:00 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/04 21:06:43 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (s == 0)
		return (0);
	if ((unsigned int)ft_strlen((char *)s) < start)
	{
		substr = malloc(sizeof(char) * 1);
		if (substr == 0)
			return (0);
		substr[0] = '\0';
		return (substr);
	}
	if ((ft_strlen((char *)s) - start) < len)
		len = ft_strlen((char *)s) - start;
	substr = malloc(len + 1);
	if (substr == 0)
		return (0);
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *themainstr = "THE string~";
// 	char *thesubstr;

// 	//test ft_substr
// 	thesubstr = ft_substr(themainstr, 4, 6);
// 	printf("Main String: %s\n", themainstr);
// 	printf("Substring: %s\n", thesubstr);
// 	free(thesubstr);

// 	return (0);
// }