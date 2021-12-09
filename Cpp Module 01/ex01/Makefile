CC = g++ -Wall -Wextra -Werror -std=c++98

NAME = Horde

INCLUDE = -I.

SRC = main.cpp ZombieHorde.cpp Zombie.cpp

OBJ = $(SRC:%.c=%.o)

%cpp.o : %cpp
	$(CC) $(INCLUDE) -c $<

all: main

main: $(OBJ)
	$(CC) $(OBJ) $(INCLUDE) -o $(NAME)

clean:
	rm $(NAME)

re: clean all

.PHONY: all main clean re
