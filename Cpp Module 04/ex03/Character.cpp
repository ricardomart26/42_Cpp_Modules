#include "Character.hpp"

Character::Character()
{
	std::cout << "Character class Constructed\n";
	_name = "Empty";
	for (int i = 0; i < SIZE; i++)
		_materia[i] = NULL;
}

Character::Character(const std::string &name)
{
	std::cout << "Character class Constructed\n";
	_name = name;
	for (int i = 0; i < SIZE; i++)
		_materia[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "Character class copied\n";
	for (int i = 0; i < SIZE; i++) // Delete every materia in object
		delete this->_materia[i];
	for (int i = 0; i < SIZE; i++) // Assigns the copy materias to object, and we use the clone to deep copy
		this->_materia[i] = copy._materia[i]->clone();
	this->_name = copy._name;
}

Character::~Character()
{
	std::cout << "Character class Deconstructed\n";
	for (int i = 0; i < SIZE; i++)
		delete _materia[i];
}

Character & Character::operator=(const Character &obj)
{
	std::cout << "Character class operator override\n";
	for (int i = 0; i < SIZE; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		this->_materia[i] = obj._materia[i]->clone();
	}
	this->_name = obj._name;
	return (*this);
}

const std::string &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	int i;

	for (i = 0; i < SIZE && this->_materia[i]; i++);
	if (i >= SIZE)
	{
		std::cout << "No slots found for materia in equip\n";
		return ;
	}
	std::cout << "index " << i << '\n';
	this->_materia[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= SIZE && idx < 0)
	{
		std::cout << "Unequip index dont match, is bigger than 0 or smaller than 3\n";
		return ;
	}
	_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= SIZE && idx < 0)
	{
		std::cout << "Use index dont match, is bigger than 0 or smaller than 3\n";
		return ;
	}
	if (_materia[idx] == NULL)
	{
		std::cout << "_materia in idx " << idx << " is NULL\n";
		return ;
	}
	_materia[idx]->use(target);
}
