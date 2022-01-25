#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <stdexcept>
# include <limits>

# define FOUND 0
#define MAX_NUMBER_SIZE 9

class Contact {

	public:
		
		Contact();
		~Contact();

		std::string	get_input(const std::string& prompt);
		void	set_values(int i);
		void	print_search();

	private:
		
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		size_t		_phoneNumber;
		std::string	_secret;
		size_t		_index;

};

class Phonebook {

	public:

		Contact users[8];

};

#endif
