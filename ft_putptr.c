/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/10/27 20:33:22 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(size_t n)
{
	int	len;

	ft_putstr("0x");
	len = 2;
	if (!n)
	{
		write (1, "0", 1);
		return (len + 1);
	}
	len += ft_puthex(n, 'x');
/*	if (nlong >= 16)
	{
		len += ft_puthex(nlong / 16, x);
		len += ft_puthex(nlong % 16, x);
	}
	if (nlong >= 10 && nlong <= 15 && x == 1)
		len += ft_putchar(nlong - 10 + 'a');
	else if (nlong >= 10 && nlong <= 15 && x == 2)
		len += ft_putchar(nlong - 10 + 'A');
	if (nlong >= 0 && nlong <= 9)
	{
		nlong += '0';
		len += ft_putchar(nlong);
	}
*/	return (len);
}

#include <stdio.h>
int	main()
{
	char c[] = "Hello";
	int x = write(1, "2d", 2);
	printf("%p\n", c);
	printf("%d\n", x);
}

