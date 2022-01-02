#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	
}

MateriaSource::~MateriaSource()
{
	
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i;

	for (int i = 0; i < SIZE && _materia[i]; i++);
	if (i >= SIZE)
	{
		std::cout << "No slots found for materia in learnMateria\n";
		return ;
	}
	std::cout << "Available slot in materia is " << i << '\n';
	_materia[i] = m->clone();
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < SIZE && this->_materia[i]; i++)
	{
		if (this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	std::cout << "Type still not in materia array in createMateria\n";
}
