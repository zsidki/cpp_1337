#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if(grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
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


void    Bureaucrat::IncrementGrade()
{
    if ((this->_grade - 1) < 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void    Bureaucrat::DecrementGrade()
{
    if ((this->_grade + 1) > 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

int     Bureaucrat::getGrade() const 
{
	return(this->_grade);
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &bureaucrat)
{
	this->_grade = bureaucrat.getGrade();
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

std::ostream &	operator<<( std::ostream &ostr, Bureaucrat const & bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return ostr;
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
	if(form.getSignGrade() == true )
		std::cout << _name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << _name << " couldn’t sign " << form.getName() << " because ";
		std::cout << this->getGrade() << " > " << form.getSignGrade() << std::endl;
	}
}

int Bureaucrat::getGradExecute() const
{
    return(this->_grad_execute);
}

void    Bureaucrat::executeForm(Form const & form)
{
    if ( this->_grade <= form.getGradExecute())
    {
        std::cout << this->_name << " execute the from :" << form.getName() << "." << std::endl;
        form.execute(*this);
    }
    else
        std::cout << this->_name << " cannot execute " << form.getName()
                << ", because his grade is low to execute it " << form.getName() << "." << std::endl;
}