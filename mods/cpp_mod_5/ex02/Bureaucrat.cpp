#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "empty";
	_grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) 
{
	_name = name;
	if (grade > 150 || grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_grade = rhs._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::IncreaseGrade()
{
	if (--_grade <= 0)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::DecreaseGrade()
{
	if (++_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}	

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low, over 150");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high, smaller than 1");
}

void	operator<<(std::ostream &os, Bureaucrat &rhs)
{
	os << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">\n";
}

