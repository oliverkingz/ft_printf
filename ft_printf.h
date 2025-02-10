/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozamora- <ozamora-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:43:42 by ozamora-          #+#    #+#             */
/*   Updated: 2024/10/22 14:49:31 by ozamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // To use system calls like write, open, read, close.
# include <stdlib.h> // To use memory allocation (malloc, free) and size_t.
# include <stdio.h>  // To use printf for testing
# include <stdarg.h> // To use va_list, va_start, va_copy, va_arg and va_end
# include <limits.h> // To use MAX and MIN definitions, to check int overflows

int		ft_printf(const char *format, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putptr(void *ptr);
size_t	ft_putnbr(int nbr);
size_t	ft_putnbr_unsigned(unsigned int nbr);
size_t	ft_putnbr_base(unsigned long number, char *base);
size_t	ft_strlen(const char *s);

#endif