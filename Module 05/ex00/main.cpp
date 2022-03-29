#include "Bureaucrat.hpp"


int     main()
{
    int grade;
    std::cin >> grade ;
    try
    {

        if (grade > 150)
        {
            throw Bureaucrat::GradeTooLowException();
        }
    
    }

    catch (std::exception& e)
    {
            std::cout<<"chditha\n";

    }



    return 0;
}