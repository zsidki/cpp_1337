#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &form);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator = (const ShrubberyCreationForm &instance);

        void    execute( Bureaucrat const & executor) const;
        const std::string getTarget() const;

};

std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance);



#endif