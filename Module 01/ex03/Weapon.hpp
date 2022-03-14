#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Weapon{

	private:
	std::string type;

	public:
	void setType(std::string type);
	//void setWeapon(std::string type);

	const std::string& getType() const;
	//std::string getWeapon();
	Weapon(std::string type);
	Weapon();
	~Weapon();

};


#endif