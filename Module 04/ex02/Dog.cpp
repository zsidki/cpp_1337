#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog 🐶";
    std::cout<< "Call "<< this->_type << std::endl;
    this->d_brain  = new Brain();
}

Dog::Dog(const Dog &dog)  : Animal()
{
    std::cout << "Dog Copy Constructor !!"<< std::endl;
    delete this->d_brain;
    this->d_brain = new Brain();
    *this = dog;
}

Dog::~Dog()
{
    delete this->d_brain;
    std::cout<< this->_type <<" left"<< std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->d_brain);
}

Dog& Dog::operator= (const Dog &dog)
{
    std::cout << "Dog Assignement! "<< std::endl;
    *this->d_brain = *(dog.getBrain());
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<<" Dog 🐶: 🐕 Hoooow  "<<std::endl;
}
