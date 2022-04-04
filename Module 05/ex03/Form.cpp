#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form(void) : _name("Unknown"), _grade_signed(1), _grad_execute(1), _is_signed(false){}

Form::Form(std::string name, int grade_signed, int grad_execute) : _name(name), _grade_signed(grade_signed), _grad_execute(grad_execute), _is_signed(false)
{
    if(grade_signed < 1)
        throw GradeTooHighException();
    if (grade_signed > 150)
        throw GradeTooLowException();

}

Form::Form(const Form& form) : _name(form._name), _grade_signed(form._grade_signed), _grad_execute(form._grad_execute), _is_signed(form._is_signed){}

Form::~Form(){}

Form& Form::operator = (const Form &form)
{
    this->_is_signed = form._is_signed;
    return (*this);
}

std::string     Form::getName() const 
{
    return(this->_name);
}

int Form::getGrade() const 
{
    return(this->_grade_signed);
}

int Form::getSignGrade() const
{
    return(this->_is_signed);
}

int Form::getGradExecute() const
{
    return(this->_grad_execute);
}

const char* Form::GradeTooHighException::what() const  throw()
{
    return "Grade Too High ";
}

const char* Form::GradeTooLowException::what() const  throw()
{
    return "Grade Too Low ";
}
const char* Form::FormNotSignedException::what() const  throw()
{
    return "Form Not Signed ";
}

Form::FormNotSignedException::FormNotSignedException(std::string nameform) : _nameform(nameform){}

Form::FormNotSignedException::~FormNotSignedException() throw(){}


void	Form::beSigned(const Bureaucrat& bureaucrat)
{
    if(this->_grade_signed >= bureaucrat.getGrade())
        _is_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &	operator<<( std::ostream &ostr, Form const & form)
{
    std::cout << form.getName() << ", Form grade " << form.getGrade();
    return ostr;
}

