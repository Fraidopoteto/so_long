/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:50:53 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:53:44 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i += 32);
	else if (i >= 'a' && i <= 'z')
		return (i);
	return (0 + i);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	int1 = 'a';
// 	char	int2 = 'G';
// 	char	int3 = '%';

// 	printf("%d\n", ft_tolower(int1));
// 	printf("%d\n", ft_tolower(int2));
// 	printf("%d\n", ft_tolower(int3));

// 	printf("%d\n", tolower(int1));
// 	printf("%d\n", tolower(int2));
// 	printf("%d\n", tolower(int3));

// 	return (0);
// }
