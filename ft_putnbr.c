/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozamora- <ozamora-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:46:17 by ozamora-          #+#    #+#             */
/*   Updated: 2024/10/21 02:46:19 by ozamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int nbr)
{
	long	number;
	size_t	nbr_len;

	number = (long)nbr;
	nbr_len = 0;
	if (number < 0)
	{
		nbr_len += ft_putchar('-');
		number = -number;
	}
	if (number > 9)
		nbr_len += ft_putnbr((number / 10));
	nbr_len += ft_putchar((number % 10) + '0');
	return (nbr_len);
}

// Another version
/*
void	ft_putnbr(int number)
{
	int		i;
	char	buffer[10];

	if (number == 0)
		write(1, "0", 1);
	else if (number < 0)
	{
		write(1, "-", 1);
		if (number == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		number = -number;
	}
	i = 0;
	while (number > 0)
	{
		buffer[i++] = number % 10 + '0';
		number = number / 10;
	}
	while (i > 0)
		write(1, &buffer[--i], 1);
}
*/
