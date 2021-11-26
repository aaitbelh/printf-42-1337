
SRCS = ft_printf.c ft_put_x.c \
		ft_putaddress.c ft_putchar.c\
		ft_putnbr.c ft_putstr.c\
		ft_u_putnbr.c ft_up_put_x.c\

NAME = libftprintf.a

HEADER = ft_printf.h

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all