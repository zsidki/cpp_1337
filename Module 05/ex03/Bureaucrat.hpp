#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    int _grad_execute;

public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &instance);
    ~Bureaucrat();
    Bureaucrat & operator = (const Bureaucrat &instance);

    std::string getName() const;
    int getGrade() const;

    void	IncrementGrade();
	void    DecrementGrade();

    void    signForm(Form& form);

    void executeForm(Form const & form);
    int getGradExecute() const;

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


std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & bureaucrat);

#endif