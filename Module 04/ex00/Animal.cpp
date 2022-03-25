#include "Animal.hpp"

Animal::Animal(void){
    this->_type = "Animal";
    std::cout<< "Animal called"<< std::endl;

}

// Animal::Animal(const Animal &instance){
//     *this = instance;
// }

Animal::~Animal(){
    std::cout<< "Animal left"<< std::endl;

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
