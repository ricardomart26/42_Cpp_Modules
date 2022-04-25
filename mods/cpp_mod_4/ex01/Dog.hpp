#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog &operator=(const Dog &obj);
		
		void	set_idea(const std::string &idea);
		void	print_idea(const int idx) const;
        void makeSound(void) const;

	private:
		Brain *_my_brain;
};

#endif
