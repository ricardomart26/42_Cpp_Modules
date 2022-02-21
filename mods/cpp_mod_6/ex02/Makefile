NAME= convert

CC= clang++ -Wall -Wextra -Werror -fsanitize=address -pedantic -std=c++98

SRC= main.cpp A.cpp B.cpp C.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
