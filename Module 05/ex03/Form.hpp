#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string _name;
    const int _grade_signed;
    const int _grad_execute;
	bool _is_signed;


public:
    Form(void);
    Form(std::string name, int grade_signed, int grad_execute);
	Form(const Form& form);
    ~Form();
    virtual void    execute( Bureaucrat const & execute) const = 0;

    Form & operator = (const Form &instance);

	void	beSigned(const Bureaucrat& bureaucrat);

    std::string getName() const;
    int getGrade() const;
    int getSignGrade() const;
    int getGradExecute() const;

    void executeForm(Form const & form);

    class GradeTooHighException : public std::exception
    {   public:
            virtual const char* what() const  throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
        private:
            std::string _nameform;
        public:
            FormNotSignedException(std::string nameform);
            virtual const char* what() const throw() ;
            ~FormNotSignedException() throw();
    };
    

};

std::ostream &	operator<<( std::ostream & ostr, Form const & form);

#endif