CC = g++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

INCLUDE = -I.

NAME=replace

SRC = main.cpp

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
