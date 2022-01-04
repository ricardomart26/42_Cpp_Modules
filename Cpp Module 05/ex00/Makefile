NAME = Bureaucrat

CC = c++ -Wall -Werror -Wextra -pedantic -std=c++98

SRC = main.cpp Bureaucrat.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

re: clean all

.PHONY: all clean re
