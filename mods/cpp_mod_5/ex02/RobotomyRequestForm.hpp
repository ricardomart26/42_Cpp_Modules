#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <stdlib.h>

/**
 * @sign: 72
 * @exec: 45 
 * Faz barulhos de perfuração (drilling), e se o <target> foi
 * robotomizado com sucesso (50% das vezes), se não, indica
 * que aconteceu um erro (Possivelmente fazer com pares).
 */
class RobotomyRequestForm: public Form
{

	public:

		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		
		void	execute(const Bureaucrat &executor) const;

	private:

		std::string	_target;
};

#endif
