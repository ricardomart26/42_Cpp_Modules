#include "Form.hpp"

Form::Form(): _nameForm("Empty"), _gradeRequired(50), _gradeExecute(20)
{
	std::cout << "-- Class Form: Default Constructor --\n";
	_signed = false;
}

Form::Form(const std::string &name, int requiredGrade, int executionGrade): _nameForm(name), _gradeRequired(requiredGrade), _gradeExecute(executionGrade)
{
	std::cout << "-- Class Bureaucrat: Constructed with name: " << name 
	<< " , required grade: " << requiredGrade 
	<< " and executionGrade: " << executionGrade << " --\n";
	_signed = false;
	if (_gradeRequired > 150)
		throw GradeTooLowException();
	else if (_gradeRequired <= 0)
		throw GradeTooHighException();
}

Form::Form(const Form &copy) 
	: _nameForm(copy._nameForm), _gradeRequired(copy._gradeRequired), _gradeExecute(copy._gradeExecute)
{
	std::cout << "-- Class Form: Copy constructer --\n";
	_signed = false;
}


Form &Form::operator=(const Form& rhs)
{
	std::cout << "-- Class Form: Assignment operator --\n";
	if (this == &rhs)
		return (*this);
	*const_cast<int*>(&_gradeRequired) = rhs._gradeRequired;
	*const_cast<int*>(&_gradeExecute) = rhs._gradeExecute;
	_signed = rhs._signed; 
	return (*this);
}

Form::~Form()
{
	std::cout << "-- Class Form: Destroyed object " << _nameForm << " --\n";
}

const std::string	&Form::getName() const
{
	return (_nameForm);
}

int	Form::getGradeRequired() const
{
	return (_gradeRequired);
}

int	Form::getGradeExecute() const 
{
	return (_gradeExecute);
}

bool	Form::getSigned() const 
{
	return (_signed);
}

void	Form::signForm(const Bureaucrat &b) const
{
	(_signed && std::cout << b.getName() << " signed " << _nameForm << "\n");
	(!_signed && std::cout << b.getName() << " couldn't sign " << _nameForm << " because is not signed\n");
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gradeRequired)
		_signed = true;
	else
		throw GradeTooLowException();
}

void	operator<<(std::ostream &os, Form &rhs)
{
	os << rhs.getName() << " the form has this required grade " << rhs.getGradeRequired() << "\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception of : Grade to High (under 1)");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade to low (over 150)");
}
