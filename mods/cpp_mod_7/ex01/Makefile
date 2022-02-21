CC = clang++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

NAME = iter

SRC = main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -e $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
