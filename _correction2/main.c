#include <stdio.h>
#include "libftprintf.h"

int	main()
{
/*
//	int	y = ft_puthex(-1999, 'x');
	int	x = -1999;	
	int y = ft_printf("%x\n", x);
	ft_printf("%%\n");
	printf("%d\n", y);
*/
	char c[] = "Hello";
//	int	x = write(1, "2d123", 5);
	int	x = printf("%%");
	printf("__");
	printf("%p\n", c);
	ft_printf("%%\n");
	ft_printf("%d\n", x);

}
