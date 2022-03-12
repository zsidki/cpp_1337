#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "HumanA.hpp"
# include "HumanB.hpp"

class	Weapon{

	private:
	std::string type;

	public:
	void setType(std::string type);
	void setWeapon(std::string type);

	std::string getType();
	std::string getWeapon();
	

};


#endif