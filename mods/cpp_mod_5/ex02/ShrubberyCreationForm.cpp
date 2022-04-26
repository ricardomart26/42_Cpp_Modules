#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("Shruberry", 145, 137)
{
	std::cout << "-- Class ShrubberyCreationForm: Constructor with target: " << target << " --\n";
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "-- Class ShrubberyCreationForm: Destroyed object " << _target << " --\n";

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) 
{
	std::cout << "-- Class ShrubberyCreationForm: Operator overloaded --\n";
	_target = rhs._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) 
{
	std::cout << "-- Class ShrubberyCreationForm: Copy constructor --\n";
	*this = copy;
}



void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
	{
		delete this;
		throw CannotExecuteSign();
	}
	if (this->getGradeExecute() < executor.getGrade())
	{
		delete this;
		throw CannotExecuteGrade();
	}
	AsciiTree();
}

void	ShrubberyCreationForm::AsciiTree() const
{
	
	std::ofstream out(_target + "_shrubbery");

	out << "			*			\n";
	out << "			'			\n";
	out << "		   '''			\n";
	out << "		  '''''			\n";
	out << "		 '''''''		\n";
	out << "	    '''''''''		\n";
	out << "		   |||			\n";
	out << "		   |||			\n";
	out.close();
}
