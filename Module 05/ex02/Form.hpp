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

    //----- Constructor & Destructor -------//
    Form(void);
    Form(std::string name, int grade_signed, int grad_execute);
	Form(const Form& form);
    ~Form();

    //----- Assignment Operator -------//
    Form & operator = (const Form &instance);

    //--------- Getter -----------//
    std::string getName() const;
    int getGrade() const;
    int getSignGrade() const;
    int getGradExecute() const;

    //------- Member function ---------//
	void	beSigned(const Bureaucrat& bureaucrat);
    void executeForm(Form const & form);
    virtual void    execute( Bureaucrat const & execute) const = 0;

    //---------- Exception ------------//
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
            //----- Constructor & Destructor -------//
            FormNotSignedException(std::string nameform);
            ~FormNotSignedException() throw();

            virtual const char* what() const throw() ;
    };
};

//----- Assignment Operator -------//
std::ostream &	operator<<( std::ostream & ostr, Form const & form);

#endif
