SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

NAME = Animal

CC = clang++ -Wall -Werror -Wextra -fsanitize=address -std=c++98 -pedantic

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test -s $(NAME) | rm $(NAME)

re: clean all

.PHONY: all clean re
