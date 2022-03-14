#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class	HumanB{

	private:
		std::string _name;
		Weapon *_weapon;

	public:
		void setWeapon(Weapon& weapon);
		HumanB(std::string name);
		//~HumanB();
    	void attack() const;

};


#endif