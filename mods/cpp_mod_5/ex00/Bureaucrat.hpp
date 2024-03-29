#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat &operator=(const Bureaucrat& rhs);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		const std::string	&getName(void) const;
		int					getGrade() const;
		void				IncreaseGrade();
		void				DecreaseGrade();
		
		class	GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();
		};
	
	private:

		int					_grade;
		const std::string	_name;
};

void	operator<<(std::ostream &os, Bureaucrat &rhs);

#endif
