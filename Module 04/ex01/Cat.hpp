#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
protected:

private:
    Brain* c_brain;
public:
    Cat(void);
    Cat(const Cat &obj);
    ~Cat();
    Cat & operator = (const Cat &instance);
    void makeSound() const;

};

std::ostream &	operator<<( std::ostream & ostr, Cat const & instance);

#endif