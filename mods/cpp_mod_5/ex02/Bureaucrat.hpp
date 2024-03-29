#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
	public:

		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat& rhs);
		
		void	executeForm(const Form &from);

		const std::string	&getName() const;
		int					getGrade() const;
		void				IncreaseGrade();
		void				DecreaseGrade();
		class				GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();
		};
		class				GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();
		};

	private:

		int			_grade;
		const std::string	_name;
};

void	operator<<(std::ostream &os, Bureaucrat &rhs);

#endif
