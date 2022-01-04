#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat : public std::exception
{
	public:

		Bureaucrat(const std::string name, int grade);

		const std::string	getName();
		int					getGrade();

		const char *GradeTooHighException();
		const char *GradeTooLowException();

	private:

		int					_grade;
		const std::string	_name;

};


#endif
