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
    //----- Constructor & Destructor -------//
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &instance);
    ~Bureaucrat();

    //--------- Getter -----------//
    std::string getName() const;
    int getGrade() const;

    //----- Assignment Operator -------//
    Bureaucrat & operator = (const Bureaucrat &instance);

    //------- Member function ---------//
    void    check_grade(int i);
    void	IncrementGrade();
	void    DecrementGrade();


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