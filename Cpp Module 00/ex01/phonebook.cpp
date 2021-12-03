
#include "user.hpp"

int		eval_input(std::string input)
{
	if (!input.compare("ADD"))
		return (1);
	else if (!input.compare("EXIT"))
		return (2);
	else if (!input.compare("SEARCH"))
		return (3);
	return (0);
}

void	get_input(std::string *input, std::string prompt)
{
	static int i = 0;

	if (i++ != 0)
		std::cin.ignore(10000, '\n');
	std::cout << prompt;
	std::cin >> *input;
}

void	replace_older()
{
	return ;
}

void	add_command(Phonebook *users, int *index)
{
	std::string fName;
	std::string lName;
	std::string nName;
	int number;
	std::string sec;

	if (*index == 8)
		replace_older();
	else
	{
		get_input(&fName, "Enter the first Name: ");
		(*users).users[*index].setFirstName(fName);
		get_input(&lName, "Enter the last Name: ");
		(*users).users[*index].setLastName(lName);
		get_input(&nName, "Enter the Nickname: ");
		(*users).users[*index].setNickname(nName);
		while (1)
		{
			std::cout << "Enter the Phone Number: ";
			std::cin >> number;
			if (!std::cin.fail())
				break ;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Wrong type of argument, try again " << std::endl;
		}
		(*users).users[*index].setPhone(number);
		get_input(&sec, "Enter the Darkest Secret: ");
		(*users).users[*index].setSecret(sec);
		(*users).users[*index].setIndex(*index);
		(*index)++;
	}
}

void	search_command(Phonebook users, int amount)
{
	if (!amount)
	{
		std::cout << "Users is empty, add one to show the list" << std::endl;
		return ;
	}
	std::cout << "|    Index   |  Firstname |  Lastname  |  Nickname  |" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		users.users[i].printIndex();
		users.users[i].printFirstName();
		users.users[i].printLastName();
		users.users[i].printNickname();
		std::cout << std::endl;
	}
}

int main(void)
{
	Phonebook	users;
	std::string input;
	int			option;
	int			amount_of_contacts = 0;

	while (1)
	{
		get_input(&input, "Enter a command: ");
		std::cout << "This is the input: " << input << std::endl;
		option = eval_input(input);
		if (!option)
			continue ;
		switch (option)
		{
			case 1:
				add_command(&users, &amount_of_contacts);
				break;
			case 2:
				exit(0);
			case 3:
				search_command(users, amount_of_contacts);
				break ;
		}
	}
}
