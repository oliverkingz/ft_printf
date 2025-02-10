/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozamora- <ozamora-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:46:09 by ozamora-          #+#    #+#             */
/*   Updated: 2024/10/21 02:46:12 by ozamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_unsigned(unsigned int nbr)
{
	size_t	nbr_len;

	nbr_len = 0;
	if (nbr > 9)
		nbr_len += ft_putnbr_unsigned(nbr / 10);
	nbr_len += ft_putchar((nbr % 10) + '0');
	return (nbr_len);
}
