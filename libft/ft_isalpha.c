/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:26:18 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:19:13 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	char1 = 'z';
// 	char	char2 = ':';

// 	printf("%d\n", ft_isalpha(char1));
// 	printf("%d\n", ft_isalpha(char2));

// 	printf("%d\n", isalpha(char1));
// 	printf("%d\n", isalpha(char2));

// 	return (0);
// }
