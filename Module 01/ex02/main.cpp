# include <iostream>
# include <string>
# include <iomanip>

int     main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR;
    stringPTR =  &string;
    std::string& stringREF = string; // stringREF refers to string

    std::cout << "*********      The memory address        *********"<< std::endl;
    std::cout << " of the string variable =>  "<< &string << std::endl;
    std::cout << " held by stringPTR =>  " << stringPTR << std::endl;
    std::cout << " held by stringREF => " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "*********            The value           *********"<< std::endl;
    std::cout << " The value of the string variable =>  "<< string << std::endl;
    std::cout << " The value pointed to by stringPTR =>  " << *stringPTR << std::endl;
    std::cout << " The value pointed to by stringREF => " << stringREF << std::endl;
}