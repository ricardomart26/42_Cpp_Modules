#include "Weapon.hpp"

const std::string&	Weapon::getType()
{
	const std::string& type = this->_type;
	return type;
}

void	Weapon::setType(const std::string type)
{
	this->_type = type;
}
