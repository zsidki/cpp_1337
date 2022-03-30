#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

class PresidentialPardonForm
{
protected:

private:

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &instance);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator = (const PresidentialPardonForm &instance);

};

std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & instance);

#endif