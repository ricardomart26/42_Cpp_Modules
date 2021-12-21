CC = g++ -Wall -Werror -Wextra -pedantic -std=c++98

SRC = ClapTrap.cpp main.cpp

OBJ = $(SRC:.c=.o)

NAME = ClapTrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm $(NAME)

re: clean all

.PHONY = all clean re