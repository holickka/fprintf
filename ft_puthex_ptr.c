/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/14 20:36:40 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_ptr(unsigned long long n, char c)
{
	int		len;

	len = 0;
	if (n >= 16)
	{
		len += ft_puthex_ptr(n / 16, c);
		len += ft_puthex_ptr(n % 16, c);
	}
	if (n >= 10 && n <= 15 && c == 'x')
		return (len += ft_putchar(n - 10 + 'a'));
	else if (n >= 10 && n <= 15 && c == 'X')
		return (len += ft_putchar(n - 10 + 'A'));
	if (n >= 0 && n <= 9)
	{
		n += '0';
		return (len += ft_putchar(n));
	}
	return (len);
}
/*
#include <stdio.h>
int	main()
{
//	int	y = ft_puthex(-1999, 'x');
	int	x = -1999;	
	int y = printf("%x", x);
	printf("\n");
	printf("%d\n", y);
}
*/