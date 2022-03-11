#include "Zombie.hpp"

int     main()
{
    // Zombie zombie1 = Zombie("zombie1");
    // //Zombie zombie2 = new zombie("zombie2");

    // zombie1.announce();

    // randomChump("zombie_1");

    // delete zombie1;

    Zombie zombie0 = Zombie("zom0");
	Zombie *zombie1 = new Zombie("zom1");
	Zombie *zombie2 = new Zombie("zom2");
	Zombie *zombie3 = newZombie("zom3");
	Zombie *zombie4 = newZombie("zom4");

	zombie0.announce();
	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	zombie4->announce();

	randomChump("zom_ran_0");
	randomChump("zom_ran_1");
	randomChump("zom_ran_2");

	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;

	return (0);

}