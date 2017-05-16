NAME = rush-2

SRC = rush2.c\
	ft_putstr.c\
	ft_putchar.c\
	ft_putnbr.c

OFILES = rush2.o\
	ft_putstr.o\
	ft_putchar.o\
	ft_putnbr.o

HEADERS = .

all:
	gcc -Wall -Wextra -Werror $(SRC) -c -I $(HEADERS)
	gcc -Wall -Wextra -Werror $(OFILES) -o $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
