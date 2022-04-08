#include "Contact.hpp"
#include "Phonebook.hpp"

void	add_command(Phonebook &user, int &index, int &max)
{
	user.users[index % 8].set_values(index % 8);
    index++;
    if (max != 8)
        max++;
}

std::string get_input(const std::string &prompt)
{
    std::string input;

    std::cout << prompt;
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (input.empty())
    {
        std::cout << "Wrong arguments passed!" << std::endl;
        input = get_input(prompt);
    }
    return (input);
}

int     validate_index(std::string &index_to_find, int amount)
{
    if (index_to_find == "")
        return (1);
    while (index_to_find.find_last_not_of("1234567890", 0) != std::string::npos)
    {
        std::cout << "Please enter a number a positive value...\n";
        return (1);
    }
    int idx = std::atoi(index_to_find.c_str());
    if (idx < 0 || idx >= amount || idx > 7)
    {
        std::cout << "Index not found, try again\n";
        return (1);
    }
    return (0);
}
 

int    ask_for_index(int amount)
{
    std::string index_to_find;
    std::string answer;
    std::string lower_answer;

    answer = get_input("Do you want to search by Index? [yes/no] ");
    for (size_t i = 0; i < answer.size(); i++)
        lower_answer.push_back(tolower(answer[i]));
    if (!answer.compare("yes") || !answer.compare("y"))
    {
        while (validate_index(index_to_find, amount))
            index_to_find = get_input("Enter the index: ");
        return (std::atoi(index_to_find.c_str()));
    }
    else if (answer.compare("no") || answer.compare("n"))
        return -1;
    else
    {
        std::cout << "Wrong answer\n";
        ask_for_index(amount);
    }
    return (-1);
}

void	search_command(Phonebook &user, int amount, int max)
{
	if (!amount)
	{
		std::cout << "Users is empty, add one to show the list\n";
		return ;
	}

	std::cout << "|    Index   |  Firstname  |  Lastname  |  Nickname  |\n";
	for (int i = 0; i < max; i++)
		user.users[i].print_search();

	int idx = ask_for_index(amount);
	if (idx == -1)
		return ;
	user.users[idx].print_index();
}


std::string	get_command(const std::string& prompt)
{
	std::string	input;

	std::cout << prompt;
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora 
	return (input);
}


int main(void)
{
	Phonebook	users;
	std::string input;
	int			amount_of_contacts;
	int			max = 0;

	amount_of_contacts = 0;
	while (1)
	{
		input = get_command("Enter a command: ");
		if (input.compare("ADD") == FOUND)
			add_command(users, amount_of_contacts, max);
		else if (input.compare("EXIT") == FOUND)
			exit(0);
		else if (input.compare("SEARCH") == FOUND)
			search_command(users, amount_of_contacts, max);
		else
			std::cout << "Wrong Command, please try again!\n";
	}
}
