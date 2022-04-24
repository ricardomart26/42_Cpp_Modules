#include "PresidentionalPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
	: Form("Random", 25, 5)
{
	std::cout << "-- Class PresidentialPardonForm: Constructor with target: " << target << " --\n";
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "-- Class PresidentialPardonForm: Destroyed object " << _target << " --\n";
}

void	PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	// Verificar estes deletes
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
