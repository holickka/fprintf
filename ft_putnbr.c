/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/13 21:09:51 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_countnum(int n)
{
	int		count;
	long	nlong;

	nlong = (long)n;
	count = 1;
	if (nlong < 0)
	{
		nlong *= -1;
		count++;
	}
	while (nlong >= 10)
	{
		nlong /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int		numcount;
	long	nlong;

	nlong = (long)n;
	numcount = ft_countnum(n);
	if (nlong < 0)
	{
		nlong *= -1;
		ft_putchar('-');
	}
	if (nlong >= 10)
	{
		ft_putnbr(nlong / 10);
		ft_putnbr(nlong % 10);
	}
	if (nlong >= 0 && nlong <= 9)
	{
		nlong += '0';
		ft_putchar(nlong);
	}
	return (numcount);
}
/*
int	main()
{
	ft_putnbr_fd(-2147483648, 1);
}
*/
