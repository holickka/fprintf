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
/*
void	ft_puthex(int n, int x)
{
	long	nlong;

	nlong = (long)n;
	if (nlong < 0)
	{
		nlong *= -1;
		ft_putchar('-');
	}
	if (nlong >= 16)
	{
		ft_puthex(nlong / 16);
		ft_puthex(nlong % 16);
	}
	if (nlong >= 10 && nlong <= 15 && x == 1)
		ft_putchar(nlong - 10 + 'a');
	else if (nlong >= 10 && nlong <= 15 && x == 2)
		ft_putchar(nlong - 10 + 'A');
	if (nlong >= 0 && nlong <= 9)
	{
		nlong += '0';
		ft_putchar(nlong);
	}
}
*/
#include <stdio.h>
int	main()
{
	char c[] = "Hello";
	printf("%p\n", c);
}

