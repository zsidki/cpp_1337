#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
protected:
    std:: string _type;

private:

public:
    Cat(void);
    Cat(const Cat &instance);
    ~Cat();
    Cat & operator = (const Cat &instance);
    void makeSound() const;

};

std::ostream &	operator<<( std::ostream & ostr, Cat const & instance);

#endif