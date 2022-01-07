CC = clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

SRC = megaphone.cpp

NAME = megaphone

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test -s $(NAME) | rm -f $(NAME)

re: fclean all

.PHONY: all clean re
