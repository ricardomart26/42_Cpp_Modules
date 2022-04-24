NAME = Bureaucrat

CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = main.cpp Bureaucrat.cpp

INC = Bureaucrat.hpp

all: $(NAME)

$(NAME): $(SRC) Makefile $(INC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean:
	test ! -s $(NAME) || rm $(NAME)

re: fclean all

.PHONY: all fclean clean re
