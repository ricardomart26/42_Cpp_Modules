NAME = Bureaucrat

CC = clang++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = main.cpp Bureaucrat.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
