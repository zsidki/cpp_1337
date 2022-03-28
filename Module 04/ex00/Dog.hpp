#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"


class Dog : public Animal
{
public:
    Dog(void);
    Dog(const Dog &Dog);
    ~Dog();
    Dog & operator = (const Dog &Dog);
    void makeSound() const;

};

#endif