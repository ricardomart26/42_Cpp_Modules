CC = clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -pedantic

NAME = Army

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm *.o

fclean:
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
