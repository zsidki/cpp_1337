#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{

    try
    {       // ------- Create Bureaucrat and Form -------------- //
        Bureaucrat bureaucrat("Zak", 9); // if Grade < 1 OR Grade > 150 will catch an excep
        Form form("W3", 5, 11);
            // ------------ incrementGrade ------------ //
        //bureaucrat.IncrementGrade();
          // ------------ decrementGrade ------------ //
        //bureaucrat.DecrementGrade();
        //bureaucrat.DecrementGrade();
         // ------------ Sign the form ------------ //
        //form.beSigned(bureaucrat);
        bureaucrat.signForm(form);
          // ----------  Operator Overload << -------//
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl; 
    }
  
    return (0);
}