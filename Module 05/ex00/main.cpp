#include "Bureaucrat.hpp"

int main ()
{
    try
    {     // ---------- Create Bureaucrat -------------- //
        Bureaucrat bureaucrat("Vladimir Poutine", 10); // if Grade < 1 OR Grade > 150 will catch an excep
          // -------------- incrementGrade ------------ //
        //bureaucrat.IncrementGrade();
          // ------------ decrementGrade -------------- //
        //bureaucrat.DecrementGrade();
        //bureaucrat.DecrementGrade();
          // ----------  Operator Overload << --------- //
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl; 
    }
    return (0);
}
