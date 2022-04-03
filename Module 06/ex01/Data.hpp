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

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);


};

std::ostream &	operator<<( std::ostream & ostr, Data const & instance);

#endif