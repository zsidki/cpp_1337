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
    int	_grade;
    int	_grad_execute;

public:
    //----- Constructor & Destructor -------//
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &instance);
    ~Bureaucrat();

    //----- Assignment Operator -------//
    Bureaucrat & operator = (const Bureaucrat &instance);

    //--------- Getter -----------//
    std::string getName() const;
    int	getGrade() const;
    int	getGradExecute() const;

    //------- Member function ---------//
    void	IncrementGrade();
	void    DecrementGrade();
    void    signForm(Form& form);
    void    executeForm(Form const & form);

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
};

//----- Assignment Operator -------//
std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & bureaucrat);

#endif
