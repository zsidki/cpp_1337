#include "Cat.hpp"

Cat::Cat(void){

}

Cat::Cat(const Cat &c_brain){
    Brain* c_brain = new Brain();
    *this = c_brain;
}

Cat::~Cat(){

delete c_brain;
}

// Cat & Cat::operator = (const Cat &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }


void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}

Cat& Cat::operator= (const Cat& other)
{
    this->_value = other._value;
    return (*this); 
}