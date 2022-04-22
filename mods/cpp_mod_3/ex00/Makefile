CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = ClapTrap.cpp goncalo_main.cpp

NAME = ClapTrap

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
