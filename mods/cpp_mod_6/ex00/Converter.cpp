#include "Converter.hpp"

// Need copy constructor

Converter::Converter()
{

}

void	print_impossibles(void)
{
	std::cout << "char: impossible"  << std::endl; 
	std::cout << "int: impossible" << std::endl; 
	std::cout << "float: impossible" << std::endl; 
	std::cout << "double: impossible" << std::endl;
}

Converter::Converter(const std::string &str)
{
	_conv = str;
	notInt = false;
	if (isalpha(_conv[0]) && _conv.length() == 1)
	{
		_sw = 1;
		std::cout << "char: " << _conv[0] << std::endl; 
		std::cout << "int: " << static_cast<int>(_conv[0]) << std::endl; 
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(_conv[0]) << "f" << std::endl; 
		std::cout << std::fixed << "double: " << static_cast<double>(_conv[0]) << std::endl;
	}
	else if (!_conv.compare(0, _conv.length(), "inf") || !_conv.compare(0, _conv.length(), "+inf") 
	|| !_conv.compare(0, _conv.length(), "-inf") || !_conv.compare(0, _conv.length(), "inff") || 
	!_conv.compare(0, _conv.length(), "+inff") || !_conv.compare(0, _conv.length(), "-inff") || 
	!_conv.compare(0, _conv.length(), "nan") || !_conv.compare(0, _conv.length(), "nanf")) {
		notInt = true;
	}
	else
	{
		int counter = 0;
		for (size_t i = 0; i < _conv.length(); i++)
		{	
			if (_conv[i] == '.')
			{
				if (counter == 1)
					_sw = 1;
				counter++;
			}
			if (i == 0 && !isdigit(_conv[i]) && (_conv[i] != '-' && _conv[i] != '+'))
				_sw = 1;
			else if (isalpha(_conv[i]) && _conv[i] != 'f')
				_sw = 1; 
			else if (_conv[i] == 'f' && i + 1 != _conv.length())
				_sw = 1; 
		}
		if (_sw == 1)
			print_impossibles();
	}

}

Converter::Converter(const Converter &copy)
{
	(void)copy;
}


const Converter &Converter::operator=(const Converter &rhs)
{
	return (rhs);
}

Converter::~Converter()
{
	
}

void	Converter::displayInt()
{
	if (_sw != 1)
	{
		try {
			_double = strtod(_conv.c_str(), NULL);
			if (notInt)
				throw 2;
			std::cout << "int: " << static_cast<int>(_double) << std::endl;
		}
		catch (...)
		{
			std::cout << "int: impossible\n";
		}
	}
}

void	Converter::displayChar()
{
	if (_sw != 1)
	{
		try {
			if (notInt)
				throw 2;
			_convC = static_cast<char>(_double);
			if (isprint(_convC))
				std::cout << "char: " << _convC << std::endl;
			else
				throw 1;
		}
		catch (int ex)
		{
			if (ex == 1)
				std::cout << "char: Non displayable\n";
			else if (ex == 2)
				std::cout << "char: impossible\n";
		} 
	}
}

void	Converter::displayFloat()
{
	if (_sw != 1)
	{
		try {
			size_t pos = _conv.find('.', 0);
			int size = 0;
			if (pos != std::string::npos)
				size = _conv.length() - pos - 1;
			if (size <= 1 || pos == std::string::npos)
				size = 2;
			std::cout << std::fixed << std::setprecision(size - 1) << "float: " << static_cast<float>(_double) << "f" << std::endl;
		}
		catch (...)
		{
			std::cout << "float: impossible\n";
		}
	}
}

void	Converter::displayDouble()
{
	if (_sw != 1)
	{
		try {
			size_t pos = _conv.find('.', 0);
			int size = 0;
			if (pos != std::string::npos)
				size = _conv.length() - pos - 1;
			if (size <= 1 || pos == std::string::npos)
				size = 2;
			std::cout << std::fixed << std::setprecision(size - 1) << "double: " << _double << std::endl;
		}
		catch (...)
		{
			std::cout << "double: impossible\n";
		}
	}
}
