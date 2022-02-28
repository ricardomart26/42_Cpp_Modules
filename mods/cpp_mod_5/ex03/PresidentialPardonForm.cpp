#include "PresidentionalPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
	: Form("Random", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

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
	std::cout << "<" << _target << "> has been pardoned by Zafod Beeblebrox\n";
}
