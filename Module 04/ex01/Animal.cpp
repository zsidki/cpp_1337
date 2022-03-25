#include "Animal.hpp"

Animal::Animal(void){

}

// Animal::Animal(const Animal &instance){
//     *this = instance;
// }

Animal::~Animal(){

}

// Animal & Animal::operator = (const Animal &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }

void	Animal::setType(std::string type)
{
    this->_type = type;
}

std::string     Animal::getType(void) const
{
    return (this->_type);
}


void Animal::makeSound() const
{
    std::cout<<" Animal Sound "<<std::endl;
}
