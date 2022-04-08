#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
    private:
        int *_array;
        unsigned int _size;
        unsigned int _index;

    public:
        Span(unsigned int n );
        ~Span();

    void	addNumber( int nb);
    int		shortestSpan();
    int		longestSpan();

    template <typename Iterator>
    void addNumber(Iterator start, Iterator last)
    {
        while (start != last)
            addNumber(*start++);
    }

    class NotSpanException : public std::exception
    {
        const char * what () const throw();
    };

    class NoSpaceLeftException : public std::exception
    {
        const char * what () const throw();
    };
};
void    sort(int *array, int n);

#endif