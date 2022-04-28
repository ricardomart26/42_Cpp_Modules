SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

NAME = Animal

CC = c++ -Wall -Werror -Wextra -fsanitize=address -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
