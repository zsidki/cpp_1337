#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog 🐶";
    std::cout<< "Call "<< this->_type << std::endl;
    Brain* b = new Brain();
    this->d_brain = b;
}

Dog::Dog(const Dog &dog)  : Animal()
{
    Brain* b = new Brain();
    this->d_brain = b;
    *this = dog;
}

Dog::~Dog()
{
    std::cout<< this->_type <<" left"<< std::endl;
}

Dog & Dog::operator= (const Dog &instance)
{
    std::cout << "Dog Assignement! "<< std::endl;
    this->d_brain = instance.d_brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<<" Dog 🐶: 🐕 Hoooow  "<<std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->d_brain);
}