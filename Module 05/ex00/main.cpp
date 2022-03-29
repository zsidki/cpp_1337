#include "Bureaucrat.hpp"


int     main()
{

    try
    {
        // Bureaucrat b("Bureaucrat1", 10);
        // std::cout << b << std::endl;

        Bureaucrat b2("Bureaucrat1", 0);
        std::cout << b2 << std::endl;

        // Bureaucrat b3("Bureaucrat1", 151);
        // std::cout << b3 << std::endl;
    }

    catch (std::exception& e)
    {
        std::cout<<"exception : "<< e.what() <<std::endl;
    }

    return 0;
}