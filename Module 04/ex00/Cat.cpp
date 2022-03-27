#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout<< "Call "<< this->_type << std::endl;
}

Cat::~Cat()
{
    std::cout<< this->_type <<" left"<< std::endl;
}

Cat::Cat(Cat const &cat)
{
    *this = cat;
}

Cat& Cat::operator = (Cat const &cat)
{
    this->_type = cat._type;
    return (*this);
}


void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}

