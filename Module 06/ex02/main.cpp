#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int n = rand() % 3;
    if (n == 0)
        return new A;
    else if (n == 1)
        return new B;
    else
        return new C;

    return NULL; // never reached
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base& p)
{
    try{
        p = dynamic_cast<A&>(p); 
            std::cout << "A" << std::endl; 
        return;
        }
    catch(std::exception& e){}

    try{
            p = dynamic_cast<B&>(p); 
            std::cout << "B" << std::endl; 
            return;
        }
    catch(std::exception& e){}

    try{
            p = dynamic_cast<C&>(p); 
            std::cout << "C" << std::endl; 
            return;
        }
    catch(std::exception& e){}

    std::cout << "unknown" << std::endl;
}

int main(){
    Base * p = generate();
    identify(p);
    identify(*p);
    delete p;
    return 0;
}