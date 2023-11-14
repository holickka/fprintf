COMPILE = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES = ft_printf.c ft_putchar.c ft_puthex_ptr.c ft_puthex.c\
		 ft_putnbr.c ft_putptr.c ft_putstr.c ft_strlen.c

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
