NAME = AMateria

CC = g++ -Wall -Werror -Wextra -pedantic -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp ICharacter.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

re: clean all

.PHONY = all clean re
