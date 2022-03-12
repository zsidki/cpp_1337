#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return this->type;
}