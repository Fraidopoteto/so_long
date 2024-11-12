/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:13:03 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/05 06:05:41 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*string;

// 	string = "This is the string!";

// 	printf("%s\n", string);
// 	printf("Length of string: %d.\n", ft_strlen(string));
// 	printf("Length of string: %lu.\n", strlen(string));

// 	return (0);
// }
