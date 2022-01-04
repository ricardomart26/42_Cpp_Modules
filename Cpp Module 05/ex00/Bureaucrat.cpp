#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) 
: _name(name), _grade(grade) 
{
	if (grade > 150)
		throw "Grade to high";
	if (grade < 0)
		throw "Grade to low";
}

const std::string	Bureaucrat::getName(void)
{
	return (_name);
}

int	Bureaucrat::getGrade(void)
{
	return (_grade);
}

const char	*Bureaucrat::GradeTooHighException()
{

}

const char	*Bureaucrat::GradeTooLowException()
{

}
