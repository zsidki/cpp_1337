#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :  Form("PresidentialPardonForm", 25, 5), _target("unknown") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :  Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : 
Form("PresidentialPardonForm", 25, 5), _target(form.getTarget())
{
    *this = form;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &instance)
{
    this->_target = instance.getTarget();
    return (*this);
}

const std::string PresidentialPardonForm::getTarget() const
{
    return(this->_target);
}

std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & form)
{
    std::cout << form.getName() << " ==> " << " Grade "<< form.getGrade();
    return ostr;
}

void    PresidentialPardonForm::execute( Bureaucrat const & execute) const
{
    if (!this->getSignGrade())
        throw FormNotSignedException(this->getName());
    else if (execute.getGrade() > this->getGradExecute())
        throw GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}