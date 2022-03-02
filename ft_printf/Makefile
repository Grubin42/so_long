CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_puthexa.c ft_putptr.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
