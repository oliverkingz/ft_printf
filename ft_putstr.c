/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozamora- <ozamora-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:39:05 by ozamora-          #+#    #+#             */
/*   Updated: 2024/10/22 14:33:42 by ozamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t	str_len;

	str_len = 0;
	if (str == NULL)
	{
		str_len += ft_putstr("(null)");
		return (str_len);
	}
	while (str[str_len] != '\0')
		str_len += ft_putchar(str[str_len]);
	return (str_len);
}
