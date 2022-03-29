#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &instance);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void check_grade(int i);

    Bureaucrat & operator = (const Bureaucrat &instance);

    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const  throw();

    };

    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw();

    };


};


std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance);

#endif