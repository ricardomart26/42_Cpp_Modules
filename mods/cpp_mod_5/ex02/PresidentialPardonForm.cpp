#include "PresidentionalPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
	: Form("Presidential Pardon", 25, 5)
{
	std::cout << "-- Class PresidentialPardonForm: Constructor with target: " << target << " --\n";
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "-- Class PresidentialPardonForm: Destroyed object " << _target << " --\n";
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "-- Class PresidentialPardonForm: Destroyed object " << _target << " --\n";
}


PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) 
{
	std::cout << "-- Class PresidentialPardonForm: Operator overloaded --\n";
	_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	if (this->getIsSigned() == false)
	{
		delete this;
		throw CannotExecuteSign();
	}
	if (this->getGradeExecute() < b.getGrade())
	{
		delete this;
		throw CannotExecuteGrade();
	}
	std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
}
