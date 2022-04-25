#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{

	public:

		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal & operator=(const Animal &rhs);

		virtual void	makeSound(void) const;
		virtual	void	set_idea(const std::string &idea);
		virtual void	print_idea(const int idx) const;
	
		std::string		getType(void) const;
		void			setType(std::string);

	protected:

		std::string _type;

};

#endif
