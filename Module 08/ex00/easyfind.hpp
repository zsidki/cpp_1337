#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm> // std::find

template <typename T>
T   easefind(T x, int number)
{
    vector<T>::iterator it;

    // STL algorithm "find" returns the iterator to the element found if it finds it
    it =std::find(x.begin(), x.end(), number);
    if (it != x.end())
        std::cout << "The number " << number << " is found in " << x << endl;
    else
        std::cout<< "The number " << number << " not found " << std::endl;

}

#endif