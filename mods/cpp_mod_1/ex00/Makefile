CC = clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

NAME = Zombie

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm *.o

fclean:
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
