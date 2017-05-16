NAME = libft.a

SRC = ./srcs/ft_putchar.c\
	./srcs/ft_putstr.c\
	./srcs/ft_strcmp.c\
	./srcs/ft_strlen.c\
	./srcs/ft_swap.c
OFILES = ft_putchar.o\
	./ft_putstr.o\
	./ft_strcmp.o\
	./ft_strlen.o\
	./ft_swap.o

HEADERS = ./includes

all:
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OFILES)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all