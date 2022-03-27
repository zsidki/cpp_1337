#include "WrongAnimal.hpp"

// --------------- Constructors --------------- //
WrongAnimal::WrongAnimal(void){
    this->_type = "WrongAnimal";
    std::cout<< "call "<< this->_type << std::endl;

}

// ----------- Copy Constructors ------------- //
WrongAnimal::WrongAnimal(const WrongAnimal &instance){
    *this = instance;
}
// --------------- Destructors --------------- //
WrongAnimal::~WrongAnimal(){
    std::cout << this->_type << " left"<< std::endl;

}

// -------------  Operator Overload --------------- //

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &instance){
    this->_type = instance._type;
    return (*this);
}

//----------- Setter & Getter --------------//
void	WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string     WrongAnimal::getType(void) const
{
    return (this->_type);
}

// -------------  member functions ---------------- //

void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal Sound "<<std::endl;
}
