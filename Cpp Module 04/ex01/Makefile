SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

NAME = Animal

CC = g++ -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.PHONY: all fclean re
