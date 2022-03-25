#include "Cat.hpp"

Cat::Cat(void){

}

// Cat::Cat(const Cat &instance){
//     *this = instance;
// }

Cat::~Cat(){

}

// Cat & Cat::operator = (const Cat &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }


void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}
