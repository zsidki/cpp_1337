#ifndef HUMANA_HPP
# define HUMANA_HPP


# include <iostream>
# include <string>
# include <iomanip>
#include "Weapon.hpp"
class	HumanA{

	private:
		std::string name;
		Weapon  &_weapon;
	public:

    void attack() const;
	HumanA(std::string name, Weapon &weapon);
	//~HumanA();
};

#endif