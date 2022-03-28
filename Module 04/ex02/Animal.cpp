#include "Animal.hpp"

// --------------- Constructors --------------- //
Animal::Animal(void){
    this->_type = "Animal";
    std::cout<< "call "<< this->_type << std::endl;

}

// ----------- Copy Constructors ------------- //
Animal::Animal(const Animal &instance){
    *this = instance;
}
// --------------- Destructors --------------- //
Animal::~Animal(){
    std::cout << this->_type << " left"<< std::endl;

}

// -------------  Operator Overload --------------- //

Animal & Animal::operator = (const Animal &instance){
    this->_type = instance._type;
    return (*this);
}

//----------- Setter & Getter --------------//
void	Animal::setType(std::string type)
{
    this->_type = type;
}

std::string     Animal::getType(void) const
{
    return (this->_type);
}

// -------------  member functions ---------------- //

// void Animal::makeSound() const
// {
//     std::cout<<" Animal Sound "<<std::endl;
// }
