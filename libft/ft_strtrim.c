/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:53:31 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/24 22:00:36 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*result;

	if (set == 0)
		return (0);
	if (s1 == 0)
		return (0);
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end >= start)
		end--;
	len = end - start + 1;
	result = (char *)malloc(len + 1);
	if (result == 0)
		return (0);
	ft_memcpy(result, &s1[start], len);
	result[len] = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *mainstr = "abbaHolisabba";
// 	char *seteu = "ab";
// 	char *trmstr = ft_strtrim(mainstr, seteu);

// 	printf("Main: %s\n", mainstr);
// 	printf("Trimmed Main: %s\n", trmstr);
// 	free(trmstr);
// 	return (0);
// }