#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <iostream>
#include <fstream>


class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &instance);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &instance);

    void    execute( Bureaucrat const & executor) const;
    const std::string getTarget() const;

};

std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance);



#endif