#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T& a, T& b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T x, T y)
{
    if (x < y)
        return x;
    else
        return y;
}

template <typename T>
T max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

#endif