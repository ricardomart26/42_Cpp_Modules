#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("S26", 145, 137)
{
	std::cout << "-- Class ShrubberyCreationForm: Constructor with target: " << target << " --\n";
	_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "-- Class ShrubberyCreationForm: Destroyed object " << _target << " --\n";

}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned())
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
	std::ofstream out(_target.c_str());

	out << "			'			\n";
	out << "		   '''			\n";
	out << "		  '''''			\n";
	out << "		 '''''''		\n";
	out << "	    '''''''''		\n";
	out << "		   |||			\n";
	out << "		   |||			\n";
	out.close();
}
