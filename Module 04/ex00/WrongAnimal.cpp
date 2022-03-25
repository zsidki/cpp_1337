#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void){

}

// WrongAnimal::WrongAnimal(const WrongAnimal &instance){
//     *this = instance;
// }

WrongAnimal::~WrongAnimal(){
}

// WrongAnimal & WrongAnimal::operator = (const WrongAnimal &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }

void	WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string     WrongAnimal::getType(void) const
{
    return (this->_type);
}


void WrongAnimal::makeSound() const
{
    std::cout<<" WrongAnimal Sound "<<std::endl;
}
