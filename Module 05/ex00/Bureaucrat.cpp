#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if (grade < 1)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(void) : _name("Unknown") {}

Bureaucrat::Bureaucrat(const Bureaucrat &instance)
{
    *this = instance;
}   

Bureaucrat::~Bureaucrat(){}

std::string     Bureaucrat::getName() const 
{
    return(this->_name);
}

int     Bureaucrat::getGrade() const 
{
    return(this->_grade);
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &instance)
{
    this->_grade = instance.getGrade();
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const  throw()
{
    return "Grade Too High ";
}

const char* Bureaucrat::GradeTooLowException::what() const  throw()
{
    return "Grade Too Low ";
}