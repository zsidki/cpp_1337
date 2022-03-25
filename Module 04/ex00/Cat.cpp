#include "Cat.hpp"

Cat::Cat(void){
    this->_type = "Cat";
    std::cout<< "Cat called"<< std::endl;


}

// Cat::Cat(const Cat &instance){
//     *this = instance;
// }

Cat::~Cat(){
        std::cout<< "Cat left"<< std::endl;

}

// Cat & Cat::operator = (const Cat &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }


void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}

