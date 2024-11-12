/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrenzel <mfrenzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:58:07 by mfrenzel          #+#    #+#             */
/*   Updated: 2024/07/04 16:40:42 by mfrenzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	char		digit;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putnbr_fd((nbr % 10), fd);
	}
	else
	{
		digit = nbr + 48;
		write(fd, &digit, 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
