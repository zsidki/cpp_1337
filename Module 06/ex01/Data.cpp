#include "Data.hpp"

//It takes a pointer and converts it to the unsigned integer type uintptr_t
uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t> (ptr);
}

//It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

//reinterpret_cast 
//only guarantees that if you cast a pointer to a different type, 
//and then reinterpret_cast it back to the original type, you get the original value. 