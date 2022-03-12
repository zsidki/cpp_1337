#include "Zombie.hpp"

int     main()
{
	int	n =1;
    Zombie zombie0 = Zombie("zombie0 ");
	Zombie *zombie1 = zombieHorde(n, "zombie3 ");
	Zombie *zombie2 = zombieHorde(n, "zombie4 ");

	zombie0.announce();
	zombie1->announce();
	zombie2->announce();

	delete []zombie1;
	delete []zombie2;

	return (0);

} 