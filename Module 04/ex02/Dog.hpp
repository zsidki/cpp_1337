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
    Dog(const Dog &dog);
    ~Dog();

    Dog & operator = (const Dog &dog);

    void makeSound() const;

    Brain* getBrain() const;

};

#endif