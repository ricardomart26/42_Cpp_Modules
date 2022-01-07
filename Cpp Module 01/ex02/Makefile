CC = clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

SRC = main.cpp

NAME = ptr_ref

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	test -s $(NAME) | rm $(NAME)

re: clean all

.PHONY: all clean re
