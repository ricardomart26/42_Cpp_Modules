#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Empty")
{
	std::cout << "-- Class Bureaucrat: Default Constructor --\n";
	_grade = 1;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	std::cout << "-- Class Bureaucrat: Constructed with name: " << name << " and grade: " << grade <<  " --\n";
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade <= 0)
		throw GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) :  _grade(copy._grade), _name(copy._name)
{
	std::cout << "-- Class Bureaucrat: Copy constructer --\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "-- Class Bureaucrat: Assignment operator --\n";
	if (this == &rhs)
		return (*this);
	_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "-- Class Bureaucrat: Destroyed object " << _name << " --\n";
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
		throw GradeTooHighException();
}

void	Bureaucrat::DecreaseGrade()
{
	if (++_grade > 150)
		throw GradeTooLowException();
}	

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low, over 150");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too high, smaller than 1");
}

void	operator<<(std::ostream &os, Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "\n";
}

