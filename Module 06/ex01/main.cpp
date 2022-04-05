#include "Data.hpp"

int     main()
{
    Data data = {24, "Zak", "Agadir"};
    uintptr_t a;
    Data *b;

    std::cout << "\n//----- Before -----//" << std::endl; 
    std::cout << data.age << " / " << data.name << " / " << data.city << std::endl;
    
    a = serialize(&data);
    std::cout << "\n//--- uintptr_t ----//" << std::endl;
    std::cout << a << std::endl;

    b = deserialize(a);
    std::cout << "\n//----- After -----//" << std::endl; 
    std::cout << b->age << " / " << b->name << " / " << b->city << "\n"<< std::endl;
}