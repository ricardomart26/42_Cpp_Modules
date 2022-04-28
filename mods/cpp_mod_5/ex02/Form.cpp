#include "Form.hpp"

Form::Form(): _nameForm("Empty"), _gradeRequired(50), _gradeExecute(20)
{
	std::cout << "-- Class Form: Default Constructor --\n";
	_canSign = false;
	_isSigned = false;
}

Form::Form(const std::string &name, int reqGrade, int execGrade)
	: _nameForm(name), _gradeRequired(reqGrade), _gradeExecute(execGrade)
{
	std::cout << "-- Class Bureaucrat: Constructed with name: " << name 
	<< " , required grade: " << reqGrade 
	<< " and executionGrade: " << execGrade << " --\n";
	_canSign = false;
	_isSigned = false;
	if (_gradeRequired > 150 || _gradeExecute > 150)
		throw GradeTooLowException();
	else if (_gradeRequired <= 0 || _gradeExecute <= 0)
		throw GradeTooHighException();

}

Form::Form(const Form &copy) 
	: _nameForm(copy._nameForm), _gradeRequired(copy._gradeRequired), _gradeExecute(copy._gradeExecute)
{
	std::cout << "-- Class Form: Copy constructor --\n";
	_isSigned = copy._isSigned;
	_canSign = copy._canSign;
}


Form &Form::operator=(const Form& rhs)
{
	std::cout << "-- Class Form: Assignment operator --\n";
	if (this == &rhs)
		return (*this);
	*const_cast<int*>(&_gradeRequired) = rhs._gradeRequired;
	*const_cast<int*>(&_gradeExecute) = rhs._gradeExecute;
	_isSigned = rhs._isSigned;
	_canSign = rhs._canSign;
	return (*this);
}

Form::~Form()
{
	std::cout << "-- Class Form: Destroyed object " << _nameForm << " --\n";
}


void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeRequired())
		this->setCanSign(true);
	else
		throw GradeTooLowException();
}

void	Form::signForm(Bureaucrat &b)
{
	if (this->getCanSign() == true)
	{
		std::cout << b.getName() << " signs " << this->getNameForm() << "\n";
		this->setIsSigned(true);
	}
	else
		std::cout << b.getName() << " cannot sign " << this->getNameForm() << " because grade is to low\n";
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
	os << rhs.getNameForm() << " the form has this required grade "
	<< rhs.getGradeRequired() << "\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade to High (under 1)\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade to low (over 150)\n");
}

const char *Form::CannotExecuteGrade::what() const throw()
{
	return ("Exception: Can't execute, grade is too low!\n");
}

const char *Form::CannotExecuteSign::what() const throw()
{
	return ("Exception: Can't execute, didnt sign for yet!\n");
}
