NAME = AMateria

CC = clang++ -Wall -Werror -Wextra -pedantic -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

re: clean all

.PHONY = all clean re
