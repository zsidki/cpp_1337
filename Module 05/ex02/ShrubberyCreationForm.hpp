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
        //----- Constructor & Destructor -------//
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &form);
        ~ShrubberyCreationForm();

        //----- Assignment Operator -------//
        ShrubberyCreationForm & operator = (const ShrubberyCreationForm &instance);

        //--------- Getter -----------//
        const std::string getTarget() const;

        //------- Member function ---------//
        void    execute( Bureaucrat const & executor) const;

};

//----- Assignment Operator -------//
std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance);

#endif