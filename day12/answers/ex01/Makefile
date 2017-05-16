NAME = ft_cat

SRC = make_cat.c

OFILES = make_cat.o

HEADERS = .

all:
	gcc -Wall -Wextra -Werror $(SRC) -c -I $(HEADERS)
	gcc -Wall -Wextra -Werror $(OFILES) -o $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all