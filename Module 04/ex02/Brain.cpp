#include "Brain.hpp"

Brain::Brain(void){
    

}

Brain::Brain(const Brain &instance)
{

    *this = instance;
}

Brain::~Brain()
{
    std::cout << " Brain left"<< std::endl;
}

Brain & Brain::operator = (const Brain &brain)
{

    for(int i = 0; i< 100; i++)
        this->_ideas[i] = brain._ideas[i];
    return (*this);
}