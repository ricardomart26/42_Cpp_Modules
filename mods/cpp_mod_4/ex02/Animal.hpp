#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:

		virtual ~Animal();

		virtual void		makeSound(void) const = 0;
		std::string	getType(void) const;
		void		setType(std::string);

	private:

		std::string _type;

};

#endif
