#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Converter 
{
	public:

		Converter();
		Converter(const std::string &str);
		Converter(const Converter &copy);
		const Converter	&operator=(const Converter &rhs);
		~Converter();

		void	displayInt();
		void	displayChar();
		void	displayFloat();
		void	displayDouble();

	private:

		int			_convI;
		char		_convC;
		std::string _conv;
		int			_sw;
};

#endif
