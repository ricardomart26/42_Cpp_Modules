#include "user.hpp"

void	replace_older()
{
	return ;
}

void	add_command(Phonebook& user, int& index)
{
	user.users[index].set_values(index % 8);
	index++;
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
		user.users[i].print_search();
}


std::string	get_command(std::string prompt)
{
	std::string	input;

	std::cout << prompt;
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (input);
}


int main(void)
{
	Phonebook	users;
	std::string input;
	int			amount_of_contacts = 0;

	while (1)
	{
		input = get_command("Enter a command: ");
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
