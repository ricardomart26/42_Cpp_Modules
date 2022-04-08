#include "Contact.hpp"
#include <string>
#include <string.h>
#include <cctype>

Contact::Contact()
{
    _firstName = "";
    _lastName = "";
    _nickname = "";
    _index = 0;
    _phoneNumber = "";
    _secret = "";
}

Contact::~Contact() 
{
	std::cout << "Destroyed object Contact" << std::endl;
}

std::string Contact::get_input(const std::string& prompt)
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

void    Contact::set_values(int i)
{
    _firstName = get_input("Enter the first Name: ");
    _lastName = get_input("Enter the last Name: ");
    _nickname = get_input("Enter the Nickname: ");
    _phoneNumber = get_input("Enter the Phone number: ");
    _secret = get_input("Enter the Darkest Secret: ");
    _index = i;
}


int     Contact::validate_index(std::string& index_to_find)
{
    if (index_to_find == "")
        return (1);
    while (index_to_find.find_last_not_of("1234567890", 0) != std::string::npos)
    {
        std::cout << "Please enter a number a positive value.sadasd..\n";
        return (1);
    }
    size_t idx = std::atoi(index_to_find.c_str());
    if (idx < 0 || idx > _index)
    {
        std::cout << "Index not found, try again\n";
        return (1);
    }
    return (0);
}
 

int    Contact::ask_for_index()
{
    std::string index_to_find;
    std::string answer;
    std::string lower_answer;

    answer = get_input("Do you want to search by Index? [yes/no] ");
    for (size_t i = 0; i < answer.size(); i++)
    {
        lower_answer.push_back(tolower(answer[i]));
    }
    if (answer.compare("yes") || answer.compare("y"))
    {
        while (validate_index(index_to_find))
            index_to_find = get_input("Enter the index: ");
        return (std::atoi(index_to_find.c_str()));
    }
    else if (answer.compare("no") || answer.compare("n"))
        return -1;
    else
    {
        std::cout << "Wrong answer\n";
        ask_for_index();
    }
    return (-1);
}

void    Contact::print_index() 
{
    std::cout << "Firstname: " << _firstName << "\n";
    std::cout << "Lastname: " << _lastName << "\n";
    std::cout << "nickname: " << _nickname << "\n";
    std::cout << "phone number: " << _phoneNumber << "\n";
    std::cout << "secret: " << _secret << "\n";
}

void    Contact::print_search() 
{
    std::cout << "| " << std::right << std::setw(11) << _index << "|";
    if (_firstName.length() >= 10)
        std::cout << std::right << std::setw(12) << _firstName.substr(0, 9) << ".|";
    else
        std::cout << std::right << std::setw(13) << _firstName << "|";
    if (_lastName.length() >= 10)
        std::cout << std::right << std::setw(11) << _lastName.substr(0, 9) << ".|";
    else
        std::cout << std::right << std::setw(12) << _lastName << "|";
    if (_nickname.length() >= 10)
        std::cout << std::right << std::setw(11) << _nickname.substr(0, 9) << ".|";
    else
        std::cout << std::right << std::setw(12) << _nickname << "|";
    std::cout << std::endl;
}
