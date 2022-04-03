#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{

private:
    unsigned int uintptr_t;

public:
    Data(void);
    Data(const Data &instance);
    ~Data();
    Data & operator = (const Data &instance);

    //uintptr_t serialize(Data* ptr);

};

std::ostream &	operator<<( std::ostream & ostr, Data const & instance);

#endif