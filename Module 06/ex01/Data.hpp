#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <cstdint>

class Data
{

private:
    unsigned int uintptr_t;

public:
    Data(void);
    Data(const Data &instance);
    ~Data();
    Data & operator = (const Data &instance);



};

std::ostream &	operator<<( std::ostream & ostr, Data const & instance);

#endif