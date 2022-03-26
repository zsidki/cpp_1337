#include "Cat.hpp"

Cat::Cat(void){
    Brain* b = new Brain();
    this->c_brain = b;
}

Cat::Cat(const Cat &obj){
    Brain* b = new Brain();
    this->c_brain = b;
    *this = obj;
}

Cat::~Cat(){
}

Cat & Cat::operator= (const Cat &instance){
    this->c_brain = instance.c_brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}

