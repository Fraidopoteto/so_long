/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:57:47 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/05 05:47:18 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res_str;
	int			len;
	long int	tmp_nbr;

	len = count_len(n);
	tmp_nbr = n;
	res_str = (char *)malloc(len + 1);
	if (res_str == 0)
		return (0);
	res_str[len] = '\0';
	len--;
	if (n < 0)
		tmp_nbr = -tmp_nbr;
	while (len > 0)
	{
		res_str[len] = tmp_nbr % 10 + '0';
		tmp_nbr = tmp_nbr / 10;
		len--;
	}
	if (n < 0)
		res_str[0] = '-';
	else
		res_str[0] = tmp_nbr % 10 + '0';
	return (res_str);
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// 	int nbr;
// 	char *str;
// 	//nbr = 0;
// 	nbr = INT_MIN;
// 	str = ft_itoa(nbr);
// 	printf("Number %d as string: %s\n", nbr, str);
// 	free(str);
// 	return (0);
// }
