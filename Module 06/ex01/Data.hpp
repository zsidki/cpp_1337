#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
//#include <typeinfo>
typedef struct s_data
{
	int age;
	std::string name;
	std::string city;
}				Data;

//It takes a pointer and converts it to the unsigned integer type uintptr_t
uintptr_t serialize(Data* ptr);

//It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* deserialize(uintptr_t raw);

#endif