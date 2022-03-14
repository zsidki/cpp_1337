#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :  _weapon(weapon)
{
    this->name = name;
}

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << _weapon.getType() << std::endl;
}
