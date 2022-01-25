#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal & operator=(const Animal &obj);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string _type;

};

#endif
