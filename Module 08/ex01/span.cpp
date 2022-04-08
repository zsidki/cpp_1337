#include "span.hpp"

Span::Span(unsigned int N)
{
    if (N <= 0)
        throw Span::NoSpaceLeftException();
    _size = N;
    _array = new int[N];
    _index = 0;
}

Span::~Span()
{
    delete[] _array;
}

//add many numbers to your Span in one call
void Span::addNumber(int nb)
{
    if (_index == _size)
        throw Span::NoSpaceLeftException();
    _array[_index] = nb;
    _index++;
}


void    sort(int *array, int n)
{
    int i;
    int j;
    int tmp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

//return the shortest span between two elements
int     Span::shortestSpan()
{
    unsigned int i;
    unsigned int j;
    int min;

    if(this->_index < 2)
        throw Span::NotSpanException();
    sort(_array, _index);
    min = _array[1] - _array[0];
    for (i = 0; i < _index - 1; i++)
    {
        for (j = i + 1; j < _index; j++)
        {
            if (_array[j] - _array[i] < min)
                min = _array[j] - _array[i];
        }
    }
    return (min);
}

//return the longest span between two elements
int     Span::longestSpan()
{
    if(this->_index < 2)
        throw Span::NotSpanException();
    sort(_array, _index);
    return(this->_array[_index - 1] - this->_array[0]);
}

const   char* Span::NotSpanException::what() const throw()
{
    return ("Exception there is no a span!");
}

const char* Span::NoSpaceLeftException::what() const throw()
{
    return ("Exception there is no space left!");
}