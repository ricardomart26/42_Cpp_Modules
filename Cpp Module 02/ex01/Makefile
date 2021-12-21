NAME = FixedPoint

CC = g++ -Wall -Wextra -Werror

SRC = Fixed.cpp main.cpp

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
