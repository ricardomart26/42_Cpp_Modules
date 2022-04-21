NAME = FixedPoint

CC = c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = Fixed.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
