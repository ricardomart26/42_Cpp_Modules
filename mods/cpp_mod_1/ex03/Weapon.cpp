#include "Weapon.hpp"

Weapon::Weapon() : _type("No type: Default constructor")
{
	std::cout << "Weapon constructed <type: " << _type << ">\n";
}

Weapon::Weapon( const std::string& t ) : _type(t)
{
	std::cout << "Weapon constructed <type: " << _type << ">\n";
}

Weapon::~Weapon()
{
	std::cout << "Weapon deconstructed <type: " << _type << ">\n";
}

const std::string&	Weapon::getType( void )
{
	const std::string& type = _type;
	return type;
}

void	Weapon::setType( const std::string &type )
{
	_type = type;
}
