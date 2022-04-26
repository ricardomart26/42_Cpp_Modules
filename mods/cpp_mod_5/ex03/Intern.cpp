#include "Intern.hpp"
#include <map>

Intern::Intern()
{

}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
}

Intern  &Intern::operator = (const Intern &rhs)
{
    (void) rhs;
    return (*this);
}

Form    *Intern::makeForm(const std::string &name, const std::string &target)
{
    if (!name.compare("shrubbery request"))
    {
        std::cout << "Intern creates " << name << "\n";
        return (new ShrubberyCreationForm(target));
    }
    if (!name.compare("presidential request"))
    {
        std::cout << "Intern creates " << name << "\n";
        return (new PresidentialPardonForm(target));
    }        
    if (!name.compare("robotomy request"))
    {
        std::cout << "Intern creates " << name << "\n";
        return (new RobotomyRequestForm(target));
    }
    std::cout << "Form " << name << "not found\n";
    return ( NULL );
}
