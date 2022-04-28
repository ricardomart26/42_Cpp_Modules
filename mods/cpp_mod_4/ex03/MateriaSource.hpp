#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class Amateria;
#define SIZE 4

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &obj);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:

		AMateria *_materia[SIZE];

};

#endif
