#include "user.hpp"

std::string	get_input(std::string prompt)
{
	static int i = 0;
	std::string	input;

	if (i++ != 0)
		std::cin.ignore(10000, '\n');
	std::cout << prompt;
	std::cin >> input;
	return (input);
}

void	replace_older()
{
	return ;
}

void	add_command(Phonebook& user, int& index)
{
	int number;

	if (index == 8)
		replace_older();
	else
	{
		user.users[index].setFirstName(get_input("Enter the first Name: "));
		user.users[index].setLastName(get_input("Enter the last Name: "));
		user.users[index].setNickname(get_input("Enter the Nickname: "));
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
		user.users[index].setPhone(number);
		user.users[index].setSecret(get_input("Enter the Darkest Secret: "));
		user.users[index].setIndex(index);
		index++;
	}
}

void	search_command(Phonebook user, int amount)
{
	if (!amount)
	{
		std::cout << "Users is empty, add one to show the list" << std::endl;
		return ;
	}
	std::cout << "|    Index   |  Firstname |  Lastname  |  Nickname  |" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		user.users[i].printIndex();
		user.users[i].printFirstName();
		user.users[i].printLastName();
		user.users[i].printNickname();
		std::cout << std::endl;
	}
}

int main(void)
{
	Phonebook	users;
	std::string input;
	int			amount_of_contacts = 0;

	while (1)
	{
		input = get_input("Enter a command: ");
		if (input.compare("ADD") == FOUND)
			add_command(users, amount_of_contacts);
		else if (input.compare("EXIT") == FOUND)
			exit(0);
		else if (input.compare("SEARCH") == FOUND)
			search_command(users, amount_of_contacts);
		else
			std::cout << "Wrong Command, please try again!" << std::endl;
	}
}
