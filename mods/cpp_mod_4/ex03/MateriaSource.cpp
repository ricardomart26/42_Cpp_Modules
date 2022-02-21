#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < SIZE; i++)
		delete this->_materia[i];
	for (int i = 0; i < SIZE && copy._materia[i]; i++)
		this->_materia[i] = copy._materia[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SIZE; i++)
		delete this->_materia[i];	
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	for (int i = 0; i < SIZE && this->_materia[i]; i++)
		delete this->_materia[i];
	for (int i = 0; i < SIZE && obj._materia[i]; i++)
		this->_materia[i] = obj._materia[i];
	return (*this);
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