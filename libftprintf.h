#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_puthex(unsigned int n, char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putptr(size_t n);
size_t	ft_strlen(const char *s);

#endif