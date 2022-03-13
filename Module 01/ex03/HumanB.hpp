#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	HumanB{

	private:
	std::string name;
	Weapon w;

	public:

	//void setType(std::string type);
	//std::string getType();
    std::string attack();

};


#endif