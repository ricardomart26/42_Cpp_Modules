#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{

	public:
		Form();
		~Form();
		Form(const Form &copy);
		Form(const std::string &name, int requiredGrade, int executionGrade);
		Form &operator=(const Form &rhs);

		void				signForm(const Bureaucrat &b) const;
		const std::string	&getName() const;
		void				beSigned(const Bureaucrat &b);
		int					getGradeRequired() const;
		int					getGradeExecute() const;
		bool				getSigned() const;


		class GradeTooHighException: public std::exception
		{
			const char	*what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char	*what() const throw();
		};

	private:
		const std::string	_nameForm;
		bool				_signed;
		volatile const int	_gradeRequired;
		volatile const int	_gradeExecute;
};

void	operator<<(std::ostream &os, Form &rhs);

#endif
