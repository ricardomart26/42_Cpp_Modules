#include "Harl.hpp"

typedef void	(Harl::*HarlFuncPtr[]) (void);

void	Harl::complain(const std::string& level)
{
	HarlFuncPtr	arrayPtrFunc = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int				option = -1;

	(!level.compare("DEBUG")) && (option = 0);
	(!level.compare("INFO")) && (option = 1);
	(!level.compare("WARNING")) && (option = 2);
	(!level.compare("ERROR")) && (option = 3);

	if (option < 0 || option > 3)
		std::cout << "Option not found, Harl is limited\n";
	else
		(this->*arrayPtrFunc[option]) ();

}

void	Harl::setLogLevel(const std::string& level)
{
	int	log;

	(!level.compare("DEBUG")) && (log = 0);
	(!level.compare("INFO")) && (log = 1);
	(!level.compare("WARNING")) && (log = 2);
	(!level.compare("ERROR")) && (log = 3);
	if (log < 0 || log > 3)
	{
		std::cout << "Option not found, Harl is limited";
		_logLevel = NOT_FOUND;
	}
	else
	{
		if (log == 0)
			_logLevel = DEBUG;
		else if (log == 1)
			_logLevel = INFO;
		else if (log == 2)
			_logLevel = WARNING;
		else if (log == 3)
			_logLevel = ERROR;
	}
}

log_level	Harl::getLogLevel( void )
{
	return _logLevel;
}


void	Harl::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." <<  std::endl;
}
