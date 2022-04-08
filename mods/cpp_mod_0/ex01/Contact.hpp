#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <stdexcept>
# include <limits>
# include <stdlib.h>


# define FOUND 0
#define MAX_NUMBER_SIZE 9

class Contact {

	public:
		
		Contact();
		~Contact();

		std::string	get_input(const std::string& prompt);
		void		set_values(int i);
		void		print_search();
		int 	   	ask_for_index();
		int     	validate_index(std::string& index_to_find);
		void    	print_index();

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_secret;
		size_t		_index;

};

#endif
