/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:20:35 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/17 19:53:35 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	// //test1
// 	// char *string1 = "zpple234";
// 	// char *string2 = "zpple4";
// 	// int n = 6;
// 	//another test lol
// 	char *string1 = "abcdefgh";
// 	char *string2 = "abcdwxyz";
// 	int n = 4;
// 	printf("1st string: %s\n", string1);
// 	printf("2nd string: %s\n", string2);
// 	printf("%d\n", ft_strncmp(string1, string2, n));
// 	printf("%d\n", strncmp(string1, string2, n));
// 	return (0);
// }
