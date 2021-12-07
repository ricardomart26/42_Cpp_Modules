#ifndef USER_H
# define USER_H

# include <iostream>
# include <iomanip>
# include <stdexcept>
# include <limits>

# define FOUND 0

class Contact {
public:
	Contact() {
		firstName;
		lastName;
		nickname;
		index = 0;
		phoneNumber = 0;
		secret;
	}

	// ~Contact() {
	// 	std::cout << "Destroyed object Contact" << std::endl;
	// }

	std::string	get_input(std::string prompt)
	{
		std::string	input;

		std::cout << prompt;
		std::cin >> input;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (input.empty())
		{
			std::cout << "Wrong arguments passed!" << std::endl;
			get_input(prompt);
		}
		return (input);
	}

	#define MAX_NUMBER_SIZE 9

	void	set_values(int i)
	{
		char str[MAX_NUMBER_SIZE];
		size_t number;

		firstName = get_input("Enter the first Name: ");
		lastName = get_input("Enter the last Name: ");
		nickname = get_input("Enter the Nickname: ");
		while (1)
		{
			std::cout << "Enter the Phone Number: ";
			std::cin.getline(str, MAX_NUMBER_SIZE);
			// if (!std::cin.fail())
			// 	break ;
			// std::cin.clear();
			// std::cin.ignore(10000, '\n');
			try {
				std::stoi(str, &phoneNumber);
			}
			catch (const std::invalid_argument& ia) {
				std::cerr << "Should be a number" << ia.what() << std::endl;
				continue ;
			}
			break ;
		}
		secret = get_input("Enter the Darkest Secret: ");
		index = i;
	}

	void	print_search() {
		std::cout << "| " << std::right << std::setw(10) << index << " |";
		if (firstName.length() >= 10)
			std::cout << std::right << std::setw(10) << firstName.substr(0, 9) << ". |";
		else
			std::cout << std::right << std::setw(10) << firstName << "  |";
		if (lastName.length() >= 10)
			std::cout << std::right << std::setw(10) << lastName.substr(0, 9) << ". |";
		else
			std::cout << std::right << std::setw(10) << lastName << "  |";
		if (nickname.length() >= 10)
			std::cout << std::right << std::setw(10) << nickname.substr(0, 9) << ". |";
		else
			std::cout << std::right << std::setw(10) << nickname << "  |";
		std::cout << std::endl;
	}

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	size_t		phoneNumber;
	std::string	secret;
	size_t		index;
};

class Phonebook {
	public:
		Contact users[8];
};

#endif
