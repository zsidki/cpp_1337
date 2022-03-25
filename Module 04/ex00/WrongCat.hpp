#ifndef WRONGCat_HPP
# define WRONGCat_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(const WrongCat &instance);
    ~WrongCat();
    WrongCat & operator = (const WrongCat &instance);
    void makeSound() const;

};

std::ostream &	operator<<( std::ostream & ostr, WrongCat const & instance);

#endif