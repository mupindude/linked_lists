NAME = list_test

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c add_back.c add_front.c create_node.c free_list.c list_szie.c print_list.c remove_value.c reverse_list.c

OBJ = $(SRC:.c=.o)

$all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c prac_list.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all