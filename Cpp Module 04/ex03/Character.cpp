#include "Character.hpp"

Character::Character()
{
	std::cout << "Character class Constructed\n";
}

Character::Character(const Character &copy)
{
	std::cout << "Character class copied\n";
}

Character::~Character()
{
	std::cout << "Character class Deconstructed\n";
}

Character & Character::operator=(const Character &obj)
{
	(void)obj;
	std::cout << "Character class operator override\n";
	return (*this);
}

