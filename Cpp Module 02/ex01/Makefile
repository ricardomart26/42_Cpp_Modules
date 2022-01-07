NAME = FixedPoint

CC = clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

SRC = Fixed.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test -s $(NAME) | rm $(NAME)

re: clean all

.PHONY: all clean re
