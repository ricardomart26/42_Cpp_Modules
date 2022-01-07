CC = clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address

NAME = KarenFilter

SRC = main.cpp Karen.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test -s $(NAME) | rm $(NAME)

re: clean all

.PHONY: all clean re
