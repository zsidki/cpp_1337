#include "Dog.hpp"

Dog::Dog(void){
    this->_type = "Dog";
    std::cout<< "Dog called"<< std::endl;

}

// Dog::Dog(const Dog &instance){
//     *this = instance;
// }

Dog::~Dog(){
        std::cout<< "Dog left"<< std::endl;

}

// Dog & Dog::operator = (const Dog &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }


void Dog::makeSound() const
{
    std::cout<<" Dog 🐶: 🐕 Hoooow  "<<std::endl;
}
