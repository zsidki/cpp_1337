#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Karen::info( void )
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Karen::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Karen::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Karen::complain( std::string level )
{
    typedef void (Karen::*Ptr)(void);
    Ptr ptr[4]= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for( int i=0; i< 4; i++ )
    {
        if(!complains[i].compare(level))
        {
            // ptr[i]();
            (this->*ptr[i])();
        }
    }
}



// data-type  class-name ::* pointer-name = &class-name ::  member-function-name;
// (pointer-to-object->*pointer-to-member-function)(argument-list);


