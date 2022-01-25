#include "Form.hpp"

Form::Form(): _nameForm("Empty"), _gradeRequired(50), _gradeExecute(20)
{
	_canSign = false;
	_isSigned = false;
}

Form::Form(std::string name, int reqGrade, int execGrade)
	: _nameForm(name), _gradeRequired(reqGrade), _gradeExecute(execGrade)
{
	_canSign = false;
	_isSigned = false;
	if (_gradeRequired > 150)
		throw Form::GradeTooLowException();
	else if (_gradeRequired <= 0)
		throw Form::GradeTooHighException();
}

Form::~Form()
{

}

void	Form::signForm(Bureaucrat &b)
{
	if (this->getCanSign() == true)
	{
		std::cout << "<" << b.getName() << "> signs <" << this->getNameForm() << ">\n";
		this->setIsSigned(true);
	}
	else
		std::cout << "<" << b.getName() << "> cannot sign <" << this->getNameForm() << "> because grade is to low\n";
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeRequired())
		this->setCanSign(true);
}

const std::string	&Form::getNameForm() const
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

bool	Form::getCanSign() const
{
	return (_canSign);
}

void	Form::setCanSign(bool goodGrade)
{
	_canSign = goodGrade;
}

bool	Form::getIsSigned() const
{
	return (_isSigned);
}

void	Form::setIsSigned(bool isSigned)
{
	_isSigned = isSigned;
}

void	operator<<(std::ostream &os, const Form &rhs)
{
	os << "<" << rhs.getNameForm() << "> the form has this required grade <" << rhs.getGradeRequired() << ">\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade to High (under 1)\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade to low (over 150)\n");
}

const char *Form::CannotExecuteGrade::what() const throw()
{
	return ("Can't execute, grade is too low!\n");
}

const char *Form::CannotExecuteSign::what() const throw()
{
	return ("Can't execute, didnt sign for yet!\n");
}
