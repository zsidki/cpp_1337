#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :  Form("RobotomyRequestForm", 72, 45), _target("unknown") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : 
Form("RobotomyRequestForm", 72, 45), _target(form.getTarget())
{
    *this = form;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &instance)
{
    this->_target = instance.getTarget();
    return (*this);
}

const std::string RobotomyRequestForm::getTarget() const
{
    return(this->_target);
}

std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & form)
{
    std::cout << form.getName() << form.getGrade();
    return ostr;
}

void    RobotomyRequestForm::execute( Bureaucrat const & execute) const
{
    if (!this->getSignGrade())
        throw FormNotSignedException(this->getName());
    else if (execute.getGrade() > this->getGradExecute())
        throw GradeTooLowException();
    else
         std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}
