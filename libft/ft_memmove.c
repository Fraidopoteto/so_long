/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:40:49 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/05 02:32:11 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tempdst;
	char	*tempsrc;
	size_t	i;

	if (dst == 0 && src == 0)
		return (0);
	tempdst = (char *)dst;
	tempsrc = (char *)src;
	i = 0;
	if (tempdst > tempsrc && tempdst < tempsrc + len)
	{
		while (len-- > 0)
			tempdst[len] = tempsrc[len];
	}
	else
	{
		while (i < len)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	//const char source[20] ="Hello friends!~";
// 	char desti[20] = "Oioioi what is this";
// 	char desti2[20] = "Oioioi what is this";

// 	// printf("Source: %s\n", source);
// 	// printf("Dest before: %s\n", desti);
// 	// printf("Mine): %s\n", (char *)ft_memmove(desti, source, 10));
// 	// printf("Ctrl): %s\n", (char *)memmove(desti, source, 10));
// 	// printf("Ovrlp 1(mine): %s\n", (char *)ft_memmove(desti, desti + 3, 10));
// 	// printf("Ovrlp 1(ctrl): %s\n", (char *)memmove(desti2, desti2 + 3, 10));
// 	// printf("Ovrlp 2(mine): %s\n", (char *)ft_memmove(desti + 3, desti, 10));
// 	// printf("Ovrlp 2(ctrl): %s\n", (char *)memmove(desti2 + 3, desti2, 10));

// 	return (0);
// }