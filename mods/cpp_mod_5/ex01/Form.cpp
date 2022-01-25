#include "Form.hpp"

Form::Form(): _nameForm("Empty"), _gradeRequired(50), _gradeExecute(20)
{
	_signed = false;
}

Form::Form(std::string name, int requiredGrade, int executionGrade): _nameForm(name), _gradeRequired(requiredGrade), _gradeExecute(executionGrade)
{
	_signed = false;
	if (_gradeRequired > 150)
		throw Form::GradeTooLowException();
	else if (_gradeRequired <= 0)
		throw Form::GradeTooHighException();
}

Form::~Form()
{

}

const std::string	&Form::getName()
{
	return (_nameForm);
}

int	Form::getGradeRequired()
{
	return (_gradeRequired);
}

int	Form::getGradeExecute()
{
	return (_gradeExecute);
}

bool	Form::getSigned()
{
	return (_signed);
}

void	Form::signForm(Bureaucrat &b)
{
	(_signed && std::cout << "<" << b.getName() << "> signs <" << _nameForm << ">\n");
	(!_signed && std::cout << "<" << b.getName() << "> cannot sign <" << _nameForm << "> because grade is to low\n");
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= _gradeRequired)
		_signed = true;
}

void	operator<<(std::ostream &os, Form &rhs)
{
	os << "<" << rhs.getName() << "> the form has this required grade <" << rhs.getGradeRequired() << ">\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade to High (under 1)");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade to low (over 150)");
}
