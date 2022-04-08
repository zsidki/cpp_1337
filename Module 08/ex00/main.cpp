#include "easyfind.hpp"

void print(int i)
{
    std::cout << i << std::endl;
}

int main( void )
{
    std::list<int>                      list;

    list.push_back(1337);
    list.push_back(19);
    list.push_back(42);
    list.push_back(0);

    easyfind(list, 42);

    easyfind(list, 10);

    std::cout<< "\n//------ list of numbers ------//\n";
    std::for_each(list.begin(), list.end(), print);

    return 0;
}