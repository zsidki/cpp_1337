#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

private:
    Brain* c_brain;

public:
    Cat();
    Cat(const Cat &cat);
    ~Cat();

    Cat & operator = (const Cat &cat);

    void makeSound() const;

    Brain* getBrain() const;

};


#endif