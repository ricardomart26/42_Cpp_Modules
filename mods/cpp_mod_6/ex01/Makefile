NAME= reinterpret

CC= clang++ -Wall -Wextra -Werror -fsanitize=address -pedantic -std=c++11

SRC= main.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
