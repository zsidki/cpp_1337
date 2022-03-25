#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"


class Dog : public Animal
{
protected:

private:

public:
    Dog(void);
    Dog(const Dog &instance);
    ~Dog();
    Dog & operator = (const Dog &instance);
    void makeSound() const;

};

std::ostream &	operator<<( std::ostream & ostr, Dog const & instance);

#endif