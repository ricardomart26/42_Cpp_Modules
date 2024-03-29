#include "Harl.hpp"

void	Harl::complain(const std::string &level)
{
	_option = 4;
	(!level.compare("DEBUG")) && (_option = 0);
	(!level.compare("INFO")) && (_option = 1);
	(!level.compare("WARNING")) && (_option = 2);
	(!level.compare("ERROR")) && (_option = 3);
	switch (_option)
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			notfound();
			break;
	}
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
