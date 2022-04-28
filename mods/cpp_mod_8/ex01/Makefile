CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address -g

NAME = arrays

SRC = main.cpp Span.cpp

INC = Span.hpp

all: $(NAME)

$(NAME): $(SRC) Makefile $(INC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean:
	test ! -e $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re

