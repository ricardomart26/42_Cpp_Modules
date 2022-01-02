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

		void		makeSound(void) const;
		std::string	getType(void) const;
		void		setType(std::string);

	private:
		std::string _type;

};

#endif
