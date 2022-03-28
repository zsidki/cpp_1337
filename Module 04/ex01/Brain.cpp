#include "Brain.hpp"

Brain::Brain(void){

}

Brain::Brain(const Brain &instance){
    *this = instance;
}

Brain::~Brain()
{

}

Brain & Brain::operator = (const Brain &brain)
{
    this->_ideas[100] = brain._ideas[100];
    return (*this);
}