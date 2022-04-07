#include <iostream>
#include "Array.hpp"

int     main()
{
    std::cout << "//--- create normal array ---//\n";
    int * a = new int();
    std::cout<< "a = " << *a << std::endl;


    std::cout << "//--- create new type array ---//\n";
    Array<int> a1(4);
    std::cout << "SIZE of a1 == " << a1.size() << std::endl;

    for(unsigned int i = 0; i < a1.size(); i++)
        a1[i] = i;

    std::cout<<"\n// -------- Print Values a1 ---------- //\n";
    for(unsigned int i = 0; i < a1.size(); i++)
        std::cout<< "a1 = " << a1[i] << std::endl;


    //------ a1 = a2 -----//
    Array<int> a2(a1);

    std::cout<<"\n// -------- Print Values a2 ---------- //\n";
    for(unsigned int i = 0; i < a2.size(); i++)
        std::cout<< "a2 = " << a2[i] << std::endl;


    std::cout<<"\n// -------- size a2 > a1 ---------- //\n";
    try
    {
        a2[10] = 84;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';

    }

    std::cout<<"\n// ------ empty array -------- //\n";
    
    Array<int> empty;
    try
    {
        empty[0] = 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout<<"\n// ------ const array -------- //\n";
    const Array<int> ax(3);
    //ax[0] = 10;
    std::cout << "size const array = " << ax.size() << std::endl;


    return 0;
}