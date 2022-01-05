#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "empty";
	_grade = 0;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) 
{
	_name = name;
	try {
		if (grade > 150 || grade <= 0)
			throw grade;
		_grade = grade;
	} catch (int g)
	{
		if (g > 150)
			GradeTooLowException();
		else
			GradeTooHighException();
	}
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& obj)
{
	
}

const std::string	Bureaucrat::getName(void)
{
	return (_name);
}

int	Bureaucrat::getGrade(void)
{
	return (_grade);
}

void	Bureaucrat::GradeTooHighException()
{
	std::cout << "Grade to high for " << this->getName() <<  ": "<< this->getGrade() << " should be positive!";
}

void	Bureaucrat::GradeTooLowException()
{
	std::cout << "Grade to low for " << this->getName() <<  ": "<< this->getGrade() << " should be smaller than 151!";
}

void	Bureaucrat::IncreaseGrade()
{
	try {
		if (--_grade <= 0)
			throw _grade;
	} catch (int g)
		GradeTooHighException();
}

void	Bureaucrat::DecreaseGrade()
{
	try {
		if (++_grade > 150)
			throw _grade;
	} catch (int g)
		GradeTooLowException();
}
