CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

NAME = arrays

SRC = main.cpp

INC = easyfind.hpp

all: $(NAME)

$(NAME): $(SRC) Makefile $(INC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean:
	test ! -e $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
