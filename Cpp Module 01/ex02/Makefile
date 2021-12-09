CC = g++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:%.c=%.o)

%cpp.o : %cpp
	$(CC) -c $<

all: main

main: $(OBJ)
	$(CC) $(OBJ) -o ptr_ref

clean:
	rm ptr_ref

re: clean all

.PHONY: all main clean re
