CC = c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic

NAME = Horde

SRC = main.cpp ZombieHorde.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm *.o

fclean:
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
