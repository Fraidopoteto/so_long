/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:57:07 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:19:22 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	else if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char	int1 = '2';
// 	char	int2 = ':';
// 	char	int3 = 'z';

// 	printf("%d\n", ft_isalnum(int1));
// 	printf("%d\n", ft_isalnum(int2));
// 	printf("%d\n", ft_isalnum(int3));

// 	printf("%d\n", isalnum(int1));
// 	printf("%d\n", isalnum(int2));
// 	printf("%d\n", isalnum(int3));

// 	return (0);
// }
