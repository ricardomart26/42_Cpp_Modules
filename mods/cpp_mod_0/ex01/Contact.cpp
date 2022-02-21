#include "Contact.hpp"
#include <string>
#include <string.h>

Contact::Contact()
{
    _firstName = "";
    _lastName = "";
    _nickname = "";
    _index = 0;
    _phoneNumber = 0;
    _secret = "";
}

Contact::~Contact() 
{
	std::cout << "Destroyed object Contact" << std::endl;
}

std::string	Contact::get_input(const std::string& prompt)
{
    std::string input;

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

void    Contact::set_values(int i)
{
    char str[MAX_NUMBER_SIZE];

    _firstName = get_input("Enter the first Name: ");
    _lastName = get_input("Enter the last Name: ");
    _nickname = get_input("Enter the Nickname: ");
    while (1)
    {
        std::cout << "Enter the Phone Number: ";
        std::cin.getline(str, MAX_NUMBER_SIZE);
        if (!std::cin.fail())
        	break ;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        try {
            size_t i = 0;
            for (; i < strlen(str); i++)
            {
                if (str[i] >= 48 && str[i] <= 57)
                    continue;
                throw (1);
            }
            _phoneNumber = std::atoi(str);
        }
        catch (...) {
            std::cerr << "Should be a number" << std::endl;
            continue ;
        }
        break ;
    }
    _secret = get_input("Enter the Darkest Secret: ");
    _index = i;
}

void	Contact::print_search() 
{
    std::cout << "| " << std::right << std::setw(10) << _index << " |";
    if (_firstName.length() >= 10)
        std::cout << std::right << std::setw(10) << _firstName.substr(0, 9) << ". |";
    else
        std::cout << std::right << std::setw(10) << _firstName << "  |";
    if (_lastName.length() >= 10)
        std::cout << std::right << std::setw(10) << _lastName.substr(0, 9) << ". |";
    else
        std::cout << std::right << std::setw(10) << _lastName << "  |";
    if (_nickname.length() >= 10)
        std::cout << std::right << std::setw(10) << _nickname.substr(0, 9) << ". |";
    else
        std::cout << std::right << std::setw(10) << _nickname << "  |";
    std::cout << std::endl;
}
