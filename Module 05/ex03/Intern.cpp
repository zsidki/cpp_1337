#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){}

Intern::Intern(const Intern &intern)
{
    *this = intern;
}

Intern::~Intern(){}

Intern & Intern::operator = (const Intern &intern)
{
    (void)intern;
    return (*this);
}

Form*  Intern::makeShrubberyCreationForm(std::string const & target) const
{
    return new ShrubberyCreationForm(target);
}
Form*  Intern::makeRobotomyRequestForm(std::string const & target) const
{
    return new RobotomyRequestForm(target);
}
Form*  Intern::makePresidentialPardonForm(std::string const & target) const
{
    return new PresidentialPardonForm(target);
}

Form * Intern::makeForm( std::string form_name, std::string target)
{
    std::string const form_names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    Form* (Intern::*forms[3])(std::string const &) const = 
    {
        &Intern::makeRobotomyRequestForm, 
        &Intern::makePresidentialPardonForm,
        &Intern::makeShrubberyCreationForm
    };

    for (int i = 0; i < 3; i++)
        if (!form_name.compare(form_names[i]))
        {
            std::cout << "Intern creates " << form_name << "." << std::endl;
            return (this->*(forms[i]))(target);
        }
    std::cout << "Unkown Form" << std::endl;
    return (NULL);
}
