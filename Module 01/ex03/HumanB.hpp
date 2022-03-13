#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	HumanB{

	private:
	std::string name;
	Weapon w;
	std::string type;


	public:
	void setType(std::string type);
	void setWeapon(std::string type);
	//void setType(std::string type);
	//std::string getType();
    std::string attack();
	void setWeapon(std::string type);

};


#endif