#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "-- Cat class: Constructed --" << std::endl;
	setType("Cat");
	_my_brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	std::cout << "-- Cat class: Copied --" << std::endl;
    setType(copy.getType());
	_my_brain = new Brain();
	*_my_brain = *copy._my_brain;
}

Cat::~Cat()
{
	std::cout << "-- Cat class: Deconstructed --" << std::endl;
	delete _my_brain;
}

Cat & Cat::operator=(const Cat &obj)
{
	std::cout << "-- Cat class: Assignment operator! --" << std::endl;
	if (this == &obj)
		return (*this);
	Animal::operator=(obj);
	// Brain::operator=(_my_brain);
	_my_brain = obj._my_brain;
	return (*this);
}

void	Cat::set_idea(const std::string &idea)
{
	_my_brain->make_idea(idea);
}


void	Cat::print_idea(const int idx) const
{
	if (!_my_brain->get_idea(idx).empty())
	    std::cout << idx << "º: " << _my_brain->get_idea(idx) << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miau Miau" << std::endl;
}

