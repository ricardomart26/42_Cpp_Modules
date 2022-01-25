#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <cstring>

class WrongAnimal
{
	
	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal &obj);

		void		makeSound(void) const;
		std::string	getType(void) const;
		void		setType(std::string);

	private:

		std::string _type;
};

#endif
