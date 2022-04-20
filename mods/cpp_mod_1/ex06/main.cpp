#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl clang;

	if (ac != 2)
	{
		std::cout << "Usage of program: ./Program_name <Log level>" << std::endl;
		return (1);
	}

	clang.complain(std::string(av[1]));
	return (0);
}
