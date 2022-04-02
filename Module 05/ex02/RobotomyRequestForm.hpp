#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

    private:
        std::string _target;

    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &target);
        ~RobotomyRequestForm();

        const std::string getTarget() const;

        RobotomyRequestForm & operator = (const RobotomyRequestForm &form);
        void    execute( Bureaucrat const & executor) const;

};

std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & instance);

#endif