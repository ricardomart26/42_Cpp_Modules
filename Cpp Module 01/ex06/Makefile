CC = g++ -Wall -Wextra -Werror -std=c++98

INCLUDE = -I.

SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

OBJ = $(SRC:%.c=%.o)

%cpp.o : %cpp
	$(CC) $(INCLUDE) -c $<

all: main

main: $(OBJ)
	$(CC) $(OBJ) $(INCLUDE) -o Zombie

clean:
	rm Zombie

re: clean all

.PHONY: all main clean re
