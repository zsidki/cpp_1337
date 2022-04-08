#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm> // std::find
#include <list>

template <typename T>
void   easyfind(T x, int number)
{
    // STL algorithm "find" returns the iterator to the element found if it finds it
    
    if (std::find(x.begin(), x.end(), number) != x.end())
        std::cout << "\nThe number is " << number  << std::endl;
    else
        std::cout<< "\nThe number " << number << " not found. " << std::endl;

}

#endif