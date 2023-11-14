/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:58:58 by hsim              #+#    #+#             */
/*   Updated: 2023/11/14 21:00:20 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

static int	ft_checkformat(va_list *list, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*list, int));
	else if (c == 's')
		len += ft_putstr(va_arg(*list, char *));
	else if (c == 'p')
		len += ft_putptr(va_arg(*list, void *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(*list, int));
	else if (c == 'u')
		len += ft_putnbr(va_arg(*list, unsigned int));
	else if (c == 'x')
		len += ft_puthex(va_arg(*list, unsigned int), 'x');
	else if (c == 'X')
		len += ft_puthex(va_arg(*list, unsigned int), 'X');
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	myarg;

	va_start(myarg, str);
	i = -1;
	len = 0;
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
			len += ft_checkformat(&myarg, str[++i]);
		else
			len += ft_putchar(str[i]);
	}
	return (len);
}
/*
#include <stdio.h>
int	main()
{
	int	y;
	int	x;
	y = -1234;
	char s[] = "Whale";
	x = ft_printf("what %d %s", y, s);
	ft_printf("%d\n", x);
}
*/
/*
|notes|
cspdiuxX%
printf returns total num of printed characters (\n is also counted a char)
printf("%s Mytext", myfunction1);
*/