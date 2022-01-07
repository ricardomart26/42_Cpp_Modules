CC = clang++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

NAME = ClapTrap

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test -s $(NAME) | rm $(NAME)

re: clean all

.PHONY: all clean re