/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:36:37 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/06/11 14:18:49 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
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

// 	printf("%d\n", ft_isdigit(int1));
// 	printf("%d\n", ft_isdigit(int2));

// 	printf("%d\n", isdigit(int1));
// 	printf("%d\n", isdigit(int2));

// 	return (0);
// }
