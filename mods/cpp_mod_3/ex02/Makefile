CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = ClapTrap.cpp goncalo_main.cpp ScavTrap.cpp FragTrap.cpp

NAME = Fragtrap

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all clean re fclean
