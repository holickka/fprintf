#include <stdio.h>
#include "libftprintf.h"

int	main()
{

	int		y;
	char	*s;
	s = NULL;
	y = -2147483648;
	int z = ft_printf("asas %a sas\n", y, s);
	ft_printf("%d\n", z);
	printf("%d\n", z);

/*
//	int	y = ft_puthex(-1999, 'x');
	int	x = -1999;	
	int y = ft_printf("%x\n", x);
	ft_printf("%%\n");
	ft_printf("%d\n", y);
*/

/*
	char c[] = "Hello";
//	int	x = write(1, "2d123", 5);
	int	x = printf("%%");
	printf("__");
	printf("%p\n", c);
	ft_printf("%%\n");
	ft_printf("%d\n", x);
*/
}
