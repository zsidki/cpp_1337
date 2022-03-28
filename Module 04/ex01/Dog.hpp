#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
    Brain* d_brain;

public:
    Dog(void);
    Dog(const Dog &obj);
    ~Dog();

    Dog & operator = (const Dog &instance);

    void makeSound() const;

    Brain* getBrain() const;

};

#endif