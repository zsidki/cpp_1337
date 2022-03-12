#include "Zombie.hpp"

Zombie *newZombie( std::string name)

{	
	Zombie*		zombie = new Zombie(name);
	//std::cout << zombie << std::endl;
	return zombie;
}