#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat 🐱";
    std::cout<< "Call "<< this->_type << std::endl;
}

WrongCat::WrongCat(WrongCat const &WrongCat) : WrongAnimal()
{
    *this = WrongCat;
    std::cout<< "Call Copy "<< this->_type << std::endl;

}

WrongCat::~WrongCat()
{
    std::cout<< this->_type <<" left"<< std::endl;
}

WrongCat& WrongCat::operator = (WrongCat const &WrongCat)
{
    this->_type = WrongCat._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout<<" WrongCat 🐱: 🐈 Meow"<<std::endl;
}

// WrongCat::~WrongCat(){
//       //  std::cout <<  __PRETTY_FUNCTION__ << std::endl;
// }
