CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

NAME = arrays

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	test ! -e $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
