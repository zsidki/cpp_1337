#include "Dog.hpp"

Dog::Dog(void){

}

Dog::Dog(const Dog &d_brain){
    Brain* d_brain = new Brain();
    *this = d_brain;
}

Dog::~Dog(){

}

// Dog & Dog::operator = (const Dog &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }


void Dog::makeSound() const
{
    std::cout<<" Dog 🐶: 🐕 Hoooow  "<<std::endl;
}
