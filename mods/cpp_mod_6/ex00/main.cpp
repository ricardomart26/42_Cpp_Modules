#include "Converter.hpp"

/**
 * @links:  
 * convert char[] to string - https://www.geeksforgeeks.org/convert-character-array-to-string-in-c/
 * 
 */

void	stripMe(std::string &str, const std::string set)
{
	size_t	stPos;
	size_t	endPos;

	stPos = str.find_first_not_of(set);
	if (stPos == std::string::npos)
		stPos = 0;	
	str.erase(0, stPos);
	endPos = str.find_last_not_of(set);
	if (endPos == std::string::npos)
		return ;
	str.erase(endPos + 1, str.length());
}

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Usage: " << av[0] <<" char \n";
		return (1);
	}
	std::string str(av[1]);
	stripMe(str, " \n\t\r\f\v");

	Converter c(str);
	c.displayInt();
	c.displayChar();
	c.displayFloat();
	c.displayDouble();

	return (0);
}
