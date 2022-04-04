#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{

    Intern someRandomIntern;
    Form* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        Bureaucrat bureaucrat("Zak", 151);
        if (rrf)
        {
            bureaucrat.signForm(*rrf);
            bureaucrat.executeForm(*rrf);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << *rrf << std::endl;
    return (0);
}