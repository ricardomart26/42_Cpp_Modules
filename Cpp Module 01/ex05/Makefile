CC = g++ -Wall -Wextra -Werror -std=c++98

INCLUDE = -I.

NAME = Karen

SRC = main.cpp Karen.cpp

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
