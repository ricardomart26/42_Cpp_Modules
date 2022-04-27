#include "Converter.hpp"

// Need copy constructor


int	isInt(const std::string conv)
{
	size_t i = 0;
	if (conv[0] == '-' || conv[0] == '+')
		i++;
	for (; i < conv.length(); i++)
	{
		if (!isdigit(conv[i]))
			return (0);
	}
	return (1);
}

e_types	Converter::find_type()
{

	if (isalpha(_conv[0]) && _conv.length() == 1)
		return (CHAR);
	else if (!isdigit(_conv[0]) && ((_conv[0] != '-' && _conv[0] != '+') || !isdigit(_conv[1])))
	{
		if ((!_conv.compare(0, _conv.length(), "nan") || !_conv.compare(0, _conv.length(), "nanf") || 
			!_conv.compare(0, _conv.length(), "+inff") || !_conv.compare(0, _conv.length(), "-inff") || !_conv.compare(0, _conv.length(), "inff") || 
			!_conv.compare(0, _conv.length(), "+inf") || !_conv.compare(0, _conv.length(), "-inf") || !_conv.compare(0, _conv.length(), "inf")))
			return (SPECIAL_ONE);
		return (ERROR);
	}
	else
	{
		if (isInt(_conv))
			return (INT);
		for (size_t i = 0; i < _conv.length(); i++)
		{
			if (isalpha(_conv[i]) && _conv[i] != 'f')
				return (ERROR);
			else if (_conv[i] == 'f' && i + 1 != _conv.length())
				return (ERROR);
		}
		return (FLOAT);
	}

}

Converter::Converter(const std::string &str)
{
	_conv = str;
	_type = find_type();
	std::cout << "type: " << _type <<std::endl;
	switch (_type) {
		case CHAR:
			std::cout << "char: " << str[0] << std::endl;
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(str[0]) << "f" << std::endl; 
			std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
			break;
		case INT:
			try {
				int convI = std::stoi(_conv);
				if (isprint(static_cast<char>(convI)))
					std::cout << "char: " << static_cast<char>(convI) << std::endl;
				else if (convI < 0 || convI > 127)
					std::cout << "char: impossible\n";
				else
					std::cout << "char: Non displayable\n";
				std::cout << "int: " << convI << std::endl;
				std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(convI) << "f" << std::endl; 
				std::cout << "double: " << static_cast<double>(convI) << std::endl;
			
			} catch (...) {
				std::cout << "Int: impossibel\n";
			}
			break;
		case FLOAT:
			std::cout << _conv << std::endl;
			try {
				float f = std::stof(_conv);
				std::cout << "int: " << static_cast<int>(f) << std::endl;
				if (isprint(static_cast<char>(f)))
					std::cout << "char: " << static_cast<char>(f) << std::endl;
				else if (f < 0 || f > 127)
					std::cout << "char: impossible\n";
				else
					std::cout << "char: Non displayable\n";
				std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(f) << std::endl;
			}
			catch (...) {
				std::cout << "float: impossible\n";
			}
			break;
		case DOUBLE:
			try {
				double d = std::stod(_conv);
				std::cout << "int: " << static_cast<int>(d) << std::endl;
				if (isprint(static_cast<char>(d)))
					std::cout << "char: " << static_cast<char>(d) << std::endl;
				else if (d < 0 || d > 127)
					std::cout << "char: impossible\n";
				else
					std::cout << "char: Non displayable\n";
				std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(d) << "f" << std::endl;
				std::cout << "double: " << d << std::endl;
			}
			catch (...) {
				std::cout << "float: impossible\n";
			}
			break;
		case ERROR:
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: impossible\n";
			std::cout << "double: impossible\n";
			break;
		case SPECIAL_ONE:
			std::cout << _conv << std::endl;
			float out = std::stof(_conv);
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << std::fixed << std::setprecision(1) << "float: " << out << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(out) << std::endl;

		
			break;
	}
}

Converter::Converter(const Converter &copy)
{
	*this = copy;
}


const Converter &Converter::operator=(const Converter &rhs)
{
	if (this == &rhs)
		return (*this);
	_conv = rhs._conv;
	_sw = rhs._sw;
	return (*this);
}

Converter::~Converter()
{
	
}


void	Converter::displayFloat()
{
	try {
		float f = std::stof(_conv);
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	}
	catch (...) {
		std::cout << "float: impossible\n";
	}
}

void	Converter::displayDouble()
{

}
