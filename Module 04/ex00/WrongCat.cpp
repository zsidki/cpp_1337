#include "WrongCat.hpp"
WrongCat::WrongCat(void){

    this->_type = "WrongCat";
    std::cout<< "WrongCat called"<< std::endl;


}

// WrongCat::WrongCat(const WrongCat &instance){
//     *this = instance;
// }

WrongCat::~WrongCat(){
      //  std::cout <<  __PRETTY_FUNCTION__ << std::endl;


}

// WrongCat & WrongCat::operator = (const WrongCat &instance){
//     //this->Attributes = instance.attributes
//     return (*this);
// }


void WrongCat::makeSound() const
{
    std::cout<<" WrongCat 🐱: 🐈 Meow"<<std::endl;
}

