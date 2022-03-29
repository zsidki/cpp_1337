#include "Form.hpp"

Form::Form(void) : _name("Unknown"), _grade(1), _is_signed(false) {}

Form::Form(std::string name, int grade, bool is_signed) : _name(name), _grade(grade), _is_signed(is_signed)
{
    if(grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();

}

Form::Form(const Form& form) : _name(form._name), _grade(form._grade), _is_signed(form._is_signed)
{}

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

int     Form::getGrade() const 
{
    return(this->_grade);
}

const char* Form::GradeTooHighException::what() const  throw()
{
    return "Grade Too High ";
}

const char* Form::GradeTooLowException::what() const  throw()
{
    return "Grade Too Low ";
}

bool	Form::beSigned(const Bureaucrat& bureaucrat){

    if(this->_grade >= bureaucrat.getGrade())
        _is_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &	operator<<( std::ostream &ostr, Form const & form)
{
    std::cout << form.getName() << ", Form grade " << form.getGrade();
    return ostr;
}
