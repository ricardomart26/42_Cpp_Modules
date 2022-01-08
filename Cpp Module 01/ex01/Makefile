CC = clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic

NAME = Horde

SRC = main.cpp ZombieHorde.cpp Zombie.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
