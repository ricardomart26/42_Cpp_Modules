NAME = FixedPoint

CC = c++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

SRC = Fixed.cpp main.cpp bsp.cpp Point.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
