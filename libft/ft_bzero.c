/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:09:03 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 21:48:05 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h> 

// int	main(void)
// {
// 	char	buffer[10] = "Helloo~";
// 	unsigned int	j = 0;

// 	ft_bzero(buffer, sizeof(buffer));
// 	while (j < sizeof(buffer))
// 	{
// 		printf("%c", buffer[j]);
// 		j++;
// 	}
// 	printf("\n");
// 	return (0);
// }
