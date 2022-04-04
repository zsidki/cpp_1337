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

    //----- Constructor & Destructor -------//
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &form);
    ~PresidentialPardonForm();

    //----- Assignment Operator -------//
    PresidentialPardonForm & operator = (const PresidentialPardonForm &instance);

    //--------- Getter -----------//
    const std::string getTarget() const;

    //------- Member function ---------//
    void    execute( Bureaucrat const & executor) const;

};

//----- Assignment Operator -------//
std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & instance);

#endif