NAME= convert

CC= c++ -Wall -Wextra -Werror -fsanitize=address -pedantic -std=c++98

SRC= main.cpp Converter.cpp

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
