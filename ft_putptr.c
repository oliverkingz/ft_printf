/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozamora- <ozamora-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:46:24 by ozamora-          #+#    #+#             */
/*   Updated: 2024/10/22 14:48:22 by ozamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putptr(void *ptr)
{
	size_t	nbr_len;

	nbr_len = 0;
	if (ptr == NULL)
	{
		nbr_len += ft_putstr("(nil)");
		return (nbr_len);
	}
	nbr_len += ft_putstr("0x");
	nbr_len += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (nbr_len);
}
