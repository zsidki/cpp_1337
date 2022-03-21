#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

// Default destructor
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

// Parametrized constructor
ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit_points  = 10;
    this->_energy_point = 10;
    this->_attack_damage = 0;
}

// Member functions
void ClapTrap::attack(const std::string& target)
{
    //ClapTrap <name> attacks <target>, causing <damage> points of damage!
    std::cout << "";
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
