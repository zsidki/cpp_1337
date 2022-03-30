#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

class RobotomyRequestForm
{
protected:

private:

public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm &instance);
    ~RobotomyRequestForm();
    RobotomyRequestForm & operator = (const RobotomyRequestForm &instance);

};

std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & instance);

#endif