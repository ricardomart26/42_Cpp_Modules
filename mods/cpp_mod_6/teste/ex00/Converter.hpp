#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

enum e_types {
	ERROR,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL_ONE
};

class Converter 
{
	public:

		Converter(const std::string &str);
		Converter(const Converter &copy);
		const Converter	&operator=(const Converter &rhs);
		~Converter();

		e_types	find_type();
		void	displayInt();
		void	displayChar();
		void	displayFloat();
		void	displayDouble();

	private:

		std::string _conv;
		int			_sw;
		e_types 	_type;
};

#endif
