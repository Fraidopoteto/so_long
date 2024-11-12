/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:58:21 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/04 14:02:14 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// void	tst_function(unsigned int i, char *c)
// {
// 	(void)i;

// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// int	main(void)
// {
// 	char	str[] = "Hola mundo";
// 	printf("OG String: %s\n", str);
// 	ft_striteri(str, tst_function);
// 	printf("New String: %s\n", str);

// 	return (0);
// }
