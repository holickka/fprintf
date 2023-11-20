/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/14 20:46:27 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_ux(unsigned int n, char c)
{
	int		len;

	len = 0;
	if (c == 'u' && n >= 10)
	{
		len += ft_putnbr_ux(n / 10, c);
		len += ft_putnbr_ux(n % 10, c);
	}
	else if (c != 'u' && n >= 16)
	{
		len += ft_putnbr_ux(n / 16, c);
		len += ft_putnbr_ux(n % 16, c);
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
//	int	y = ft_putnbr_ux(-1999, 'x');
	int	x = -1999;	
	int y = printf("%x", x);
	printf("\n");
	printf("%d\n", y);
}
*/
