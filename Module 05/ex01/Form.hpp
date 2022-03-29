#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    const int _grade;
	bool _is_signed;


public:
    Form(void);
    Form(std::string name, int grade, bool is_signed);
	Form(const Form& form);
    ~Form();

    Form & operator = (const Form &instance);

	bool	beSigned(const Bureaucrat& bureaucrat);

    std::string getName() const;
    int getGrade() const;

    class GradeTooHighException : public std::exception
    {   public:
            virtual const char* what() const  throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

};

std::ostream &	operator<<( std::ostream & ostr, Form const & form);

#endif