NAME = AMateria

CC = clang++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(SRC) -o $(NAME)

clean:
	test -s $(NAME) | rm $(NAME)

re: clean all

.PHONY: all clean re
