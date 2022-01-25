#include "Karen.hpp"

typedef void	(Karen::*KarenFuncPtr[]) (void);

void	Karen::complain(const std::string& level)
{
	KarenFuncPtr	ArrayPtrFunc = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			option;

	(!level.compare("DEBUG")) && (option = 0);
	(!level.compare("INFO")) && (option = 1);
	(!level.compare("WARNING")) && (option = 2);
	(!level.compare("ERROR")) && (option = 3);

	if (option < 0 && option > 3)
		std::cout << "Option not found, Karen is limited";
	else
		(this->*ArrayPtrFunc[option]) ();

}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." <<  std::endl;
}
