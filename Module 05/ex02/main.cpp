// #include "Bureaucrat.hpp"


// int     main()
// {

//     try
//     {
//         // Bureaucrat b("Bureaucrat1", 10);
//         // std::cout << b << std::endl;
//         Form    f("fooorm", 1, );
//         Bureaucrat b2("Bureaucrat1", 0);
//         std::cout << b2 << std::endl;

//         // Bureaucrat b3("Bureaucrat1", 151);
//         // std::cout << b3 << std::endl;
//     }

//     catch (std::exception& e)
//     {
//         std::cout<<"exception : "<< e.what() <<std::endl;
//     }

//     return 0;
// }

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{

    try
    {       // ------- Create Bureaucrat and Form -------------- //
        Bureaucrat bureaucrat("Zak",137); // if Grade < 1 OR Grade > 150 will catch an excep
        ShrubberyCreationForm shrubberyCreationForm("_shrubbery");

            // ------------ incrementGrade ------------ //
        bureaucrat.IncrementGrade();
          // ------------ decrementGrade ------------ //
        // bureaucrat.decrementGrade();
        // bureaucrat.decrementGrade();
         // ------------ Sign the form ------------ //
        // form.beSigned(bureaucrat);
        bureaucrat.signForm(shrubberyCreationForm);

        bureaucrat.executeForm(shrubberyCreationForm);

          // ----------  Operator Overload << -------//
        //std::cout << bureaucrat << std::endl;
        std::cout << shrubberyCreationForm << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl; 
    }
  
    return (0);
}
