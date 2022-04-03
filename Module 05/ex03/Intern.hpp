#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{
public:
    Intern(void);
    Intern(const Intern &intern);
    ~Intern();

    Intern & operator = (const Intern &intern);

    Form*    makeForm(std::string name, std::string target);

    Form*  makeShrubberyCreationForm(std::string const & target) const ;
    Form*  makeRobotomyRequestForm(std::string const & target) const ;
    Form*  makePresidentialPardonForm(std::string const & target) const ;
    

};

std::ostream &	operator<<( std::ostream & ostr, Intern const & intern);

#endif