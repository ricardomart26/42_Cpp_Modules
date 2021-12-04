CC = c++ -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = megaphone.cpp

NAME = megaphone

all: run

run:
	$(CC) megaphone.cpp -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean run

.PHONY: all run clean fclean re
