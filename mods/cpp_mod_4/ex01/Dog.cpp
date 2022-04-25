#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "-- Dog class: Constructed --" << std::endl;
	_type = "Dog";
	_my_brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "-- Dog class: Copied --" << std::endl;
	this->_type = copy._type;
	_my_brain = new Brain();
	*_my_brain = *copy._my_brain;
}

Dog::~Dog()
{
	std::cout << "-- Dog class: Deconstructed --" << std::endl;
	delete _my_brain;
}

Dog & Dog::operator=(const Dog &obj)
{
	std::cout << "-- Dog class: Assignment operator! --" << std::endl;
	Animal::operator=(obj);
	_my_brain = obj._my_brain;
	return (*this);
}

void	Dog::set_idea(const std::string &idea)
{
	_my_brain->make_idea(idea);
}

void	Dog::print_idea(const int idx) const
{
	std::cout << idx << "º: " << _my_brain->get_idea(idx) << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Ão Ão" << std::endl;
}


