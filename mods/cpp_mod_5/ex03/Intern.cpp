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

// Intern  &Intern::operator = (const Intern &rhs)
// {
//     *this = rhs;
//     return (*this);
// }

Form    *Intern::makeForm(const std::string &name, const std::string &target)
{
    std::map<std::string, Form *> intern;

    intern
    while (!name.compare("ShrubberyCreationForm"))
    {
        std::cout << "Intern creates <" << name << ">\n";
        return (new ShrubberyCreationForm(target));
    }
    while (!name.compare("PresidentialPardonForm"))
    {
        std::cout << "Intern creates <" << name << ">\n";
        return (new PresidentialPardonForm(target));
    }        
    while (!name.compare("RobotomyRequestForm"))
    {
        std::cout << "Intern creates <" << name << ">\n";
        return (new RobotomyRequestForm(target));
    }
    std::cout << "Form not found\n";
    return ( nullptr );
}
