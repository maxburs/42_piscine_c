NAME = eval_expr

SRC = im_so_sexy.c\
	my_atoi.c\
	my_putnbr.c

OFILES = im_so_sexy.o\
	my_atoi.o\
	my_putnbr.o

HEADERS = .

all:
	gcc -Wall -Wextra -Werror $(SRC) -c -I $(HEADERS)
	gcc -Wall -Wextra -Werror $(OFILES) -o $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all