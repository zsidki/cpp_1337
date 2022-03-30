#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

#include <iostream>

class ShrubberyCreationForm : public Form
{
protected:

private:

public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const ShrubberyCreationForm &instance);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &instance);

};

std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance);

#endif