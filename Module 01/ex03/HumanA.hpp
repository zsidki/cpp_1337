#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include <iomanip>
#include "Weapon.hpp"


class	HumanA{

	private:
		std::string name;
		Weapon w;
	public:

	//void setType(std::string type);
	//std::string getType();
    std::string attack();

};


#endif