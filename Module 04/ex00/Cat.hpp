#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{

public:

    Cat();
    ~Cat();
    Cat(Cat const &cat);

    Cat& operator = (Cat const &cat);

    void makeSound() const;

};

#endif
