NAME = ft_display_file

SRC = display.c

OFILES = display.o

HEADERS = .

all:
	gcc -Wall -Wextra -Werror $(SRC) -c -I $(HEADERS)
	gcc -Wall -Wextra -Werror $(OFILES) -o $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all