#include "Harl.hpp"


void	Harl::complain(const std::string& level)
{
	setLogLevel(level);

	switch (getLogLevel())
	{
		case DEBUG:
			debug();
			info();
			warning();
			error();
			break ;
		case INFO:
			info();
			warning();
			error();
			break ;
		case WARNING:
			warning();
			error();
			break ;
		case ERROR:
			error();
			break ;
		default:
			notfound();
	}
}

void	Harl::setLogLevel(const std::string& level)
{
	_logLevel = NOT_FOUND;
	(!level.compare("DEBUG")) && (_logLevel = DEBUG);
	(!level.compare("INFO")) && (_logLevel = INFO);
	(!level.compare("WARNING")) && (_logLevel = WARNING);
	(!level.compare("ERROR")) && (_logLevel = ERROR);
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

void	Harl::notfound( void )
{
	std::cout << "Option not found, Harl is limited" << std::endl;
}
