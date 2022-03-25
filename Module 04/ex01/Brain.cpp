#include "Brain.hpp"

Brain::Brain(void){

}

Brain::Brain(const Brain &instance){
    *this = instance;
}

Brain::~Brain(){

}

Brain & Brain::operator = (const Brain &instance){
    //this->Attributes = instance.attributes
    return (*this);
}