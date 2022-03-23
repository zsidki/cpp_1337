#include "ClapTrap.hpp"

int main( void ) 
{

    ClapTrap fighter1("fighter1");
    ClapTrap fighter2("fighter2");

    fighter1.attack("fighter2");
    fighter2.takeDamage(fighter1.getAttack_Damage());
    //fighter2.takeDamage(1);

    
    return 0;
}