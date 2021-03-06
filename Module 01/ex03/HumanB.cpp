#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack() const
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}
