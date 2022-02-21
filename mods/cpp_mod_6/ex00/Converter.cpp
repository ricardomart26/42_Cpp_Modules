#include "Converter.hpp"

Converter::Converter()
{

}

Converter::Converter(const std::string &str)
{
	_conv = str;
	if (isalpha(_conv[0]) && _conv.length() == 1)
	{
		_sw = 1;
		_convC = _conv[0];
	}
	else
	{
		for (size_t i = 0; i < _conv.length(); i++)
		{
			if (i == 0 && !isdigit(_conv[i]))
				break;
			else
			{
				if (isalpha(_conv[i]) && _conv[i] != 'f')
				{
					_conv = "fy";
					break;
				}
				else if (_conv[i] == 'f' && i + 1 != _conv.length())
				{
					_conv = "fy";
					break;
				}
			}
		}
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
	if (_sw == 1)
		std::cout << "int: " << static_cast<int>(_convC) << std::endl; 
	else
	{
		try {
			size_t pos = _conv.find('.', 0);
			if (pos == std::string::npos)
			{
				_convI = std::stoi(_conv);
				std::cout << "int: " << _convI << std::endl;
			}
			else
			{
				_convI = std::stoi(_conv.substr(0, pos));
				std::cout << "int: " << _convI << std::endl;
			}
		}
		catch (...)
		{
			std::cout << "int: impossible\n";
			_sw = 2;
		}
	}

}

void	Converter::displayChar()
{
	if (_sw == 1)
		std::cout << "char: " << _convC << std::endl; 
	else
	{
		try {
			if (_sw == 2)
				throw 2;
			_convC = static_cast<char>(_convI);
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
	if (_sw == 1)
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(_convC) << "f" << std::endl; 
	else
	{
		try {
			float f = std::stof(_conv);
			std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
		}
		catch (...)
		{
			std::cout << "float: impossible\n";
		}
	}
}

void	Converter::displayDouble()
{
	if (_sw == 1)
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(_convC) << std::endl; 
	else
	{
		try {
			double d = std::stod(_conv);
			std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
		}
		catch (...)
		{
			std::cout << "double: impossible\n";
		}
	}
}
