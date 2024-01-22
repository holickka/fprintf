#include <stdio.h>
#include "libftprintf.h"

int	main()
{
//	int	y = ft_puthex(-1999, 'x');
	int	x = -1999;	
	int y = ft_printf("%x\n", x);
	ft_printf("%%\n");
	printf("%d\n", y);
}
