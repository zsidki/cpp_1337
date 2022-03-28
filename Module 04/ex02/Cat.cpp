#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat 🐱";
    std::cout<< "Call "<< this->_type << std::endl;
    this->c_brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal()
{
    std::cout << "Cat Copy Constructor !!"<< std::endl;
    delete this->c_brain;
    this->c_brain = new Brain();
    *this = cat;
}

Cat::~Cat()
{
    delete this->c_brain;
    std::cout<< this->_type <<" left"<< std::endl;

}

Brain *Cat::getBrain() const
{
    return (this->c_brain);
}

Cat& Cat::operator= (const Cat &cat)
{
    std::cout << "Cat Assignment! "<< std::endl;
     *this->c_brain = *(cat.getBrain());
    return (*this);
}

void Cat::makeSound() const
{
    std::cout<<" Cat 🐱: 🐈 Meow"<<std::endl;
}
