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

void ClapTrap::setAttack_Damage(unsigned int amount)
{
    this -> _attack_damage = amount;
}

unsigned int ClapTrap::getAttack_Damage(void) const
{
    return (this->_attack_damage);
}

// Member functions
void ClapTrap::attack(const std::string& target)
{

    std::cout << "ClapTrap "<< _name << "attacks "<< target << ", causing " << _attack_damage << "points of damage!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ( _hit_points != 0 && _energy_point != 0 )
    {
        _hit_points - _attack_damage;
    }
    std::cout << "ClapTrap "<< _name << "takeDamge "<< amount << ", causing " << _attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ( _hit_points != 0 && _energy_point != 0 )
    {
        _hit_points - _attack_damage;
    }
        std::cout << "ClapTrap "<< _name << "takeDamge "<< amount << ", causing " << _attack_damage << "points of damage!" << std::endl;
}
