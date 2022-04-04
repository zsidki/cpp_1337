#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

    private:
        std::string _target;

    public:

        //----- Constructor & Destructor -------//
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &target);
        ~RobotomyRequestForm();

        //----- Assignment Operator -------//
        RobotomyRequestForm & operator = (const RobotomyRequestForm &form);

        //--------- Getter -----------//
        const std::string getTarget() const;

        //------- Member function ---------//
        void    execute( Bureaucrat const & executor) const;

};

//----- Assignment Operator -------//
std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & instance);

#endif