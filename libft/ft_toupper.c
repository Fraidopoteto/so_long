/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:29:27 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:50:26 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i -= 32);
	else if (i >= 'A' && i <= 'Z')
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

// 	printf("%d\n", ft_toupper(int1));
// 	printf("%d\n", ft_toupper(int2));
// 	printf("%d\n", ft_toupper(int3));

// 	printf("%d\n", toupper(int1));
// 	printf("%d\n", toupper(int2));
// 	printf("%d\n", toupper(int3));

// 	return (0);
// }
