NAME = bsq

OBJ = yabbadabbadoo.o\
	map_from_file/head.o\
	map_from_file/linked_list.o\
	map_from_file/parse_meta.o\
	map_from_file/parse_cells.o\
	helper.o\
	solve.o
CFLAGS = -Wall -Wextra -Werror -I .

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

yabbadabbadoo.o: yabbadabbadoo.c

map_from_file/head.o: map_from_file/head.c

map_from_file/linked_list.o: map_from_file/linked_list.c

map_from_file/parse_meta.o: map_from_file/parse_meta.c

map_from_file/parse_cells.o: map_from_file/parse_cells.c

helper.o: helper.c

solve.o: solve.c

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
