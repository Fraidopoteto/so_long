/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:21:51 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/05 02:31:40 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tempdest;
	char	*tempsrc;
	size_t	i;

	if (dest == 0 && src == 0)
		return (0);
	tempdest = (char *)dest;
	tempsrc = (char *)src;
	i = 0;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// const char source[20] ="Hello friends!~";
// 	// char desti[20] = "Oioi";

// 	// printf("Source: %s\n", source);
// 	// printf("Dest before: %s\n", desti);
// 	// printf("Dest after (mine): %s\n", (char *)ft_memcpy(desti, source, 5));
// 	// printf("Dest after (ctrl): %s\n", (char *)memcpy(desti, source, 5));

// 	return (0);
// }
