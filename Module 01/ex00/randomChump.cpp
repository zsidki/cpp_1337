#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie		zombie_alpha =  Zombie(name);
    zombie_alpha.announce();
}