#include "Karen.hpp"
#include <map>

typedef void	(Karen::*func_ptr[]) (void);

int main(int ac, char **av)
{
	Karen clang;

	if (ac < 2)
	{
		std::cout << "Usage of program: ./Program_name <Log level>" << std::endl;
		return (1);
	}

	clang.setLogLevel(av[1]);
	if (clang.getLogLevel() == NOT_FOUND)
		return (1);

	switch (clang.getLogLevel())
	{
		case DEBUG:
			clang.complain("DEBUG");
			clang.complain("INFO");
			clang.complain("WARNING");
			clang.complain("ERROR");
			break ;
		case INFO:
			clang.complain("INFO");
			clang.complain("WARNING");
			clang.complain("ERROR");
			break ;
		case WARNING:
			clang.complain("WARNING");
			clang.complain("ERROR");
			break ;
		case ERROR:
			clang.complain("ERROR");
			break ;
		default:
			std::cout << "Log Not Found" << std::endl;
	}

	return (0);
}