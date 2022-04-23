NAME = AMateria

CC = c++ -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRC = goncalo_main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean:
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
