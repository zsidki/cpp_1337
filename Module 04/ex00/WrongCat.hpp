#ifndef WRONGCat_HPP
# define WRONGCat_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(const WrongCat &WrongCat);
    ~WrongCat();
    WrongCat & operator = (const WrongCat &WrongCat);
    void makeSound() const;

};


#endif