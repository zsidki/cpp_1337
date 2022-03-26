#include "Dog.hpp"

Dog::Dog(void){
    Brain* b = new Brain();
    this->d_brain = b;
}

Dog::Dog(const Dog &obj){
    Brain* b = new Brain();
    this->d_brain = b;
    *this = obj;
}

Dog::~Dog(){
}

Dog & Dog::operator= (const Dog &instance){
    this->d_brain = instance.d_brain;
    return (*this);
}


void Dog::makeSound() const
{
    std::cout<<" Dog 🐶: 🐕 Hoooow  "<<std::endl;
}
