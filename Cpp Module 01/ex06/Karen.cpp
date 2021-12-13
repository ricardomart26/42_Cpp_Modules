#include "Karen.hpp"

typedef void	(Karen::*func_ptr[]) (void);

void	Karen::complain(std::string level)
{
	func_ptr	array_ptr_to_func = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			option;

	(!level.compare("DEBUG")) && (option = 0);
	(!level.compare("INFO")) && (option = 1);
	(!level.compare("WARNING")) && (option = 2);
	(!level.compare("ERROR")) && (option = 3);

	if (option < 0 && option > 3)
		std::cout << "Option not found, Karen is limited";
	else
		(this->*array_ptr_to_func[option]) ();

}

void	Karen::set_log_level(std::string level)
{
	int	log;

	(!level.compare("DEBUG")) && (log = 0);
	(!level.compare("INFO")) && (log = 1);
	(!level.compare("WARNING")) && (log = 2);
	(!level.compare("ERROR")) && (log = 3);
	if (log < 0 && log > 3)
	{
		std::cout << "Option not found, Karen is limited";
		_log_level = NOT_FOUND;
	}
	else
	{
		if (log == 0)
			_log_level = DEBUG;
		else if (log == 1)
			_log_level = INFO;
		else if (log == 2)
			_log_level = WARNING;
		else if (log == 3)
			_log_level = ERROR;
	}
}

log_level	Karen::get_log_level()
{
	return _log_level;
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
