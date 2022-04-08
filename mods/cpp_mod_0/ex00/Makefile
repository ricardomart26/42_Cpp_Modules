CC = clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

SRC = megaphone.cpp

NAME = megaphone

all: $(NAME)

$(NAME): $(SRC) Makefile
	$(CC) $(SRC) -o $(NAME)

clean:
	rm *.o

fclean:
	test ! -s $(NAME) || rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
