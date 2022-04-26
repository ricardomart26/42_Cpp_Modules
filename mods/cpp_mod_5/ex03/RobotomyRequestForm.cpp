#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("Robotomy Request", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) 
{
	std::cout << "-- Class RobotomyRequestForm: Operator overloaded --\n";
	_target = rhs._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) 
{
	std::cout << "-- Class RobotomyRequestForm: Copy constructor --\n";
	*this = copy;
}



void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned() == false)
	{
		delete this;
		throw CannotExecuteSign();
	}
	if (this->getGradeExecute() < executor.getGrade())
	{
		delete this;
		throw CannotExecuteGrade();
	}
	std::cout << "Drrrrrrr\n";
	if (rand() % 2)
		std::cout << "Robotomy was sucessfull\n";
	else
		std::cout << "Robotomy was a failure\n";
}
