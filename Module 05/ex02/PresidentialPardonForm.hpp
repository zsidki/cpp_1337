#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class PresidentialPardonForm : public Form
{
private:
    std::string _target;

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &form);
    ~PresidentialPardonForm();

    const std::string getTarget() const;

    PresidentialPardonForm & operator = (const PresidentialPardonForm &instance);

    void    execute( Bureaucrat const & executor) const;

};

std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & instance);

#endif