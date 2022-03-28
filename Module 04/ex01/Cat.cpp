#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat 🐱";
    std::cout<< "Call "<< this->_type << std::endl;
    Brain* b = new Brain();
    this->c_brain = b;
}

Cat::Cat(const Cat &cat) : Animal()
{
    Brain* b = new Brain();
    this->c_brain = b;
    *this = cat;
}

Cat::~Cat()
{
    std::cout<< this->_type <<" left"<< std::endl;

}

Cat & Cat::operator= (const Cat &instance)
{
    std::cout << "Cat Assignement! "<< std::endl;
    this->c_brain = instance.c_brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->c_brain);
}