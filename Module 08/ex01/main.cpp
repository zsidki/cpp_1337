#include "span.hpp"
#include <vector>

int main()
{
    std::cout<<"\n// add numbers \n";

    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout<<"\n// add multiple numbers in one call of addnumber\n";

    Span sp2 = Span(10);

    std::vector<int> v1;

    v1.push_back(6);
    v1.push_back(3);
    v1.push_back(17);
    v1.push_back(9);
    v1.push_back(11);

    sp2.addNumber(v1.begin(),v1.end());

    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    try
    {
        Span sp2 = Span(0);
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Span sp3 = Span(10);
        std::cout << sp3.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}