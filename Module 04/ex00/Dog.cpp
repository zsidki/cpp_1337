#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog 🐶";
    std::cout<< "Call "<< this->_type << std::endl;
}

Dog::Dog(Dog const &Dog) : Animal()
{
    *this = Dog;
}

Dog::~Dog()
{
    std::cout<< this->_type <<" left"<< std::endl;
}

Dog& Dog::operator = (Dog const &Dog)
{
    this->_type = Dog._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<<" Dog 🐶: 🐕 Hoooow  "<<std::endl;
}
