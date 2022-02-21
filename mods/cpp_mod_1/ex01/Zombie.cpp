#include "Zombie.hpp"

Zombie::Zombie() : _name ("NoName")
{
	std::cout << "Created Zombie " << _name << "!\n";
}

Zombie::Zombie( std::string name ) : _name( name )
{
	std::cout << "Created Zombie " << _name << "!\n";
}

Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie " << _name << "!\n";
}

void	Zombie::set_name( const std::string& name )
{ 
	_name = name;
}

void	Zombie::annouce( void )
{ 
	std::cout << "Here comes the " << _name << std::endl; 
}
