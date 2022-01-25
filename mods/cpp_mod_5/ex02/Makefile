NAME = OverComplicatedForms

CC = clang++ -Wall -Werror -Wextra -pedantic -std=c++98 -fsanitize=address

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	test ! -s $(NAME) || rm $(NAME)

re: clean all

.PHONY: all clean re
