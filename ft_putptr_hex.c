/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/20 15:24:09 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr_hex(unsigned long long n, char c)
{
	int		len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putptr_hex(n / 16, c);
		len += ft_putptr_hex(n % 16, c);
	}
	if (n >= 10 && n <= 15 && c == 'x')
		return (len += ft_putchar(n - 10 + 'a'));
	else if (n >= 10 && n <= 15 && c == 'X')
		return (len += ft_putchar(n - 10 + 'A'));
	if (n >= 0 && n <= 9)
		return (len += ft_putchar(n + '0'));
	return (len);
}
/*
#include <stdio.h>
int	main()
{
//	int	y = ft_putptr_hex(1999, 'x');
	int	x = 1999;	
	int y = printf("%x", x);
	printf("\n");
	printf("%d\n", y);
}
*/
