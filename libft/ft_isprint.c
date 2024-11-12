/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:01:20 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:18:41 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	int1 = '2';
// 	char	int2 = '\0';

// 	printf("%d\n", ft_isprint(int1));
// 	printf("%d\n", ft_isprint(int2));

// 	printf("%d\n", isprint(int1));
// 	printf("%d\n", isprint(int2));

// 	return (0);
// }
